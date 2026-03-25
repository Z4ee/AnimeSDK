#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F381659723E3F143_Enum_3_060898AA908AAA4E_5.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_6A206029A8384F7E;
class Class_1_F381659723E3F143;
namespace RPG::Client { class PlayerChallengeRecordData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATECHALLENGERECORDDATA_OFFSET UNITYSDK_OFFSET(0x9FE2CD0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9FE2EA0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATABYCHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x9FE2830)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATA_OFFSET UNITYSDK_OFFSET(0x9FE28C0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETDISPLAYTYPEBYCHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x9FE2620)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETRECORDDISPLAYTYPEBYSTTCASE_OFFSET UNITYSDK_OFFSET(0x9FE2C50)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_SYNC_OFFSET UNITYSDK_OFFSET(0x9FE29B0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE27A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordDataGroup_TypeDefinitionIndex = 52183;

	class PlayerChallengeRecordDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::BattleRecordDisplayType, ::RPG::Client::PlayerChallengeRecordData*>* _ChallengeRecordGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP__CTOR_OFFSET))(this);
		}

		::RPG::Client::PlayerChallengeRecordData* GetChallengeRecordDataByChallengeType(::RPG::GameCore::ChallengeGroupType GroupType)
		{
			return ((::RPG::Client::PlayerChallengeRecordData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATABYCHALLENGETYPE_OFFSET))(this, GroupType);
		}

		::RPG::Client::PlayerChallengeRecordData* GetChallengeRecordData(::RPG::Client::BattleRecordDisplayType type)
		{
			return ((::RPG::Client::PlayerChallengeRecordData*(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATA_OFFSET))(this, type);
		}

		::System::Void Sync(::Class_1_6A206029A8384F7E* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A206029A8384F7E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_SYNC_OFFSET))(this, rsp);
		}

		static ::RPG::Client::BattleRecordDisplayType GetRecordDisplayTypeBySttCase(::Class_1_F381659723E3F143_Enum_3_060898AA908AAA4E_5 sttCase)
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::Class_1_F381659723E3F143_Enum_3_060898AA908AAA4E_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETRECORDDISPLAYTYPEBYSTTCASE_OFFSET))(sttCase);
		}

		static ::RPG::Client::BattleRecordDisplayType GetDisplayTypeByChallengeType(::RPG::GameCore::ChallengeGroupType GroupType)
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETDISPLAYTYPEBYCHALLENGETYPE_OFFSET))(GroupType);
		}

		static ::RPG::Client::PlayerChallengeRecordDataGroup* Create(::Class_1_6A206029A8384F7E* rsp)
		{
			return ((::RPG::Client::PlayerChallengeRecordDataGroup*(*)(::Class_1_6A206029A8384F7E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATE_OFFSET))(rsp);
		}

		static ::RPG::Client::PlayerChallengeRecordData* CreateChallengeRecordData(::Class_1_F381659723E3F143* info)
		{
			return ((::RPG::Client::PlayerChallengeRecordData*(*)(::Class_1_F381659723E3F143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATECHALLENGERECORDDATA_OFFSET))(info);
		}
	};
}
