#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomFriendInviteContextBase___O_TypeDefinitionIndex = 66393;

	class OnlinePlayRoomFriendInviteContextBase___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PlayerBriefDisplayData*>** StaticGet__0____CompareOtherFriend()
		{
			return (::System::Comparison_1<::RPG::Client::PlayerBriefDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomFriendInviteContextBase___O_TypeDefinitionIndex)->GetStaticField(0x3050);
		}
	};
}
