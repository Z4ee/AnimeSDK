#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TrainCollectionMissionPerformancePair; }

#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_1F94FCE9B4CD6087_OFFSET UNITYSDK_OFFSET(0x18666060)
#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_78FDB2165125FA4E_OFFSET UNITYSDK_OFFSET(0x186660E0)
#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x186660B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetupTrainCollectionSystem_TypeDefinitionIndex = 20028;

	class AdvSetupTrainCollectionSystem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainCollectionMissionPerformancePair*>* ColllectionMap; // 0x18
		::RPG::GameCore::PropButtonConfig* ButtonConfig; // 0x20
		::RPG::GameCore::ELevelPerformanceType NoCollectionPerformanceType; // 0x28
		::System::UInt32 NoCollectionPerformanceID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F94FCE9B4CD6087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_1F94FCE9B4CD6087_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78FDB2165125FA4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_78FDB2165125FA4E_OFFSET))(a1, a2);
		}
	};
}
