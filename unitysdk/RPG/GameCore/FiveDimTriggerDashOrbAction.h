#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_3_2AC8DE8421593215_OFFSET UNITYSDK_OFFSET(0x1975C860)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_3_86A33D6355988930_OFFSET UNITYSDK_OFFSET(0x1975C7A0)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1975C840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerDashOrbAction_TypeDefinitionIndex = 17854;

	class FiveDimTriggerDashOrbAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_86A33D6355988930(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_3_86A33D6355988930_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2AC8DE8421593215(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_METHOD_3_2AC8DE8421593215_OFFSET))(a1, a2);
		}
	};
}
