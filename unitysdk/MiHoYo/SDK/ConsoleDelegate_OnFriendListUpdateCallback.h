#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A993740)
#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A9937B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A993450)
#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A993430)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OnFriendListUpdateCallback_TypeDefinitionIndex = 19448;

	class ConsoleDelegate_OnFriendListUpdateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDLISTUPDATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
