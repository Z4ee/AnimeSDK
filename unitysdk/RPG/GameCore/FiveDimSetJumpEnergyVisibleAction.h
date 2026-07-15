#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_3_499FDCF1125A1030_OFFSET UNITYSDK_OFFSET(0x1BEB0AE0)
#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_3_920B54FEF9979EB5_OFFSET UNITYSDK_OFFSET(0x1BEB0A60)
#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB0AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetJumpEnergyVisibleAction_TypeDefinitionIndex = 17954;

	class FiveDimSetJumpEnergyVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_920B54FEF9979EB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_3_920B54FEF9979EB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_499FDCF1125A1030(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_3_499FDCF1125A1030_OFFSET))(a1, a2);
		}
	};
}
