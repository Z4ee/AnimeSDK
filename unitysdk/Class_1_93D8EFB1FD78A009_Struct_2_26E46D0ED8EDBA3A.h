#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayLinkExtraBehaviorMask.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }

#define CLASS_1_93D8EFB1FD78A009_STRUCT_2_26E46D0ED8EDBA3A__CTOR_OFFSET UNITYSDK_OFFSET(0x38F9D40)

inline static constexpr unsigned int Class_1_93D8EFB1FD78A009_Struct_2_26E46D0ED8EDBA3A_TypeDefinitionIndex = 53426;

struct alignas(2) Class_1_93D8EFB1FD78A009_Struct_2_26E46D0ED8EDBA3A
{
	::RPG::GameCore::ActionDelayLinkExtraBehaviorMask Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_STRUCT_2_26E46D0ED8EDBA3A__CTOR_OFFSET))(this, a1);
	}
};
