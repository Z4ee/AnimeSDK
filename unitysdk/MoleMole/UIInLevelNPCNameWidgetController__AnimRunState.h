#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController__AnimRunState_TypeDefinitionIndex = 82014;

	struct alignas(8) UIInLevelNPCNameWidgetController__AnimRunState
	{
		::System::String* clipName; // 0x10
		::Foundation::Coroutine::CoroutineHandle cor; // 0x18
	};
}
