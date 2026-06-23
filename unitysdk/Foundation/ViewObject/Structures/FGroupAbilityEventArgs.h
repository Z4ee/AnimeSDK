#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FGroupAbilityEventArgs_TypeDefinitionIndex = 44971;

	struct alignas(8) FGroupAbilityEventArgs
	{
		::System::String* EventName; // 0x10
		::Foundation::ViewObject::ViewObjectHandle ViewObjectHandle; // 0x18
		::MoleMole::EntityHandle EntityHandle; // 0x28
	};
}
