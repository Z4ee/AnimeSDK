#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityMoveBakedConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimConveyorBakedConfig; }
namespace RPG::GameCore { class FiveDimDashBakedConfig; }
namespace RPG::GameCore { class FiveDimGroundBakedConfig; }
namespace RPG::GameCore { class FiveDimJumpBakedConfig; }
namespace RPG::GameCore { class FiveDimLadderBakedConfig; }
namespace RPG::GameCore { class FiveDimLedgeBakedConfig; }
namespace RPG::GameCore { class FiveDimMiscMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimPhysicsBakedConfig; }
namespace RPG::GameCore { class FiveDimWallBakedConfig; }

#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_1D6E7A1F43E0C87F_OFFSET UNITYSDK_OFFSET(0x171FBFA0)
#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_DFF52552B2F4C49A_OFFSET UNITYSDK_OFFSET(0x171FBFE0)
#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171FBFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveBakedConfig_TypeDefinitionIndex = 15267;

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
		::RPG::GameCore::FiveDimDashBakedConfig* DashBakedConfig; // 0x50
		::RPG::GameCore::FiveDimMiscMoveBakedConfig* MiscBakedConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D6E7A1F43E0C87F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_1D6E7A1F43E0C87F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFF52552B2F4C49A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_METHOD_3_DFF52552B2F4C49A_OFFSET))(a1, a2);
		}
	};
}
