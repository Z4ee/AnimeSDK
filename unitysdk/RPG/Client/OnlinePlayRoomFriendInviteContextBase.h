#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class InviteFriendGroup; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9DD640)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE_GETINVITEFRIENDGROUPS_OFFSET UNITYSDK_OFFSET(0xD9DC130)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE__COMPAREOTHERFRIEND_OFFSET UNITYSDK_OFFSET(0xD9DD680)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD9DD8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomFriendInviteContextBase_TypeDefinitionIndex = 66392;

	class OnlinePlayRoomFriendInviteContextBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::InviteFriendGroup*>* GetInviteFriendGroups()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::InviteFriendGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE_GETINVITEFRIENDGROUPS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE_DISPOSE_OFFSET))(this);
		}

		static ::System::Int32 _CompareOtherFriend(::RPG::Client::PlayerBriefDisplayData* a1, ::RPG::Client::PlayerBriefDisplayData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::PlayerBriefDisplayData*, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE__COMPAREOTHERFRIEND_OFFSET))(a1, a2);
		}
	};
}
