#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_4_8282012E0CC62123_OFFSET UNITYSDK_OFFSET(0x1D6E16B0)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_4_C74EE26C0FC2B9A2_OFFSET UNITYSDK_OFFSET(0x1D6E1730)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E1720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerDashOrbAction_TypeDefinitionIndex = 18764;

	class FiveDimTriggerDashOrbAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8282012E0CC62123(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_4_8282012E0CC62123_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C74EE26C0FC2B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_4_C74EE26C0FC2B9A2_OFFSET))(a1, a2);
		}
	};
}
