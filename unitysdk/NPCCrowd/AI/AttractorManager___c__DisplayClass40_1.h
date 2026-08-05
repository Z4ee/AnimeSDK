#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class AttractorManager___c__DisplayClass40_0; }
namespace NPCCrowd::AI { class AttractorRuntime; }

#define NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF848B70)
#define NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_1__INITHANDLECONFLICT_B__0_OFFSET UNITYSDK_OFFSET(0xF848B80)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorManager___c__DisplayClass40_1_TypeDefinitionIndex = 61926;

	class AttractorManager___c__DisplayClass40_1 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::AttractorRuntime* attractorRuntime; // 0x10
		::NPCCrowd::AI::AttractorManager___c__DisplayClass40_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitHandleConflict_b__0(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_1__INITHANDLECONFLICT_B__0_OFFSET))(this, i);
		}
	};
}
