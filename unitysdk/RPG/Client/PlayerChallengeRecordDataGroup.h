#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4E16FFD583F3B1DC_1_Enum_3_060898AA908AAA4E_6.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_4E16FFD583F3B1DC_1;
class Class_1_6A206029A8384F7E;
namespace RPG::Client { class PlayerChallengeRecordData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATECHALLENGERECORDDATA_OFFSET UNITYSDK_OFFSET(0xC49B4A0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xC49B5B0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATABYCHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0xC49AFC0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATA_OFFSET UNITYSDK_OFFSET(0xC49B050)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETDISPLAYTYPEBYCHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0xC49AD10)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETRECORDDISPLAYTYPEBYSTTCASE_OFFSET UNITYSDK_OFFSET(0xC49B430)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_HASDATA_OFFSET UNITYSDK_OFFSET(0xC49B130)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_SYNC_OFFSET UNITYSDK_OFFSET(0xC49B190)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xC49AF30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordDataGroup_TypeDefinitionIndex = 60066;

	class PlayerChallengeRecordDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::BattleRecordDisplayType, ::RPG::Client::PlayerChallengeRecordData*>* _ChallengeRecordGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP__CTOR_OFFSET))(this);
		}

		::RPG::Client::PlayerChallengeRecordData* GetChallengeRecordDataByChallengeType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::PlayerChallengeRecordData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATABYCHALLENGETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerChallengeRecordData* GetChallengeRecordData(::RPG::Client::BattleRecordDisplayType a1)
		{
			return ((::RPG::Client::PlayerChallengeRecordData*(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_HASDATA_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_6A206029A8384F7E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A206029A8384F7E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_SYNC_OFFSET))(this, a1);
		}

		static ::RPG::Client::BattleRecordDisplayType GetRecordDisplayTypeBySttCase(::Class_1_4E16FFD583F3B1DC_1_Enum_3_060898AA908AAA4E_6 a1)
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::Class_1_4E16FFD583F3B1DC_1_Enum_3_060898AA908AAA4E_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETRECORDDISPLAYTYPEBYSTTCASE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleRecordDisplayType GetDisplayTypeByChallengeType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETDISPLAYTYPEBYCHALLENGETYPE_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerChallengeRecordDataGroup* Create(::Class_1_6A206029A8384F7E* a1)
		{
			return ((::RPG::Client::PlayerChallengeRecordDataGroup*(*)(::Class_1_6A206029A8384F7E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerChallengeRecordData* CreateChallengeRecordData(::Class_1_4E16FFD583F3B1DC_1* a1)
		{
			return ((::RPG::Client::PlayerChallengeRecordData*(*)(::Class_1_4E16FFD583F3B1DC_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATECHALLENGERECORDDATA_OFFSET))(a1);
		}
	};
}
