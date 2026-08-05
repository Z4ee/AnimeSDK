#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Struct_2_9D8B950D8621E6B3.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_204;
class Class_1_3716C67E0D738B84;
class Class_1_8D68BB826C7B7E2E;
class Class_1_9465CC52E1CFB15A;
class Class_1_B7C41BE725AAED79;
class Class_1_B9D4D1F73BF62BE6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_0301866112FB0B4E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x888600)
#define CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_0301866112FB0B4E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_B9D4D1F73BF62BE6_Struct_2_0301866112FB0B4E_TypeDefinitionIndex = 41102;

struct alignas(8) Class_1_B9D4D1F73BF62BE6_Struct_2_0301866112FB0B4E
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_9D8B950D8621E6B3> Field_2_12; // 0x10
	::Class_1_B7C41BE725AAED79* Field_2_6; // 0x30
	::Class_1_9465CC52E1CFB15A* Field_2_9; // 0x38
	::System::Collections::Generic::List_1<::Class_1_8D68BB826C7B7E2E*>* Field_2_15; // 0x40
	::System::String* Field_2_11; // 0x48
	::Class_1_B9D4D1F73BF62BE6* Field_2_5; // 0x50
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_9D8B950D8621E6B3> Field_2_7; // 0x58
	::Class_0_16E4307DCC419505_204* Field_2_10; // 0x78
	::System::Collections::Generic::List_1_Enumerator<::Class_1_3716C67E0D738B84*> Field_2_14; // 0x80
	::Class_1_3716C67E0D738B84* Field_2_13; // 0x98
	::System::Collections::Generic::List_1<::Class_1_9465CC52E1CFB15A*>* Field_2_8; // 0xA0
	::System::Int32 Field_2_4; // 0xA8
	::System::Int32 Field_2_0; // 0xAC

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_0301866112FB0B4E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_0301866112FB0B4E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
