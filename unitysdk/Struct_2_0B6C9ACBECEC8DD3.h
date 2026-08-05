#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_06CE88B3E17AB3C7.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_0_16E4307DCC419505_474;
class Class_1_F547720DDC402041;
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_0B6C9ACBECEC8DD3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B3D80)
#define STRUCT_2_0B6C9ACBECEC8DD3_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B3C60)
#define STRUCT_2_0B6C9ACBECEC8DD3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B3D90)
#define STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7B3F10)
#define STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_51BF9A77B19EC5F3_OFFSET UNITYSDK_OFFSET(0x7B3B70)
#define STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7B3E10)
#define STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7B3E90)
#define STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_E6D206501EFDAD27_OFFSET UNITYSDK_OFFSET(0x7B3E00)
#define STRUCT_2_0B6C9ACBECEC8DD3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7B3DF0)
#define STRUCT_2_0B6C9ACBECEC8DD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x12762220)
#define STRUCT_2_0B6C9ACBECEC8DD3__CTOR_OFFSET UNITYSDK_OFFSET(0x7B3B40)

inline static constexpr unsigned int Struct_2_0B6C9ACBECEC8DD3_TypeDefinitionIndex = 75588;

struct alignas(8) Struct_2_0B6C9ACBECEC8DD3
{
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_6()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0B6C9ACBECEC8DD3_TypeDefinitionIndex)->GetStaticField(0x4D250);
	}
	::Class_1_F547720DDC402041* Field_2_0; // 0x10
	::Struct_2_06CE88B3E17AB3C7 Field_2_7; // 0x18

	::System::Void _ctor(::Struct_2_06CE88B3E17AB3C7& a1, ::Class_1_F547720DDC402041* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_06CE88B3E17AB3C7&, ::Class_1_F547720DDC402041*))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3__CCTOR_OFFSET))();
	}

	/*
	::Struct_2_D2E6C54B2C4CE5D1 Method_2_51BF9A77B19EC5F3()
	{
		return ((::Struct_2_D2E6C54B2C4CE5D1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_51BF9A77B19EC5F3_OFFSET))(this);
	}
	*/

	::System::Boolean Equals(::Struct_2_0B6C9ACBECEC8DD3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0B6C9ACBECEC8DD3))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_E6D206501EFDAD27(::Struct_2_06CE88B3E17AB3C7& a1, ::Class_0_16E4307DCC419505_474*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_06CE88B3E17AB3C7&, ::Class_0_16E4307DCC419505_474*&))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_E6D206501EFDAD27_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B6C9ACBECEC8DD3_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
