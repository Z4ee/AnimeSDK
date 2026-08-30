#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2F6AC431AAB2D4A6_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AEF8A0)
#define STRUCT_2_2F6AC431AAB2D4A6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AEF900)

inline static constexpr unsigned int Struct_2_2F6AC431AAB2D4A6_TypeDefinitionIndex = 56868;

struct alignas(4) Struct_2_2F6AC431AAB2D4A6
{
	::System::UInt32 CEGOPEIKDLA; // 0x10
	::RPG::GameCore::EventType GMPGDEINODK; // 0x14

	::System::Boolean Equals(::Struct_2_2F6AC431AAB2D4A6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F6AC431AAB2D4A6))((::PBYTE)hIl2Cpp + STRUCT_2_2F6AC431AAB2D4A6_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F6AC431AAB2D4A6_GETHASHCODE_OFFSET))(this);
	}
};
