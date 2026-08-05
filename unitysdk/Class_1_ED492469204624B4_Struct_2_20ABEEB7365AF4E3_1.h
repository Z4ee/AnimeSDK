#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_630;
class Class_1_2899B0E942F4D2BC;
class Class_1_ED492469204624B4;
class Class_4_6242AA13BDAC7241;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_ED492469204624B4_STRUCT_2_20ABEEB7365AF4E3_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CF30)
#define CLASS_1_ED492469204624B4_STRUCT_2_20ABEEB7365AF4E3_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_ED492469204624B4_Struct_2_20ABEEB7365AF4E3_1_TypeDefinitionIndex = 63470;

struct alignas(8) Class_1_ED492469204624B4_Struct_2_20ABEEB7365AF4E3_1
{
	::Class_0_16E4307DCC419505_630* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x18
	::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>* Field_2_9; // 0x28
	::Class_5_DCFF91E03A93C03C* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Field_2_11; // 0x38
	::Class_1_ED492469204624B4* Field_2_0; // 0x40
	::Class_1_2899B0E942F4D2BC* Field_2_4; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x50
	::Class_4_6242AA13BDAC7241* Field_2_10; // 0x60
	::Enum_3_ABCAEFDF06E3479A Field_2_6; // 0x68
	::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 Field_2_8; // 0x6C
	::System::Int32 Field_2_2; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_STRUCT_2_20ABEEB7365AF4E3_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_STRUCT_2_20ABEEB7365AF4E3_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
