#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingBranchInfo; }

#define RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_METHOD_3_678DA75370D33B51_OFFSET UNITYSDK_OFFSET(0x1B046F00)
#define RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_METHOD_3_749432BCFE7650C2_OFFSET UNITYSDK_OFFSET(0x1B046EC0)
#define RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B046EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBranchByActivitySwordTrainingStoryLine_TypeDefinitionIndex = 19547;

	class TriggerBranchByActivitySwordTrainingStoryLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SwordTrainingBranchInfo*>* StoryLineBranch; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_749432BCFE7650C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_METHOD_3_749432BCFE7650C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_678DA75370D33B51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_METHOD_3_678DA75370D33B51_OFFSET))(a1, a2);
		}
	};
}
