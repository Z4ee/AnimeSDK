#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4396718EB4C65D69_METHOD_1_9C51524B353BDC29_OFFSET UNITYSDK_OFFSET(0x1C11B4C0)
#define CLASS_1_4396718EB4C65D69_METHOD_1_CAA3FA1235DD111A_OFFSET UNITYSDK_OFFSET(0x1C11B3F0)
#define CLASS_1_4396718EB4C65D69_METHOD_1_FA08576036CC818E_OFFSET UNITYSDK_OFFSET(0x1C11B260)
#define CLASS_1_4396718EB4C65D69__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11B250)

inline static constexpr unsigned int Class_1_4396718EB4C65D69_TypeDefinitionIndex = 85639;

class Class_1_4396718EB4C65D69 : public ::System::Object
{
public:
	::MoleMole::UIHollowChessboard3DModelController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UIHollowChessboard3DModelController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessboard3DModelController*))((::PBYTE)hIl2Cpp + CLASS_1_4396718EB4C65D69__CTOR_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_1_FA08576036CC818E(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_4396718EB4C65D69_METHOD_1_FA08576036CC818E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CAA3FA1235DD111A(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_4396718EB4C65D69_METHOD_1_CAA3FA1235DD111A_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::PlayerOnViewState Method_1_9C51524B353BDC29(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::PlayerOnViewState(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_4396718EB4C65D69_METHOD_1_9C51524B353BDC29_OFFSET))(this, a1, a2);
	}
};
