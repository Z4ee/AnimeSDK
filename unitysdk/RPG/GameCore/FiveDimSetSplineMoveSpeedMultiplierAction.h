#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_3_50E49744AFDED91A_OFFSET UNITYSDK_OFFSET(0x1D101B40)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_3_BE8DCE67F3C4EF77_OFFSET UNITYSDK_OFFSET(0x1D101C00)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D101BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineMoveSpeedMultiplierAction_TypeDefinitionIndex = 18454;

	class FiveDimSetSplineMoveSpeedMultiplierAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single SpeedMultiplier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50E49744AFDED91A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_3_50E49744AFDED91A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE8DCE67F3C4EF77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVESPEEDMULTIPLIERACTION_METHOD_3_BE8DCE67F3C4EF77_OFFSET))(a1, a2);
		}
	};
}
