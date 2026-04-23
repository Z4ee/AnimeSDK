#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayLinkExtraBehaviorMask.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }

#define CLASS_1_E046197DFD41D53B_STRUCT_2_26E46D0ED8EDBA3A__CTOR_OFFSET UNITYSDK_OFFSET(0xD1880)

inline static constexpr unsigned int Class_1_E046197DFD41D53B_Struct_2_26E46D0ED8EDBA3A_TypeDefinitionIndex = 51605;

struct alignas(2) Class_1_E046197DFD41D53B_Struct_2_26E46D0ED8EDBA3A
{
	::RPG::GameCore::ActionDelayLinkExtraBehaviorMask Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_E046197DFD41D53B_STRUCT_2_26E46D0ED8EDBA3A__CTOR_OFFSET))(this, a1);
	}
};
