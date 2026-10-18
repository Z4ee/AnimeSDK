#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_4_AC21886E0BCAE078_OFFSET UNITYSDK_OFFSET(0x1D6D94D0)
#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_4_C46FC71B13D074B5_OFFSET UNITYSDK_OFFSET(0x1D6D93F0)
#define RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D94C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetConveyorDirectionAction_TypeDefinitionIndex = 18661;

	class FiveDimSetConveyorDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsNegative; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C46FC71B13D074B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_4_C46FC71B13D074B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC21886E0BCAE078(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCONVEYORDIRECTIONACTION_METHOD_4_AC21886E0BCAE078_OFFSET))(a1, a2);
		}
	};
}
