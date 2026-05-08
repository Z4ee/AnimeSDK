#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_477098397AE68C7E;
class Class_2_60D3904E4B6E06F8_Class_1_BE8BAB4F87EAB1EC_2;
class Class_3_1CE80979E7BE70A6_2;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7535B0)
#define CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_60D3904E4B6E06F8_Struct_2_95B76D574059C221_2_TypeDefinitionIndex = 70920;

struct alignas(8) Class_2_60D3904E4B6E06F8_Struct_2_95B76D574059C221_2
{
	::Class_3_1CE80979E7BE70A6_2* Field_2_2; // 0x10
	::System::String* Field_2_4; // 0x18
	::Class_2_477098397AE68C7E* Field_2_6; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_2_60D3904E4B6E06F8_Class_1_BE8BAB4F87EAB1EC_2* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x40
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_5; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_60D3904E4B6E06F8_STRUCT_2_95B76D574059C221_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
