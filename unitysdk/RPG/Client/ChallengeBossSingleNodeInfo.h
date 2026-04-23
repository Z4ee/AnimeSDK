#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_071D0EF220D742B6;
class Class_1_21C7581DFE99F091_12;
class Class_1_668FE281FA72D3E8_4;
class Class_1_D17272E82AE804C2_150;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChallengeTeamInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MonsterGuideData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9F22860)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9F24C20)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9F231A0)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_TRYGETAVATAR_OFFSET UNITYSDK_OFFSET(0x9F23430)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_UPDATEBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x9F236A0)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F24C10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossSingleNodeInfo_TypeDefinitionIndex = 58106;

	class ChallengeBossSingleNodeInfo : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeTeamInfo* TeamInfo; // 0x10
		::RPG::Client::MonsterGuideData* MonsterGuideData; // 0x18
		::RPG::Client::MonsterData* MonsterData; // 0x20
		::System::UInt32 MaxScore; // 0x28
		::System::Boolean IsPass; // 0x2C
		::System::Boolean HasBeenChallenged; // 0x2D
		::System::Boolean HasTeamInfo; // 0x2E
		::System::UInt32 BuffID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_21C7581DFE99F091_12* msg, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>* avatarList, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_150*>* equipmentMap, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_071D0EF220D742B6*>* RelicMap)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_12*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_150*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_071D0EF220D742B6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_SYNC_OFFSET))(this, msg, avatarList, equipmentMap, RelicMap);
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
