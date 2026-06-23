#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_C083CD90F49A30D6.h"

class Class_4_EDAF922741458586;

#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1691A0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPlayHoldBeatItemWidgetController_Context_TypeDefinitionIndex = 62910;

	class UIHouseRhythmPlayHoldBeatItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_4_EDAF922741458586* BeatHold; // 0x28
		::Struct_2_C083CD90F49A30D6 HoldTrigger; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
