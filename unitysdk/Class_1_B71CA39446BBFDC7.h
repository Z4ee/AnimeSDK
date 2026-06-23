#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/CellDiffusionConfigParas.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_5_FCAF801AC482D3B5;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B71CA39446BBFDC7_METHOD_1_1E22CF79A4D028CE_OFFSET UNITYSDK_OFFSET(0x154F2500)
#define CLASS_1_B71CA39446BBFDC7_METHOD_1_2BA3DB2BD2587D96_OFFSET UNITYSDK_OFFSET(0x154F2CC0)
#define CLASS_1_B71CA39446BBFDC7_METHOD_1_4F8D3E5066D53B59_OFFSET UNITYSDK_OFFSET(0x154F2920)
#define CLASS_1_B71CA39446BBFDC7_METHOD_1_56D4549C0A4A3ACA_OFFSET UNITYSDK_OFFSET(0x154F2F10)
#define CLASS_1_B71CA39446BBFDC7_METHOD_1_639D3635C28C39BD_OFFSET UNITYSDK_OFFSET(0x154F2900)
#define CLASS_1_B71CA39446BBFDC7_METHOD_1_8A5C1AFAA6C38289_OFFSET UNITYSDK_OFFSET(0x154F3610)
#define CLASS_1_B71CA39446BBFDC7_METHOD_1_BD94EE0F564B0E6E_OFFSET UNITYSDK_OFFSET(0x154F3020)
#define CLASS_1_B71CA39446BBFDC7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x154F2910)
#define CLASS_1_B71CA39446BBFDC7__CTOR_OFFSET UNITYSDK_OFFSET(0x154F22F0)

inline static constexpr unsigned int Class_1_B71CA39446BBFDC7_TypeDefinitionIndex = 86199;

class Class_1_B71CA39446BBFDC7 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* Field_1_11; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* Field_1_12; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x28
	::MoleMole::HollowChessboard::CellDiffusionConfigParas Field_1_15; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Nullable_1<::System::Single>>* Field_1_13; // 0x50
	::System::Action* Field_1_1; // 0x58
	::MoleMole::Vector2Int Field_1_8; // 0x60
	::System::Single Field_1_5; // 0x68
	::System::Boolean Field_1_3; // 0x6C
	::System::Boolean Field_1_2; // 0x6D
	::System::Boolean Field_1_14; // 0x6E
	::System::Single Field_1_7; // 0x70
	::System::Single Field_1_6; // 0x74
	::System::Single Field_1_10; // 0x78
	::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> Field_1_9; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_1E22CF79A4D028CE(::MoleMole::Vector2Int a1, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::MoleMole::Vector2Int> a2)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Vector2Int, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::MoleMole::Vector2Int>))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_1E22CF79A4D028CE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* Method_1_639D3635C28C39BD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_639D3635C28C39BD_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_4F8D3E5066D53B59(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::Class_5_FCAF801AC482D3B5* a2, ::MoleMole::Vector2Int a3, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a4, ::System::Single a5, ::MoleMole::HollowChessboard::CellDiffusionConfigParas a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_5_FCAF801AC482D3B5*, ::MoleMole::Vector2Int, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::MoleMole::HollowChessboard::CellDiffusionConfigParas, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_4F8D3E5066D53B59_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_2BA3DB2BD2587D96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_2BA3DB2BD2587D96_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD94EE0F564B0E6E(::System::Single a1, ::System::Single a2, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_BD94EE0F564B0E6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_8A5C1AFAA6C38289(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_8A5C1AFAA6C38289_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_56D4549C0A4A3ACA(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_B71CA39446BBFDC7_METHOD_1_56D4549C0A4A3ACA_OFFSET))(this, a1, a2);
	}
};
