#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_GetCXTokenCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19FCB790)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19FCB860)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19FCAF90)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCAF80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TryGetCXTokenDelegate_TypeDefinitionIndex = 18544;

	class ConsoleDelegate_TryGetCXTokenDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* webEndpoint, ::System::Boolean forceRefresh, ::System::String* extHeaders, ::System::String* body, ::System::UInt64 bodySize, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::UInt64, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_INVOKE_OFFSET))(this, webEndpoint, forceRefresh, extHeaders, body, bodySize, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* webEndpoint, ::System::Boolean forceRefresh, ::System::String* extHeaders, ::System::String* body, ::System::UInt64 bodySize, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::UInt64, ::MiHoYo::SDK::ConsoleDelegate_GetCXTokenCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_BEGININVOKE_OFFSET))(this, webEndpoint, forceRefresh, extHeaders, body, bodySize, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYGETCXTOKENDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
