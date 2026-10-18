#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_4_088355CDFC9C11BE_OFFSET UNITYSDK_OFFSET(0x1D6E1E50)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_4_3FEF5E63832AE529_OFFSET UNITYSDK_OFFSET(0x1D6E1E00)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E1E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerEventNextBeatAction_TypeDefinitionIndex = 18711;

	class FiveDimTriggerEventNextBeatAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single BPM; // 0x10
		::RPG::GameCore::LittleGameEvent* Event; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3FEF5E63832AE529(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_4_3FEF5E63832AE529_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_088355CDFC9C11BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_METHOD_4_088355CDFC9C11BE_OFFSET))(a1, a2);
		}
	};
}
