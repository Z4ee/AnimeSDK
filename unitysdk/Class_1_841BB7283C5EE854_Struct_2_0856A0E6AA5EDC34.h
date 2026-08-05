#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PhotoFrame;
namespace MoleMole { class PhotoFrameRender; }
namespace MoleMole { class UIBaseController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_841BB7283C5EE854_STRUCT_2_0856A0E6AA5EDC34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86FB20)
#define CLASS_1_841BB7283C5EE854_STRUCT_2_0856A0E6AA5EDC34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_841BB7283C5EE854_Struct_2_0856A0E6AA5EDC34_TypeDefinitionIndex = 82474;

struct alignas(8) Class_1_841BB7283C5EE854_Struct_2_0856A0E6AA5EDC34
{
	::UnityEngine::RenderTexture* Field_2_10; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::MoleMole::PhotoFrameRender*> Field_2_11; // 0x18
	::MoleMole::PhotoFrameRender* Field_2_4; // 0x30
	::MoleMole::UIBaseController* Field_2_5; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x40
	::System::Func_2<::UnityEngine::RenderTexture*, ::Cysharp::Threading::Tasks::UniTask>* Field_2_6; // 0x50
	::PhotoFrame* Field_2_7; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x60
	::System::Int32 Field_2_1; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_STRUCT_2_0856A0E6AA5EDC34_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_STRUCT_2_0856A0E6AA5EDC34_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
