#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeGroupStatisticsData_ChallengeGroupStatisticLineup.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4E16FFD583F3B1DC;
class Class_1_D40936EF3BF54118_3;
class Class_1_E577B5580A99D425_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChallengeGroupData; }

#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB545690)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISSPECIALTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0x138420)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISTIERCE_OFFSET UNITYSDK_OFFSET(0x89B40)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISSPECIALTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0x138430)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISTIERCE_OFFSET UNITYSDK_OFFSET(0x89B50)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0xB5464E0)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB546330)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTIERCESTARSTATE_OFFSET UNITYSDK_OFFSET(0xB546010)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTOTALCHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0xB545EB0)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETLINEUP_OFFSET UNITYSDK_OFFSET(0x138450)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETTIERCESTATISTICS_OFFSET UNITYSDK_OFFSET(0x138440)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeGroupStatisticsData_TypeDefinitionIndex = 59069;

	struct alignas(8) ChallengeGroupStatisticsData
	{
		::System::UInt32 ChallengeGroupID; // 0x10
		::System::UInt32 ChallengeTimes; // 0x14
		::System::UInt32 MaxLevel; // 0x18
		::System::UInt32 Rounds; // 0x1C
		::System::UInt32 Score; // 0x20
		::System::UInt32 StarNum; // 0x24
		::System::Boolean _IsTierce_k__BackingField; // 0x28
		::System::Boolean _IsSpecialTargetAchieved_k__BackingField; // 0x29
		::Il2CppArray<::RPG::Client::ChallengeGroupStatisticsData_ChallengeGroupStatisticLineup>* Lineups; // 0x30

		::System::Boolean get_IsTierce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISTIERCE_OFFSET))(this);
		}

		::System::Void set_IsTierce(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISTIERCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialTargetAchieved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISSPECIALTARGETACHIEVED_OFFSET))(this);
		}

		::System::Void set_IsSpecialTargetAchieved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISSPECIALTARGETACHIEVED_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengeGroupStatisticsData Create(::Class_1_4E16FFD583F3B1DC* a1)
		{
			return ((::RPG::Client::ChallengeGroupStatisticsData(*)(::Class_1_4E16FFD583F3B1DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Void _GetTierceStarState(::RPG::Client::ChallengeGroupData* a1, ::Class_1_E577B5580A99D425_1* a2, ::System::Boolean& a3, ::System::UInt32& a4)
		{
			return ((::System::Void(*)(::RPG::Client::ChallengeGroupData*, ::Class_1_E577B5580A99D425_1*, ::System::Boolean&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTIERCESTARSTATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 _GetNormalModeMaxLevel(::RPG::GameCore::ChallengeGroupType a1, ::Class_1_4E16FFD583F3B1DC* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType, ::Class_1_4E16FFD583F3B1DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVEL_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetNormalModeMaxLevelStarNum(::RPG::GameCore::ChallengeGroupType a1, ::Class_1_4E16FFD583F3B1DC* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType, ::Class_1_4E16FFD583F3B1DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVELSTARNUM_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetTotalChallengeTimes(::RPG::GameCore::ChallengeGroupType a1, ::Class_1_4E16FFD583F3B1DC* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType, ::Class_1_4E16FFD583F3B1DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTOTALCHALLENGETIMES_OFFSET))(a1, a2);
		}

		::System::Void _SetTierceStatistics(::RPG::Client::ChallengeGroupData* a1, ::Class_1_E577B5580A99D425_1* a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::Class_1_E577B5580A99D425_1*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETTIERCESTATISTICS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetLineup(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D40936EF3BF54118_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D40936EF3BF54118_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETLINEUP_OFFSET))(this, a1);
		}
	};
}
