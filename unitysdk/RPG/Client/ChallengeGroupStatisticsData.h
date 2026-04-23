#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeGroupStatisticsData_ChallengeGroupStatisticLineup.h"
#include "unitysdk/System/ValueType.h"

class Class_1_769549C4DC5CD922;
class Class_1_D40936EF3BF54118_8;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }

#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F2EB40)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SETLINEUP_OFFSET UNITYSDK_OFFSET(0xD5310)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeGroupStatisticsData_TypeDefinitionIndex = 58142;

	struct alignas(8) ChallengeGroupStatisticsData
	{
		::System::UInt32 ChallengeGroupID; // 0x10
		::System::UInt32 ChallengeTimes; // 0x14
		::System::UInt32 MaxLevel; // 0x18
		::System::UInt32 Rounds; // 0x1C
		::System::UInt32 Score; // 0x20
		::System::UInt32 StarNum; // 0x24
		::Il2CppArray<::RPG::Client::ChallengeGroupStatisticsData_ChallengeGroupStatisticLineup>* Lineups; // 0x28

		static ::RPG::Client::ChallengeGroupStatisticsData Create(::Class_1_769549C4DC5CD922* rsp)
		{
			return ((::RPG::Client::ChallengeGroupStatisticsData(*)(::Class_1_769549C4DC5CD922*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_CREATE_OFFSET))(rsp);
		}

		::System::Void SetLineup(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D40936EF3BF54118_8*>* lineupList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D40936EF3BF54118_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SETLINEUP_OFFSET))(this, lineupList);
		}
	};
}
