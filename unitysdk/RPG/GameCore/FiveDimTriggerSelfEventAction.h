#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_EE396846DFF3D721_OFFSET UNITYSDK_OFFSET(0x18923590)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_F8D0237B93034E2D_OFFSET UNITYSDK_OFFSET(0x189234B0)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18923570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerSelfEventAction_TypeDefinitionIndex = 17721;

	class FiveDimTriggerSelfEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameEvent* EventName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8D0237B93034E2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_F8D0237B93034E2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE396846DFF3D721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_EE396846DFF3D721_OFFSET))(a1, a2);
		}
	};
}
