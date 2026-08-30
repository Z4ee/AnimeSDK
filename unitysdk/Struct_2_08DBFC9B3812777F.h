#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define STRUCT_2_08DBFC9B3812777F_EQUALS_OFFSET UNITYSDK_OFFSET(0x2DF12B0)
#define STRUCT_2_08DBFC9B3812777F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2DF12C0)

inline static constexpr unsigned int Struct_2_08DBFC9B3812777F_TypeDefinitionIndex = 69805;

struct alignas(8) Struct_2_08DBFC9B3812777F
{
	::Il2CppArray<::UnityEngine::Material*>* BPIHKOEBGLD; // 0x10

	::System::Boolean Equals(::Struct_2_08DBFC9B3812777F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_08DBFC9B3812777F))((::PBYTE)hIl2Cpp + STRUCT_2_08DBFC9B3812777F_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_08DBFC9B3812777F_GETHASHCODE_OFFSET))(this);
	}
};
