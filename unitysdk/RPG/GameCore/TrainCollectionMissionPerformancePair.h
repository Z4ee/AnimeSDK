#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR_METHOD_2_7901BC0643A20B24_OFFSET UNITYSDK_OFFSET(0x190A4BA0)
#define RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x190A4D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainCollectionMissionPerformancePair_TypeDefinitionIndex = 20026;

	class TrainCollectionMissionPerformancePair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14
		::System::UInt32 PerformanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7901BC0643A20B24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainCollectionMissionPerformancePair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainCollectionMissionPerformancePair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR_METHOD_2_7901BC0643A20B24_OFFSET))(a1, a2);
		}
	};
}
