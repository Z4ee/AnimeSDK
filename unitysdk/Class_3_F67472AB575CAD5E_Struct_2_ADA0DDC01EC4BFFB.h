#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_07AAFA6F7F79BEB3_1;
class Class_3_F67472AB575CAD5E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_F67472AB575CAD5E_STRUCT_2_ADA0DDC01EC4BFFB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80D0C0)
#define CLASS_3_F67472AB575CAD5E_STRUCT_2_ADA0DDC01EC4BFFB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x67A600)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_Struct_2_ADA0DDC01EC4BFFB_TypeDefinitionIndex = 41840;

struct alignas(8) Class_3_F67472AB575CAD5E_Struct_2_ADA0DDC01EC4BFFB
{
	::Class_3_F67472AB575CAD5E* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Class_3_07AAFA6F7F79BEB3_1* Field_2_3; // 0x28
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_STRUCT_2_ADA0DDC01EC4BFFB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_STRUCT_2_ADA0DDC01EC4BFFB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
