#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_60D3904E4B6E06F8;
class Class_3_1CE80979E7BE70A6;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_60D3904E4B6E06F8_STRUCT_2_ADA0DDC01EC4BFFB_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D4E00)
#define CLASS_2_60D3904E4B6E06F8_STRUCT_2_ADA0DDC01EC4BFFB_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x59F4E0)

inline static constexpr unsigned int Class_2_60D3904E4B6E06F8_Struct_2_ADA0DDC01EC4BFFB_1_TypeDefinitionIndex = 77318;

struct alignas(8) Class_2_60D3904E4B6E06F8_Struct_2_ADA0DDC01EC4BFFB_1
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
	::Class_3_1CE80979E7BE70A6* Field_2_6; // 0x40
	::Class_2_60D3904E4B6E06F8* Field_2_7; // 0x48
	::System::Int32 Field_2_1; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60D3904E4B6E06F8_STRUCT_2_ADA0DDC01EC4BFFB_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_60D3904E4B6E06F8_STRUCT_2_ADA0DDC01EC4BFFB_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
