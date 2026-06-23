#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SPINE_SKIN_SKINKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DBC0)

namespace Spine
{
	inline static constexpr unsigned int Skin_SkinKey_TypeDefinitionIndex = 32903;

	struct alignas(8) Skin_SkinKey
	{
		::System::Int32 slotIndex; // 0x10
		::System::String* name; // 0x18
		::System::Int32 hashCode; // 0x20

		::System::Void _ctor(::System::Int32 slotIndex, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEY__CTOR_OFFSET))(this, slotIndex, name);
		}
	};
}
