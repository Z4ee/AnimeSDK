#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_60D3904E4B6E06F8_Class_1_3AA469D7017C0EF4_3;
class Class_3_0886A771C4D53727_23;
class Class_3_48228F5C09E69D7E;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82D220)
#define CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_60D3904E4B6E06F8_Struct_2_95B76D574059C221_TypeDefinitionIndex = 77321;

struct alignas(8) Class_2_60D3904E4B6E06F8_Struct_2_95B76D574059C221
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_3_0886A771C4D53727_23* Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::Class_2_60D3904E4B6E06F8_Class_1_3AA469D7017C0EF4_3* Field_2_7; // 0x38
	::System::String* Field_2_6; // 0x40
	::Class_3_48228F5C09E69D7E* Field_2_5; // 0x48
	::System::Int32 Field_2_2; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
