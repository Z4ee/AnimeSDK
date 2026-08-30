#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_3_E1277D2DA2D826C4_OFFSET UNITYSDK_OFFSET(0x1D1081A0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_3_E7215ACB2DF8A34B_OFFSET UNITYSDK_OFFSET(0x1D1081F0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1081E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerEventNextBeatAction_TypeDefinitionIndex = 18501;

	class FiveDimTriggerEventNextBeatAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single BPM; // 0x10
		::RPG::GameCore::LittleGameEvent* Event; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1277D2DA2D826C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_3_E1277D2DA2D826C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E7215ACB2DF8A34B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_3_E7215ACB2DF8A34B_OFFSET))(a1, a2);
		}
	};
}
