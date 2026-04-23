#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class PromoteMemberCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8EC4530)
#define EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8EC4560)
#define EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8EC3FE0)
#define EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC3FC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnPromoteMemberCallback_TypeDefinitionIndex = 41968;

	class OnPromoteMemberCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONPROMOTEMEMBERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
