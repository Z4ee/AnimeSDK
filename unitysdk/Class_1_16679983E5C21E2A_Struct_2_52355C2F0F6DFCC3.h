#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AE7320)
#define CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AE72A0)
#define CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AE7330)
#define CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_GET_ID_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_GET_VIEWMODELTYPE_OFFSET UNITYSDK_OFFSET(0x161E0)
#define CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

inline static constexpr unsigned int Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3_TypeDefinitionIndex = 79193;

struct alignas(8) Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3
{
	::System::Type* _ViewModelType_k__BackingField; // 0x10
	::System::String* _Id_k__BackingField; // 0x18

	::System::Void _ctor(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* get_ViewModelType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_GET_VIEWMODELTYPE_OFFSET))(this);
	}

	::System::String* get_Id()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_GET_ID_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_STRUCT_2_52355C2F0F6DFCC3_GETHASHCODE_OFFSET))(this);
	}
};
