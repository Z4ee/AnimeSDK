#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC5D390)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC5D410)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC5D080)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5D060)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnLogErrorWithCodeAction_TypeDefinitionIndex = 37453;

	class SecurityTunnel_OnLogErrorWithCodeAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::SecurityTunnel_ErrorCode code, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_INVOKE_OFFSET))(this, code, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::SecurityTunnel_ErrorCode code, ::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_BEGININVOKE_OFFSET))(this, code, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
