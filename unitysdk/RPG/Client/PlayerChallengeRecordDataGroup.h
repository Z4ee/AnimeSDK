#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F76144571501212_Enum_3_060898AA908AAA4E_4.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_0F76144571501212;
class Class_1_6A206029A8384F7E;
namespace RPG::Client { class PlayerChallengeRecordData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATECHALLENGERECORDDATA_OFFSET UNITYSDK_OFFSET(0x1AE02B30)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE02C40)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATABYCHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x1AE025D0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETCHALLENGERECORDDATA_OFFSET UNITYSDK_OFFSET(0x1AE02660)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETDISPLAYTYPEBYCHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x1AE021E0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETRECORDDISPLAYTYPEBYSTTCASE_OFFSET UNITYSDK_OFFSET(0x1AE02AB0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_HASDATA_OFFSET UNITYSDK_OFFSET(0x1AE02740)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE027A0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE02540)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordDataGroup_TypeDefinitionIndex = 64332;

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

		static ::RPG::Client::BattleRecordDisplayType GetRecordDisplayTypeBySttCase(::Class_1_0F76144571501212_Enum_3_060898AA908AAA4E_4 a1)
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::Class_1_0F76144571501212_Enum_3_060898AA908AAA4E_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETRECORDDISPLAYTYPEBYSTTCASE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleRecordDisplayType GetDisplayTypeByChallengeType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_GETDISPLAYTYPEBYCHALLENGETYPE_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerChallengeRecordDataGroup* Create(::Class_1_6A206029A8384F7E* a1)
		{
			return ((::RPG::Client::PlayerChallengeRecordDataGroup*(*)(::Class_1_6A206029A8384F7E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerChallengeRecordData* CreateChallengeRecordData(::Class_1_0F76144571501212* a1)
		{
			return ((::RPG::Client::PlayerChallengeRecordData*(*)(::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATAGROUP_CREATECHALLENGERECORDDATA_OFFSET))(a1);
		}
	};
}
