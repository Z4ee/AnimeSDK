#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/CellDiffusionConfigParas.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_B71CA39446BBFDC7;
class Class_5_A6F8D19602712D95;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_5F696D55FD23C40C_OFFSET UNITYSDK_OFFSET(0x156A1AA0)
#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_71E03FFB54AF3649_OFFSET UNITYSDK_OFFSET(0x156A0A30)
#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_8E4DB756FB3BB7F6_OFFSET UNITYSDK_OFFSET(0x156A1B90)
#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_9F85BC73C1FA5B4E_OFFSET UNITYSDK_OFFSET(0x156A1A10)
#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_B2B45A0FDF809296_OFFSET UNITYSDK_OFFSET(0x156A1B20)
#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_C29C762FEAD632A8_OFFSET UNITYSDK_OFFSET(0x156A0AB0)
#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x156A1DC0)
#define CLASS_1_8FDB07BC2E0815FC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x156A0A90)
#define CLASS_1_8FDB07BC2E0815FC__CTOR_OFFSET UNITYSDK_OFFSET(0x156A09C0)

inline static constexpr unsigned int Class_1_8FDB07BC2E0815FC_TypeDefinitionIndex = 52510;

class Class_1_8FDB07BC2E0815FC : public ::System::Object
{
public:
	::Class_1_B71CA39446BBFDC7* Field_1_0; // 0x10
	::Class_5_AF65C3A968E836D2* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_71E03FFB54AF3649(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_71E03FFB54AF3649_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_C29C762FEAD632A8(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_C29C762FEAD632A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2B45A0FDF809296(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_B2B45A0FDF809296_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9F85BC73C1FA5B4E(::System::Collections::Generic::KeyValuePair_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_9F85BC73C1FA5B4E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5F696D55FD23C40C(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_5F696D55FD23C40C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E4DB756FB3BB7F6(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::Class_5_AF65C3A968E836D2* a2, ::MoleMole::Vector2Int a3, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a4, ::System::Single a5, ::System::Boolean a6, ::MoleMole::HollowChessboard::CellDiffusionConfigParas a7, ::System::Single a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::Vector2Int, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::System::Boolean, ::MoleMole::HollowChessboard::CellDiffusionConfigParas, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_8E4DB756FB3BB7F6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDB07BC2E0815FC_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}
};
