#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_OnFriendInvitationNotifyCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA860)
#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA890)
#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA850)
#define MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA7E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_RegisterFriendInvitationNotifyDelegate_TypeDefinitionIndex = 7633;

	class ConsoleDelegate_RegisterFriendInvitationNotifyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_OnFriendInvitationNotifyCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_REGISTERFRIENDINVITATIONNOTIFYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
