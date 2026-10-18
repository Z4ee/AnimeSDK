#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_4_34A4156C1E689AE5_OFFSET UNITYSDK_OFFSET(0x1D6B06D0)
#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_4_510F6A6B87897120_OFFSET UNITYSDK_OFFSET(0x1D6B0750)
#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartChenLingGameBoyCountDownAction_TypeDefinitionIndex = 18675;

	class FiveDimStartChenLingGameBoyCountDownAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34A4156C1E689AE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_4_34A4156C1E689AE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_510F6A6B87897120(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_4_510F6A6B87897120_OFFSET))(a1, a2);
		}
	};
}
