#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Collider; }

#define STRUCT_2_EF8866DC0BA58CB4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F59B0)
#define STRUCT_2_EF8866DC0BA58CB4_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7F5A00)
#define STRUCT_2_EF8866DC0BA58CB4_METHOD_2_CD383A80705AC1E1_OFFSET UNITYSDK_OFFSET(0x1517C1F0)
#define STRUCT_2_EF8866DC0BA58CB4__CTOR_OFFSET UNITYSDK_OFFSET(0x7F5960)

inline static constexpr unsigned int Struct_2_EF8866DC0BA58CB4_TypeDefinitionIndex = 51770;

struct alignas(8) Struct_2_EF8866DC0BA58CB4
{
	::UnityEngine::Collider* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C

	::System::Void _ctor(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + STRUCT_2_EF8866DC0BA58CB4__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EF8866DC0BA58CB4_GETHASHCODE_OFFSET))(this);
	}

	static ::Struct_2_EF8866DC0BA58CB4 Method_2_CD383A80705AC1E1(::UnityEngine::Collider* a1)
	{
		return ((::Struct_2_EF8866DC0BA58CB4(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + STRUCT_2_EF8866DC0BA58CB4_METHOD_2_CD383A80705AC1E1_OFFSET))(a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EF8866DC0BA58CB4_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
