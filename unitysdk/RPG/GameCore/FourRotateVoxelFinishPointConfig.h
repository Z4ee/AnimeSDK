#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_1B67ECBC6ACA7390_OFFSET UNITYSDK_OFFSET(0x1D1143B0)
#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_FD8F777C61D70BB1_OFFSET UNITYSDK_OFFSET(0x1D114360)
#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1143A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelFinishPointConfig_TypeDefinitionIndex = 16586;

	class FourRotateVoxelFinishPointConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsFinishPoint; // 0x10
		::RPG::GameCore::PropButtonConfig* BeforeFinishInteractButtonConfig; // 0x18
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x20
		::System::Boolean IsFinishGameAfterReward; // 0x28
		::System::Boolean IsManualTriggerAll2DBrickUpgradeFinish; // 0x29
		::System::Int32 AnimMatIndex; // 0x2C
		::RPG::GameCore::LittleGameEvent* OnGameStart; // 0x30
		::RPG::GameCore::LittleGameEvent* OnAll2DBrickUpgrade; // 0x38
		::RPG::GameCore::LittleGameEvent* OnGameStartOnlyStateOne; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD8F777C61D70BB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_FD8F777C61D70BB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B67ECBC6ACA7390(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_1B67ECBC6ACA7390_OFFSET))(a1, a2);
		}
	};
}
