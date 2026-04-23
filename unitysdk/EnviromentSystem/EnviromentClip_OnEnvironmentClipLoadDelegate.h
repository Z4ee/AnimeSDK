#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF90BDC0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF90BDF0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xF8FDF10)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xF90BDA0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentClip_OnEnvironmentClipLoadDelegate_TypeDefinitionIndex = 46180;

	class EnviromentClip_OnEnvironmentClipLoadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_INVOKE_OFFSET))(this, param);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* param, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_ONENVIRONMENTCLIPLOADDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
