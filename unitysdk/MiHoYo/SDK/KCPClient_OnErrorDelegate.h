#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D2A3B0)
#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D2A430)
#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D2A060)
#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D2A040)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_OnErrorDelegate_TypeDefinitionIndex = 42736;

	class KCPClient_OnErrorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::KCPErrorCode eErrCode, ::System::String* strErrMsg)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_INVOKE_OFFSET))(this, eErrCode, strErrMsg);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::KCPErrorCode eErrCode, ::System::String* strErrMsg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_BEGININVOKE_OFFSET))(this, eErrCode, strErrMsg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
