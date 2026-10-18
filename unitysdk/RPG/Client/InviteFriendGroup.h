#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_INVITEFRIENDGROUP_GET_FRIENDLIST_OFFSET UNITYSDK_OFFSET(0xD3753D0)
#define RPG_CLIENT_INVITEFRIENDGROUP_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xD3753C0)
#define RPG_CLIENT_INVITEFRIENDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD3753E0)

namespace RPG::Client
{
	inline static constexpr unsigned int InviteFriendGroup_TypeDefinitionIndex = 64260;

	class InviteFriendGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::PlayerBriefDisplayData*>* _FriendList_k__BackingField; // 0x10
		::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::TextID a1, ::System::Collections::Generic::IList_1<::RPG::Client::PlayerBriefDisplayData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::IList_1<::RPG::Client::PlayerBriefDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVITEFRIENDGROUP__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_TitleTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVITEFRIENDGROUP_GET_TITLETEXTID_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::PlayerBriefDisplayData*>* get_FriendList()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVITEFRIENDGROUP_GET_FRIENDLIST_OFFSET))(this);
		}
	};
}
