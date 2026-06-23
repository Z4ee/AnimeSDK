#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { class NPCPerformanceManager; }

#define NPCCROWD_NPCPERFORMANCEMANAGER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12748040)
#define NPCCROWD_NPCPERFORMANCEMANAGER___C__DISPLAYCLASS80_0__FORCECULLTOCOMPLIANCEIMMEDIATELY_B__0_OFFSET UNITYSDK_OFFSET(0x12748050)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceManager___c__DisplayClass80_0_TypeDefinitionIndex = 77744;

	class NPCPerformanceManager___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::NPCCrowd::NPCPerformanceManager* __4__this; // 0x10
		::System::Int32 recalcFrames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceCullToComplianceImmediately_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___C__DISPLAYCLASS80_0__FORCECULLTOCOMPLIANCEIMMEDIATELY_B__0_OFFSET))(this);
		}
	};
}
