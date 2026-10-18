#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_4_57471B27F1B8A56F_OFFSET UNITYSDK_OFFSET(0x1D6AC0C0)
#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_4_F33DECC9DF4CE47E_OFFSET UNITYSDK_OFFSET(0x1D6AC040)
#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetJumpEnergyVisibleAction_TypeDefinitionIndex = 18684;

	class FiveDimSetJumpEnergyVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F33DECC9DF4CE47E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_4_F33DECC9DF4CE47E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57471B27F1B8A56F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_METHOD_4_57471B27F1B8A56F_OFFSET))(a1, a2);
		}
	};
}
