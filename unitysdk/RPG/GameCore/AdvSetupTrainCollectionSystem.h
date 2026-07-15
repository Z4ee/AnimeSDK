#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TrainCollectionMissionPerformancePair; }

#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_37E81BB705F4A1FC_OFFSET UNITYSDK_OFFSET(0x1AE47A30)
#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_EE3A8E3654E62AF9_OFFSET UNITYSDK_OFFSET(0x1AE47A70)
#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE47A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetupTrainCollectionSystem_TypeDefinitionIndex = 20252;

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

		static ::System::Void Method_3_37E81BB705F4A1FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_37E81BB705F4A1FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE3A8E3654E62AF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_METHOD_3_EE3A8E3654E62AF9_OFFSET))(a1, a2);
		}
	};
}
