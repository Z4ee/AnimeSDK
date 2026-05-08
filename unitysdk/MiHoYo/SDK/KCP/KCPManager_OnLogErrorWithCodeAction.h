#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A49E1E0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A49E260)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A49DE90)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49DE80)

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPManager_OnLogErrorWithCodeAction_TypeDefinitionIndex = 35463;

	class KCPManager_OnLogErrorWithCodeAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::KCPErrorCode code, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION_INVOKE_OFFSET))(this, code, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::KCPErrorCode code, ::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION_BEGININVOKE_OFFSET))(this, code, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGERRORWITHCODEACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
