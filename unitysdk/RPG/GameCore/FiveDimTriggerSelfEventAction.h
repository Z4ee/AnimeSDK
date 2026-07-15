#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_4D70F002E817EDA4_OFFSET UNITYSDK_OFFSET(0x1BEB8480)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_EE396846DFF3D721_OFFSET UNITYSDK_OFFSET(0x1BEB8530)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB8520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerSelfEventAction_TypeDefinitionIndex = 17922;

	class FiveDimTriggerSelfEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameEvent* EventName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D70F002E817EDA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_4D70F002E817EDA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE396846DFF3D721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_METHOD_3_EE396846DFF3D721_OFFSET))(a1, a2);
		}
	};
}
