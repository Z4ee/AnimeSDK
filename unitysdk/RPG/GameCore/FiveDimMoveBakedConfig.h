#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityMoveBakedConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimConveyorBakedConfig; }
namespace RPG::GameCore { class FiveDimGroundBakedConfig; }
namespace RPG::GameCore { class FiveDimJumpBakedConfig; }
namespace RPG::GameCore { class FiveDimLadderBakedConfig; }
namespace RPG::GameCore { class FiveDimLedgeBakedConfig; }
namespace RPG::GameCore { class FiveDimMiscMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimPhysicsBakedConfig; }
namespace RPG::GameCore { class FiveDimWallBakedConfig; }

#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_5243C97B39B5C1E7_OFFSET UNITYSDK_OFFSET(0x1890CB20)
#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_8035E3965941F0A2_OFFSET UNITYSDK_OFFSET(0x1890CAE0)
#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1890CB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveBakedConfig_TypeDefinitionIndex = 15780;

	class FiveDimMoveBakedConfig : public ::RPG::GameCore::LittleGameEntityMoveBakedConfig
	{
	public:
		::System::Single UnitLength; // 0x10
		::RPG::GameCore::FiveDimPhysicsBakedConfig* PhysicsBakedConfig; // 0x18
		::RPG::GameCore::FiveDimGroundBakedConfig* GroundBakedConfig; // 0x20
		::RPG::GameCore::FiveDimJumpBakedConfig* JumpBakedConfig; // 0x28
		::RPG::GameCore::FiveDimWallBakedConfig* WallBakedConfig; // 0x30
		::RPG::GameCore::FiveDimLadderBakedConfig* LadderBakedConfig; // 0x38
		::RPG::GameCore::FiveDimLedgeBakedConfig* LedgeBakedConfig; // 0x40
		::RPG::GameCore::FiveDimConveyorBakedConfig* ConveyorBakedConfig; // 0x48
		::RPG::GameCore::FiveDimMiscMoveBakedConfig* MiscBakedConfig; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8035E3965941F0A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_8035E3965941F0A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5243C97B39B5C1E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_5243C97B39B5C1E7_OFFSET))(a1, a2);
		}
	};
}
