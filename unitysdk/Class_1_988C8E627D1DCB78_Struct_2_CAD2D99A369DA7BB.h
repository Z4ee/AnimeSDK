#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_204;
class Class_1_5092FCA5A67513C7;
class Class_1_988C8E627D1DCB78;
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_988C8E627D1DCB78_STRUCT_2_CAD2D99A369DA7BB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C7960)
#define CLASS_1_988C8E627D1DCB78_STRUCT_2_CAD2D99A369DA7BB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_988C8E627D1DCB78_Struct_2_CAD2D99A369DA7BB_TypeDefinitionIndex = 91324;

struct alignas(8) Class_1_988C8E627D1DCB78_Struct_2_CAD2D99A369DA7BB
{
	::Class_1_988C8E627D1DCB78* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_5092FCA5A67513C7*> Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::IO::Stream*> Field_2_11; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::String*> Field_2_4; // 0x48
	::Foundation::AssetPath Field_2_7; // 0x60
	::Class_0_16E4307DCC419505_204* Field_2_6; // 0x70
	::System::Int32 Field_2_1; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_STRUCT_2_CAD2D99A369DA7BB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_STRUCT_2_CAD2D99A369DA7BB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
