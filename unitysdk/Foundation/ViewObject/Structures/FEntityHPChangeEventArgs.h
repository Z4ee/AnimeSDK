#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FEntityHPChangeEventArgs_TypeDefinitionIndex = 59110;

	struct alignas(8) FEntityHPChangeEventArgs
	{
		::System::String* ListenFlag; // 0x10
		::MoleMole::EntityHandle EntityHandle; // 0x18
	};
}
