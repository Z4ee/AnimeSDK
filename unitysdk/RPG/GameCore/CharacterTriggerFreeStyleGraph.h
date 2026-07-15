#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_METHOD_3_1A8C022A72BE14D7_OFFSET UNITYSDK_OFFSET(0x1B72C400)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_METHOD_3_551DA7DCC80DC32A_OFFSET UNITYSDK_OFFSET(0x1B72C470)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72C450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterTriggerFreeStyleGraph_TypeDefinitionIndex = 20441;

	class CharacterTriggerFreeStyleGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x18
		::System::Single TransitionDuration; // 0x20
		::RPG::GameCore::DynamicString* GraphName; // 0x28
		::System::Boolean UseWaitPhase; // 0x30
		::RPG::MVector2 WaitPhaseTimeRange; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A8C022A72BE14D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterTriggerFreeStyleGraph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterTriggerFreeStyleGraph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_METHOD_3_1A8C022A72BE14D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_551DA7DCC80DC32A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterTriggerFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterTriggerFreeStyleGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_METHOD_3_551DA7DCC80DC32A_OFFSET))(a1, a2);
		}
	};
}
