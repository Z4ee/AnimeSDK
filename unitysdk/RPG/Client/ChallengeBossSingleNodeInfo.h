#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_11;
class Class_1_52AE8D741A62A8F4;
class Class_1_FA4F4A67B1C04320_143;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChallengeTeamInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MonsterGuideData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x92BA660)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x92BD350)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x92BB180)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_TRYGETAVATAR_OFFSET UNITYSDK_OFFSET(0x92BB410)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_UPDATEBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x92BB6D0)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x92BD340)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossSingleNodeInfo_TypeDefinitionIndex = 51185;

	class ChallengeBossSingleNodeInfo : public ::System::Object
	{
	public:
		::RPG::Client::MonsterGuideData* MonsterGuideData; // 0x10
		::RPG::Client::MonsterData* MonsterData; // 0x18
		::RPG::Client::ChallengeTeamInfo* TeamInfo; // 0x20
		::System::Boolean IsPass; // 0x28
		::System::Boolean HasBeenChallenged; // 0x29
		::System::Boolean HasTeamInfo; // 0x2A
		::System::UInt32 BuffID; // 0x2C
		::System::UInt32 MaxScore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4CF8088A158DCE25_11* msg, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* avatarList, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_143*>* equipmentMap, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_52AE8D741A62A8F4*>* RelicMap)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_11*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_143*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_52AE8D741A62A8F4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_SYNC_OFFSET))(this, msg, avatarList, equipmentMap, RelicMap);
		}

		::System::Void UpdateBattleResult(::System::UInt32 score, ::System::Boolean win, ::System::UInt32 currentBuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_UPDATEBATTLERESULT_OFFSET))(this, score, win, currentBuffID);
		}

		static ::RPG::Client::ChallengeBossSingleNodeInfo* Create(::System::UInt32 monsterID)
		{
			return ((::RPG::Client::ChallengeBossSingleNodeInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_CREATE_OFFSET))(monsterID);
		}

		::RPG::Client::IAvatarInfoProvider* TryGetAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_TRYGETAVATAR_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_GETAVATARDATALIST_OFFSET))(this);
		}
	};
}
