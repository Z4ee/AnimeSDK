#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbyMemberUpdateReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D2732C0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D2732F0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D272DA0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D272D80)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLobbyMemberUpdateReceivedCallback_TypeDefinitionIndex = 36405;

	class OnLobbyMemberUpdateReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
