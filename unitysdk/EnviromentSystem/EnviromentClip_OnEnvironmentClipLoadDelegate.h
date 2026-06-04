#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x135C2350)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x135C2380)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x135C2340)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x135C2250)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentClip_OnEnvironmentClipLoadDelegate_TypeDefinitionIndex = 46763;

	class EnviromentClip_OnEnvironmentClipLoadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
