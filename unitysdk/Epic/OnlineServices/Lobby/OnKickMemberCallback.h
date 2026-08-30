#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class KickMemberCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB39C630)
#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB39C660)
#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB39C620)
#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB39C530)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnKickMemberCallback_TypeDefinitionIndex = 45800;

	class OnKickMemberCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::KickMemberCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::KickMemberCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::KickMemberCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::KickMemberCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
