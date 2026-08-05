#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_A785FE78961AB80C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7D0540)
#define STRUCT_2_A785FE78961AB80C_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D04F0)
#define STRUCT_2_A785FE78961AB80C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D0550)
#define STRUCT_2_A785FE78961AB80C_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7D0600)
#define STRUCT_2_A785FE78961AB80C_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7D05A0)

inline static constexpr unsigned int Struct_2_A785FE78961AB80C_TypeDefinitionIndex = 87551;

struct alignas(4) Struct_2_A785FE78961AB80C
{
	::System::Int32 Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x14

	::System::Boolean Equals(::Struct_2_A785FE78961AB80C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A785FE78961AB80C))((::PBYTE)hIl2Cpp + STRUCT_2_A785FE78961AB80C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_A785FE78961AB80C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A785FE78961AB80C_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A785FE78961AB80C_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_A785FE78961AB80C_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
