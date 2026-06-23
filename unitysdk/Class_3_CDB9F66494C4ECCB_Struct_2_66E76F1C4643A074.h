#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_CDB9F66494C4ECCB;
class MonoUITableScrollV2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_CDB9F66494C4ECCB_STRUCT_2_66E76F1C4643A074_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79C0C0)
#define CLASS_3_CDB9F66494C4ECCB_STRUCT_2_66E76F1C4643A074_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_CDB9F66494C4ECCB_Struct_2_66E76F1C4643A074_TypeDefinitionIndex = 82666;

struct alignas(8) Class_3_CDB9F66494C4ECCB_Struct_2_66E76F1C4643A074
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x28
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::Class_3_CDB9F66494C4ECCB* Field_2_2; // 0x40
	::MonoUITableScrollV2* Field_2_4; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_STRUCT_2_66E76F1C4643A074_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_STRUCT_2_66E76F1C4643A074_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
