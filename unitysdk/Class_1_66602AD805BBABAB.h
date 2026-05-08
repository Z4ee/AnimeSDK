#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_4_6242AA13BDAC7241;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_66602AD805BBABAB_METHOD_1_53FF5BD7BE66E442_OFFSET UNITYSDK_OFFSET(0x135CA710)
#define CLASS_1_66602AD805BBABAB_METHOD_1_9A77E653617D386E_OFFSET UNITYSDK_OFFSET(0x135CA550)
#define CLASS_1_66602AD805BBABAB_METHOD_1_FE6BCFE0CF55FDAF_OFFSET UNITYSDK_OFFSET(0x135CA950)
#define CLASS_1_66602AD805BBABAB__CTOR_OFFSET UNITYSDK_OFFSET(0x135CA530)

inline static constexpr unsigned int Class_1_66602AD805BBABAB_TypeDefinitionIndex = 45395;

class Class_1_66602AD805BBABAB : public ::System::Object
{
public:
	::Enum_3_ABCAEFDF06E3479A Field_1_0; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_1_1; // 0x14

	::System::Void _ctor(::Enum_3_ABCAEFDF06E3479A a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9A77E653617D386E(::Class_5_AF65C3A968E836D2* a1, ::Class_4_6242AA13BDAC7241* a2, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_4_6242AA13BDAC7241*, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*&))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB_METHOD_1_9A77E653617D386E_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Nullable_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195> Method_1_FE6BCFE0CF55FDAF(::Class_4_6242AA13BDAC7241* a1, ::Class_5_AF65C3A968E836D2* a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Nullable_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>(*)(::Class_4_6242AA13BDAC7241*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB_METHOD_1_FE6BCFE0CF55FDAF_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>* Method_1_53FF5BD7BE66E442(::Class_4_6242AA13BDAC7241* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*(*)(::PVOID, ::Class_4_6242AA13BDAC7241*, ::Class_5_AF65C3A968E836D2*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB_METHOD_1_53FF5BD7BE66E442_OFFSET))(this, a1, a2, a3);
	}
};
