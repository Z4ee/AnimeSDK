#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_4_06ED103D9E76DE5A_OFFSET UNITYSDK_OFFSET(0x1D6DB4E0)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_4_0A8752FE60FC22B7_OFFSET UNITYSDK_OFFSET(0x1D6DB420)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineMoveSpeedMultiplierAction_TypeDefinitionIndex = 18663;

	class FiveDimSetSplineMoveSpeedMultiplierAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single SpeedMultiplier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0A8752FE60FC22B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_4_0A8752FE60FC22B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_06ED103D9E76DE5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_4_06ED103D9E76DE5A_OFFSET))(a1, a2);
		}
	};
}
