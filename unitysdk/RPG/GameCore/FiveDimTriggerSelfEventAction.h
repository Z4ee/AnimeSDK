#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_4_1C7906BA285DE0F0_OFFSET UNITYSDK_OFFSET(0x1D6E2130)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_4_46DE117361E4952D_OFFSET UNITYSDK_OFFSET(0x1D6E2080)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerSelfEventAction_TypeDefinitionIndex = 18651;

	class FiveDimTriggerSelfEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameEvent* EventName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_46DE117361E4952D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_4_46DE117361E4952D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1C7906BA285DE0F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_4_1C7906BA285DE0F0_OFFSET))(a1, a2);
		}
	};
}
