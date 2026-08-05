#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_951D1B23381BAAC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x879720)
#define STRUCT_2_951D1B23381BAAC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x879710)
#define STRUCT_2_951D1B23381BAAC2_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8797E0)
#define STRUCT_2_951D1B23381BAAC2_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0x17FE00D0)
#define STRUCT_2_951D1B23381BAAC2_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x17FE0030)
#define STRUCT_2_951D1B23381BAAC2_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x879780)
#define STRUCT_2_951D1B23381BAAC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FDFF70)
#define STRUCT_2_951D1B23381BAAC2__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

inline static constexpr unsigned int Struct_2_951D1B23381BAAC2_TypeDefinitionIndex = 40788;

struct alignas(4) Struct_2_951D1B23381BAAC2
{
	static ::Struct_2_951D1B23381BAAC2* StaticGet_Field_2_0()
	{
		return (::Struct_2_951D1B23381BAAC2*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_951D1B23381BAAC2_TypeDefinitionIndex)->GetStaticField(0xD710);
	}
	::System::Int32 Field_2_7; // 0x10
	::System::Int32 Field_2_6; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_951D1B23381BAAC2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_951D1B23381BAAC2))((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_951D1B23381BAAC2 a1, ::Struct_2_951D1B23381BAAC2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_951D1B23381BAAC2, ::Struct_2_951D1B23381BAAC2))((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A_1(::Struct_2_951D1B23381BAAC2 a1, ::Struct_2_951D1B23381BAAC2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_951D1B23381BAAC2, ::Struct_2_951D1B23381BAAC2))((::PBYTE)hIl2Cpp + STRUCT_2_951D1B23381BAAC2_METHOD_2_502C0C74DDECD92A_1_OFFSET))(a1, a2);
	}
};
