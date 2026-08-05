#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_DCFF91E03A93C03C;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_239_CLASS_3_8A7C3A21DF8757DB_METHOD_3_070A67F07C401765_OFFSET UNITYSDK_OFFSET(0x1719D020)
#define CLASS_1_534AF681CC2BD5FD_239_CLASS_3_8A7C3A21DF8757DB_METHOD_3_2FA22A822BDD19EE_OFFSET UNITYSDK_OFFSET(0x1719CD80)
#define CLASS_1_534AF681CC2BD5FD_239_CLASS_3_8A7C3A21DF8757DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1719CFE0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_239_Class_3_8A7C3A21DF8757DB_TypeDefinitionIndex = 48804;

class Class_1_534AF681CC2BD5FD_239_Class_3_8A7C3A21DF8757DB : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_3_7; // 0x40
	::Class_5_DCFF91E03A93C03C* Field_3_6; // 0x48
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_3_0; // 0x50
	::System::Boolean Field_3_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_239_CLASS_3_8A7C3A21DF8757DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2FA22A822BDD19EE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_239_CLASS_3_8A7C3A21DF8757DB_METHOD_3_2FA22A822BDD19EE_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_070A67F07C401765(::Class_5_DCFF91E03A93C03C* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_239_CLASS_3_8A7C3A21DF8757DB_METHOD_3_070A67F07C401765_OFFSET))(this, a1, a2, a3);
	}
};
