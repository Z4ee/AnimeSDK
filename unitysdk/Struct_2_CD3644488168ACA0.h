#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_CD3644488168ACA0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6E4BF0)
#define STRUCT_2_CD3644488168ACA0_EQUALS_OFFSET UNITYSDK_OFFSET(0x6E4B70)
#define STRUCT_2_CD3644488168ACA0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E4C00)
#define STRUCT_2_CD3644488168ACA0_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x6E4E80)
#define STRUCT_2_CD3644488168ACA0_METHOD_2_88A63DE0F352EFF1_OFFSET UNITYSDK_OFFSET(0x6E4DE0)
#define STRUCT_2_CD3644488168ACA0_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6E4CE0)
#define STRUCT_2_CD3644488168ACA0_METHOD_2_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x6E4C80)
#define STRUCT_2_CD3644488168ACA0_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x6E4D50)
#define STRUCT_2_CD3644488168ACA0_METHOD_2_F4499003B6A4CCA7_OFFSET UNITYSDK_OFFSET(0x6E4C10)
#define STRUCT_2_CD3644488168ACA0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6E4AF0)
#define STRUCT_2_CD3644488168ACA0__CTOR_OFFSET UNITYSDK_OFFSET(0x6E4AE0)

inline static constexpr unsigned int Struct_2_CD3644488168ACA0_TypeDefinitionIndex = 59743;

struct alignas(2) Struct_2_CD3644488168ACA0
{
	::System::UInt16 Field_2_0; // 0x10
	::System::UInt16 Field_2_1; // 0x12
	::System::UInt16 Field_2_2; // 0x14

	::System::Void _ctor(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Void _ctor_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0__CTOR_1_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Equals(::Struct_2_CD3644488168ACA0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CD3644488168ACA0))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_F4499003B6A4CCA7(::Struct_2_CD3644488168ACA0& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CD3644488168ACA0&))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_METHOD_2_F4499003B6A4CCA7_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_METHOD_2_D66F211912D83957_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
	*/

	::Struct_2_CD3644488168ACA0 Method_2_88A63DE0F352EFF1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Struct_2_CD3644488168ACA0(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_METHOD_2_88A63DE0F352EFF1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CD3644488168ACA0_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
