#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E4F1098F508CC7DC_Enum_3_3DE8753B51ED09FB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_1EC41A621790C28F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7BB0E0)
#define STRUCT_2_1EC41A621790C28F_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BB070)
#define STRUCT_2_1EC41A621790C28F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BB0F0)
#define STRUCT_2_1EC41A621790C28F_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7BB1B0)
#define STRUCT_2_1EC41A621790C28F_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7BB150)
#define STRUCT_2_1EC41A621790C28F_METHOD_2_E7BBB2182629E9E8_1_OFFSET UNITYSDK_OFFSET(0x137AD140)
#define STRUCT_2_1EC41A621790C28F_METHOD_2_E7BBB2182629E9E8_OFFSET UNITYSDK_OFFSET(0x137AD090)
#define STRUCT_2_1EC41A621790C28F__CCTOR_OFFSET UNITYSDK_OFFSET(0x137ACFC0)
#define STRUCT_2_1EC41A621790C28F__CTOR_OFFSET UNITYSDK_OFFSET(0x588040)

inline static constexpr unsigned int Struct_2_1EC41A621790C28F_TypeDefinitionIndex = 78969;

struct alignas(4) Struct_2_1EC41A621790C28F
{
	static ::Struct_2_1EC41A621790C28F* StaticGet_Field_2_0()
	{
		return (::Struct_2_1EC41A621790C28F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_1EC41A621790C28F_TypeDefinitionIndex)->GetStaticField(0xC9F0);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::Class_1_E4F1098F508CC7DC_Enum_3_3DE8753B51ED09FB Field_2_3; // 0x18
	::Class_1_E4F1098F508CC7DC_Enum_3_3DE8753B51ED09FB Field_2_4; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_1EC41A621790C28F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_1EC41A621790C28F))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_E7BBB2182629E9E8(::Struct_2_1EC41A621790C28F a1, ::Struct_2_1EC41A621790C28F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1EC41A621790C28F, ::Struct_2_1EC41A621790C28F))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F_METHOD_2_E7BBB2182629E9E8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_E7BBB2182629E9E8_1(::Struct_2_1EC41A621790C28F a1, ::Struct_2_1EC41A621790C28F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1EC41A621790C28F, ::Struct_2_1EC41A621790C28F))((::PBYTE)hIl2Cpp + STRUCT_2_1EC41A621790C28F_METHOD_2_E7BBB2182629E9E8_1_OFFSET))(a1, a2);
	}
};
