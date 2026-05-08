#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_AuthCodeCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C88400)
#define MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C88440)
#define MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C658A0)
#define MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C883F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_TryGetAuthCodeDelegate_TypeDefinitionIndex = 18592;

	class PSDelegate_TryGetAuthCodeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* clientId, ::MiHoYo::SDK::PSDelegate_AuthCodeCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PSDelegate_AuthCodeCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE_INVOKE_OFFSET))(this, clientId, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* clientId, ::MiHoYo::SDK::PSDelegate_AuthCodeCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PSDelegate_AuthCodeCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE_BEGININVOKE_OFFSET))(this, clientId, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_TRYGETAUTHCODEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
