#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_3_EACEEEB216DA3601;
class Class_4_6242AA13BDAC7241;
class Class_5_DCFF91E03A93C03C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_1B94DA13EEAA605B_OFFSET UNITYSDK_OFFSET(0x170FCB50)
#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_29008C43B49D5994_OFFSET UNITYSDK_OFFSET(0x170FC9B0)
#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_9A77E653617D386E_OFFSET UNITYSDK_OFFSET(0x170FC590)
#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_D7A717643D418342_OFFSET UNITYSDK_OFFSET(0x170FC750)
#define CLASS_1_0A6E5C8B5F704E46__CTOR_OFFSET UNITYSDK_OFFSET(0x170FC570)

inline static constexpr unsigned int Class_1_0A6E5C8B5F704E46_TypeDefinitionIndex = 70560;

class Class_1_0A6E5C8B5F704E46 : public ::System::Object
{
public:
	::Class_3_EACEEEB216DA3601* Field_1_0; // 0x10
	::Enum_3_ABCAEFDF06E3479A Field_1_7; // 0x18
	::MoleMole::HollowChessboard::HollowCell Field_1_6; // 0x1C

	::System::Void _ctor(::Class_3_EACEEEB216DA3601* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EACEEEB216DA3601*, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_9A77E653617D386E(::Class_5_DCFF91E03A93C03C* a1, ::Class_4_6242AA13BDAC7241* a2, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::Class_4_6242AA13BDAC7241*, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*&))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_9A77E653617D386E_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Nullable_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195> Method_1_29008C43B49D5994(::Class_4_6242AA13BDAC7241* a1, ::Class_3_EACEEEB216DA3601* a2, ::Class_5_DCFF91E03A93C03C* a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Nullable_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>(*)(::Class_4_6242AA13BDAC7241*, ::Class_3_EACEEEB216DA3601*, ::Class_5_DCFF91E03A93C03C*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_29008C43B49D5994_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_1B94DA13EEAA605B(::Class_3_EACEEEB216DA3601* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC*& a3)
	{
		return ((::System::Boolean(*)(::Class_3_EACEEEB216DA3601*, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*&))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_1B94DA13EEAA605B_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>* Method_1_D7A717643D418342(::Class_4_6242AA13BDAC7241* a1, ::Class_3_EACEEEB216DA3601* a2, ::Class_5_DCFF91E03A93C03C* a3, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*(*)(::PVOID, ::Class_4_6242AA13BDAC7241*, ::Class_3_EACEEEB216DA3601*, ::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_D7A717643D418342_OFFSET))(this, a1, a2, a3, a4);
	}
};
