#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_METHOD_3_1D8A2E3A843B3D0F_OFFSET UNITYSDK_OFFSET(0x1D879560)
#define RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_METHOD_3_ABDB99FC03D6C702_OFFSET UNITYSDK_OFFSET(0x1D8795B0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8795A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerResetModeAction_TypeDefinitionIndex = 18524;

	class FiveDimSetPlayerResetModeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimPlayerResetMode Mode; // 0x10
		::RPG::GameCore::FiveDimPlayerResetSweepDirection SweepDirection; // 0x14
		::System::Single SweepXRatio; // 0x18
		::System::Single SweepYOffset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D8A2E3A843B3D0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_METHOD_3_1D8A2E3A843B3D0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABDB99FC03D6C702(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_METHOD_3_ABDB99FC03D6C702_OFFSET))(a1, a2);
		}
	};
}
