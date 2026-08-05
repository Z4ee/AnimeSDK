#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_F5737224A0253470;
class Class_5_A6F8D19602712D95;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E5373699ACD88B1_METHOD_1_029A86B3C7E457AE_OFFSET UNITYSDK_OFFSET(0x15FC5C00)
#define CLASS_1_0E5373699ACD88B1_METHOD_1_3D0DEF9C57CB8088_OFFSET UNITYSDK_OFFSET(0x15FC5870)
#define CLASS_1_0E5373699ACD88B1_METHOD_1_8E01C00034A2BA60_OFFSET UNITYSDK_OFFSET(0x15FC5610)
#define CLASS_1_0E5373699ACD88B1_METHOD_1_CAA3FA1235DD111A_OFFSET UNITYSDK_OFFSET(0x15FC5B30)
#define CLASS_1_0E5373699ACD88B1__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC5540)

inline static constexpr unsigned int Class_1_0E5373699ACD88B1_TypeDefinitionIndex = 43327;

class Class_1_0E5373699ACD88B1 : public ::System::Object
{
public:
	::Class_2_F5737224A0253470* Field_1_1; // 0x10
	::MoleMole::UIHollowChessboard3DModelController* Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor(::MoleMole::UIHollowChessboard3DModelController* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessboard3DModelController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0E5373699ACD88B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_1_8E01C00034A2BA60(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0E5373699ACD88B1_METHOD_1_8E01C00034A2BA60_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CAA3FA1235DD111A(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0E5373699ACD88B1_METHOD_1_CAA3FA1235DD111A_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::PlayerOnViewState Method_1_029A86B3C7E457AE(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::PlayerOnViewState(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0E5373699ACD88B1_METHOD_1_029A86B3C7E457AE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3D0DEF9C57CB8088(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_0E5373699ACD88B1_METHOD_1_3D0DEF9C57CB8088_OFFSET))(this, a1);
	}
};
