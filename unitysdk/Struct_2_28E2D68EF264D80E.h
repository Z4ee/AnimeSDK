#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_28E2D68EF264D80E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9F7A80)
#define STRUCT_2_28E2D68EF264D80E_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7A50)
#define STRUCT_2_28E2D68EF264D80E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F7B70)
#define STRUCT_2_28E2D68EF264D80E_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x9F7BF0)
#define STRUCT_2_28E2D68EF264D80E_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9F7B80)
#define STRUCT_2_28E2D68EF264D80E__CTOR_OFFSET UNITYSDK_OFFSET(0x33DF30)

inline static constexpr unsigned int Struct_2_28E2D68EF264D80E_TypeDefinitionIndex = 92561;

struct alignas(4) Struct_2_28E2D68EF264D80E
{
	::Struct_2_E614D3B245F96744 Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x18

	::System::Void _ctor(::Struct_2_E614D3B245F96744 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E614D3B245F96744, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_28E2D68EF264D80E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_28E2D68EF264D80E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_28E2D68EF264D80E))((::PBYTE)hIl2Cpp + STRUCT_2_28E2D68EF264D80E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_28E2D68EF264D80E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_28E2D68EF264D80E_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_28E2D68EF264D80E_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_28E2D68EF264D80E_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
