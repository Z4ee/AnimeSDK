#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4E1F2E1FB2C8D2C_1.h"
#include "unitysdk/Struct_2_F641FF8CBDE96A09.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class Object; }

#define STRUCT_2_01A1C5D2E69C14A4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8042A0)
#define STRUCT_2_01A1C5D2E69C14A4_EQUALS_OFFSET UNITYSDK_OFFSET(0x8041F0)
#define STRUCT_2_01A1C5D2E69C14A4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8042B0)
#define STRUCT_2_01A1C5D2E69C14A4_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x8042C0)
#define STRUCT_2_01A1C5D2E69C14A4_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x804320)
#define STRUCT_2_01A1C5D2E69C14A4_METHOD_2_718A29F5005F6A5D_1_OFFSET UNITYSDK_OFFSET(0x159D2DB0)
#define STRUCT_2_01A1C5D2E69C14A4_METHOD_2_718A29F5005F6A5D_OFFSET UNITYSDK_OFFSET(0x159D2BD0)
#define STRUCT_2_01A1C5D2E69C14A4_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x804390)
#define STRUCT_2_01A1C5D2E69C14A4_METHOD_2_D0EE81B3FDA3E65D_OFFSET UNITYSDK_OFFSET(0x8042D0)
#define STRUCT_2_01A1C5D2E69C14A4_METHOD_2_EDC1F4BA713AAFCE_OFFSET UNITYSDK_OFFSET(0x159D2D20)
#define STRUCT_2_01A1C5D2E69C14A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x159D29A0)
#define STRUCT_2_01A1C5D2E69C14A4__CTOR_OFFSET UNITYSDK_OFFSET(0x8041D0)

inline static constexpr unsigned int Struct_2_01A1C5D2E69C14A4_TypeDefinitionIndex = 81647;

struct alignas(8) Struct_2_01A1C5D2E69C14A4
{
	static ::Struct_2_01A1C5D2E69C14A4* StaticGet_Field_2_0()
	{
		return (::Struct_2_01A1C5D2E69C14A4*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_01A1C5D2E69C14A4_TypeDefinitionIndex)->GetStaticField(0x2E780);
	}
	::Struct_2_F641FF8CBDE96A09 Field_2_1; // 0x10
	::FluffyUnderware::Curvy::CurvySpline* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* a1, ::Enum_3_E4E1F2E1FB2C8D2C_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Enum_3_E4E1F2E1FB2C8D2C_1))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_01A1C5D2E69C14A4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_01A1C5D2E69C14A4))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_GETHASHCODE_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	static ::System::Boolean Method_2_718A29F5005F6A5D(::Struct_2_01A1C5D2E69C14A4 a1, ::Struct_2_01A1C5D2E69C14A4 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_01A1C5D2E69C14A4, ::Struct_2_01A1C5D2E69C14A4))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_METHOD_2_718A29F5005F6A5D_OFFSET))(a1, a2);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_2_D0EE81B3FDA3E65D()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_METHOD_2_D0EE81B3FDA3E65D_OFFSET))(this);
	}

	static ::FluffyUnderware::Curvy::CurvySpline* Method_2_EDC1F4BA713AAFCE(::Struct_2_01A1C5D2E69C14A4 a1)
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::Struct_2_01A1C5D2E69C14A4))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_METHOD_2_EDC1F4BA713AAFCE_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_718A29F5005F6A5D_1(::Struct_2_01A1C5D2E69C14A4 a1, ::Struct_2_01A1C5D2E69C14A4 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_01A1C5D2E69C14A4, ::Struct_2_01A1C5D2E69C14A4))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_METHOD_2_718A29F5005F6A5D_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_01A1C5D2E69C14A4_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
