#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2313E0B112943B6E;
namespace System { class Object; }

#define STRUCT_2_1480BFA419A4783B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x854750)
#define STRUCT_2_1480BFA419A4783B_EQUALS_OFFSET UNITYSDK_OFFSET(0x8546D0)
#define STRUCT_2_1480BFA419A4783B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x854760)
#define STRUCT_2_1480BFA419A4783B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x854820)
#define STRUCT_2_1480BFA419A4783B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x854870)
#define STRUCT_2_1480BFA419A4783B_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x8547B0)
#define STRUCT_2_1480BFA419A4783B_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x854940)
#define STRUCT_2_1480BFA419A4783B_METHOD_2_E024AF40CF93162B_OFFSET UNITYSDK_OFFSET(0x8548D0)
#define STRUCT_2_1480BFA419A4783B__CTOR_OFFSET UNITYSDK_OFFSET(0x41FE00)

inline static constexpr unsigned int Struct_2_1480BFA419A4783B_TypeDefinitionIndex = 70961;

struct alignas(8) Struct_2_1480BFA419A4783B
{
	::System::UInt32 Field_2_1; // 0x10
	::Class_1_2313E0B112943B6E* Field_2_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_2313E0B112943B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_2313E0B112943B6E*))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_1480BFA419A4783B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_1480BFA419A4783B))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	/*
	::System::Void Method_2_E024AF40CF93162B(::MoleMole::HollowChessboard::RangeMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RangeMask))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_METHOD_2_E024AF40CF93162B_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1480BFA419A4783B_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
