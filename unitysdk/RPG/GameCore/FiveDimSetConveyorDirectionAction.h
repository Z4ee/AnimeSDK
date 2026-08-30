#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_3_3BC319CDBF439CC9_OFFSET UNITYSDK_OFFSET(0x1D0FFD30)
#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_3_A703E40E139DEF8C_OFFSET UNITYSDK_OFFSET(0x1D0FFC50)
#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FFD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetConveyorDirectionAction_TypeDefinitionIndex = 18452;

	class FiveDimSetConveyorDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsNegative; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A703E40E139DEF8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_3_A703E40E139DEF8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3BC319CDBF439CC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_3_3BC319CDBF439CC9_OFFSET))(a1, a2);
		}
	};
}
