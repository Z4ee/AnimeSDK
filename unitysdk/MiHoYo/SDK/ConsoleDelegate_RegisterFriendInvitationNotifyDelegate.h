#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_OnFriendInvitationNotifyCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DA05C40)
#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DA05C70)
#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DA05720)
#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA05700)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_RegisterFriendInvitationNotifyDelegate_TypeDefinitionIndex = 19788;

	class ConsoleDelegate_RegisterFriendInvitationNotifyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
