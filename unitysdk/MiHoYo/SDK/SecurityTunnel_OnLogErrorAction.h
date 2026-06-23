#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C55D100)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C55D130)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C55CC00)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55CBE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnLogErrorAction_TypeDefinitionIndex = 36791;

	class SecurityTunnel_OnLogErrorAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION_INVOKE_OFFSET))(this, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION_BEGININVOKE_OFFSET))(this, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
