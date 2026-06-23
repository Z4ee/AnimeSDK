#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class KickMemberCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C71B5B0)
#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C71B5E0)
#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C71B0B0)
#define EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C71B090)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnKickMemberCallback_TypeDefinitionIndex = 35736;

	class OnKickMemberCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::KickMemberCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::KickMemberCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::KickMemberCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::KickMemberCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONKICKMEMBERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
