#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PhotoFrame;
namespace MoleMole { class PhotoFrameRender; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_841BB7283C5EE854_STRUCT_2_873540E0926A7F35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x796690)
#define CLASS_1_841BB7283C5EE854_STRUCT_2_873540E0926A7F35_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_841BB7283C5EE854_Struct_2_873540E0926A7F35_TypeDefinitionIndex = 80302;

struct alignas(8) Class_1_841BB7283C5EE854_Struct_2_873540E0926A7F35
{
	::MoleMole::PhotoFrameRender* Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MoleMole::PhotoFrameRender*> Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::PhotoFrame* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_STRUCT_2_873540E0926A7F35_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_STRUCT_2_873540E0926A7F35_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
