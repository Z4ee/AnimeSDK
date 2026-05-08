#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_MaterialPropertyModifiersByCharacterSize_TypeDefinitionIndex = 57132;

	struct alignas(8) ConfigBuffMisc_MaterialPropertyModifiersByCharacterSize
	{
		::Il2CppArray<::System::String*>* SmallMatPropMdfKey; // 0x10
		::Il2CppArray<::System::String*>* MiddleMatPropMdfKey; // 0x18
		::Il2CppArray<::System::String*>* LargeMatPropMdfKey; // 0x20
	};
}
