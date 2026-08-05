#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define STRUCT_2_95FC5B98D4A132D6_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8BBF10)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_1_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_173A9E60CB69FD4D_OFFSET UNITYSDK_OFFSET(0x8BC080)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_18BA888AB214BADA_OFFSET UNITYSDK_OFFSET(0x8BC1D0)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_249A8727C4A633EE_OFFSET UNITYSDK_OFFSET(0x8BBFE0)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_2E81C799D267E6AB_OFFSET UNITYSDK_OFFSET(0x8BC320)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_1_OFFSET UNITYSDK_OFFSET(0x324D50)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_OFFSET UNITYSDK_OFFSET(0x462A80)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_73CFD14C88136BAC_OFFSET UNITYSDK_OFFSET(0x8BC310)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_79A20E56B5002F7A_OFFSET UNITYSDK_OFFSET(0x8BC000)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325D00)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_CBE926BCD8E9E460_OFFSET UNITYSDK_OFFSET(0x8BC230)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_F40A1039406BFB27_OFFSET UNITYSDK_OFFSET(0x8BC140)
#define STRUCT_2_95FC5B98D4A132D6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8BBE70)
#define STRUCT_2_95FC5B98D4A132D6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x682170)
#define STRUCT_2_95FC5B98D4A132D6__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBE40)

inline static constexpr unsigned int Struct_2_95FC5B98D4A132D6_TypeDefinitionIndex = 61092;

struct alignas(4) Struct_2_95FC5B98D4A132D6
{
	::MoleMole::Vector2Int Field_2_2; // 0x10
	::MoleMole::Vector2Int Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::MoleMole::Vector2Int a1, ::MoleMole::Vector2Int a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	/*
	::System::Collections::Generic::IEnumerator_1<::MoleMole::HollowChessboard::HollowCell>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_GETENUMERATOR_OFFSET))(this);
	}
	*/

	::Struct_2_95FC5B98D4A132D6 Method_2_249A8727C4A633EE(::MoleMole::Vector2Int a1)
	{
		return ((::Struct_2_95FC5B98D4A132D6(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_249A8727C4A633EE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_79A20E56B5002F7A(::MoleMole::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_79A20E56B5002F7A_OFFSET))(this, a1);
	}

	::MoleMole::Vector2Int Method_2_13F1B56B940BB384()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_OFFSET))(this);
	}

	::MoleMole::Vector2Int Method_2_173A9E60CB69FD4D(::System::Int32 a1)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_173A9E60CB69FD4D_OFFSET))(this, a1);
	}

	::MoleMole::Vector2Int Method_2_13F1B56B940BB384_1()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_1_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_F40A1039406BFB27(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_F40A1039406BFB27_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_18BA888AB214BADA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_18BA888AB214BADA_OFFSET))(this);
	}

	/*
	::MoleMole::HollowChessboard::HollowCell Method_2_CBE926BCD8E9E460(::System::Int32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_CBE926BCD8E9E460_OFFSET))(this, a1);
	}
	*/

	::MoleMole::Vector2Int Method_2_73CFD14C88136BAC()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_73CFD14C88136BAC_OFFSET))(this);
	}

	::System::Void Method_2_4967DD316EFAC48B(::MoleMole::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4967DD316EFAC48B_1(::MoleMole::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2E81C799D267E6AB(::MoleMole::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_2E81C799D267E6AB_OFFSET))(this, a1);
	}
};
