#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B898240)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1B899CA0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B899CC0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1B899CB0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B899CD0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B899CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleTeamMember_TypeDefinitionIndex = 63919;

	class ExpeditionBattleTeamMember : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
		::Enum_3_01618AD0437C8486 _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_AVATAR_OFFSET))(this, a1);
		}

		::Enum_3_01618AD0437C8486 get_Type()
		{
			return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_01618AD0437C8486 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_TYPE_OFFSET))(this, a1);
		}

		static ::RPG::Client::ExpeditionBattleTeamMember* Create(::RPG::AvatarSystem::IAvatar* a1, ::Enum_3_01618AD0437C8486 a2)
		{
			return ((::RPG::Client::ExpeditionBattleTeamMember*(*)(::RPG::AvatarSystem::IAvatar*, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_CREATE_OFFSET))(a1, a2);
		}
	};
}
