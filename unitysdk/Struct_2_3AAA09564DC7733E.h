#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_94EF767DB88BCE69.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_87;
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_3AAA09564DC7733E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6FBE30)
#define STRUCT_2_3AAA09564DC7733E_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x6FBF60)
#define STRUCT_2_3AAA09564DC7733E_EQUALS_OFFSET UNITYSDK_OFFSET(0x6FBDB0)
#define STRUCT_2_3AAA09564DC7733E_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x6FBFB0)
#define STRUCT_2_3AAA09564DC7733E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6FBF10)
#define STRUCT_2_3AAA09564DC7733E_METHOD_2_57A8E11FECF10345_1_OFFSET UNITYSDK_OFFSET(0x107DBDF0)
#define STRUCT_2_3AAA09564DC7733E_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x107DBF10)
#define STRUCT_2_3AAA09564DC7733E_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x6FC050)
#define STRUCT_2_3AAA09564DC7733E_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6FBFE0)
#define STRUCT_2_3AAA09564DC7733E__CCTOR_OFFSET UNITYSDK_OFFSET(0x107DBF00)

inline static constexpr unsigned int Struct_2_3AAA09564DC7733E_TypeDefinitionIndex = 65611;

struct alignas(8) Struct_2_3AAA09564DC7733E
{
	static ::Struct_2_3AAA09564DC7733E* StaticGet_Field_2_0()
	{
		return (::Struct_2_3AAA09564DC7733E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_3AAA09564DC7733E_TypeDefinitionIndex)->GetStaticField(0x42B50);
	}
	::System::String* Field_2_1; // 0x10
	::System::UInt64 Field_2_2; // 0x18
	::MoleMole::Config::ScreenEffectType Field_2_3; // 0x20
	::Enum_3_94EF767DB88BCE69 Field_2_4; // 0x24
	::Class_1_43BD383C98B4C0C5_87* Field_2_5; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_2(::Struct_2_3AAA09564DC7733E a1, ::Struct_2_3AAA09564DC7733E a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3AAA09564DC7733E, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_EQUALS_2_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode_1(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_GETHASHCODE_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_3AAA09564DC7733E a1, ::Struct_2_3AAA09564DC7733E a2)
	{
		return ((::System::Boolean(*)(::Struct_2_3AAA09564DC7733E, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345_1(::Struct_2_3AAA09564DC7733E a1, ::Struct_2_3AAA09564DC7733E a2)
	{
		return ((::System::Boolean(*)(::Struct_2_3AAA09564DC7733E, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + STRUCT_2_3AAA09564DC7733E_METHOD_2_57A8E11FECF10345_1_OFFSET))(a1, a2);
	}
};
