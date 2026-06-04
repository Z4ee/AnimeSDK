#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184663B0)
#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184663E0)
#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18462240)
#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18466340)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetGlobalUserAgentDelegate_TypeDefinitionIndex = 7786;

	class WebDelegate_SetGlobalUserAgentDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
