#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class RejectInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2FAB10)
#define EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2FAB40)
#define EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2FAB00)
#define EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FAA10)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnRejectInviteCallback_TypeDefinitionIndex = 42777;

	class OnRejectInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::RejectInviteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::RejectInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::RejectInviteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::RejectInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONREJECTINVITECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
