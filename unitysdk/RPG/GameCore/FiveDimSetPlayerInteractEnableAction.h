#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_4_3AC0CFA3C90CDC5F_OFFSET UNITYSDK_OFFSET(0x1D6AC450)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_4_8CF4DAC1E3717FA2_OFFSET UNITYSDK_OFFSET(0x1D6AC530)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerInteractEnableAction_TypeDefinitionIndex = 18770;

	class FiveDimSetPlayerInteractEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3AC0CFA3C90CDC5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_4_3AC0CFA3C90CDC5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CF4DAC1E3717FA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_4_8CF4DAC1E3717FA2_OFFSET))(a1, a2);
		}
	};
}
