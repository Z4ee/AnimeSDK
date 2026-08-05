#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_5DD3D37B5227B106;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_5DD3D37B5227B106_STRUCT_2_DE74B3B1CBD75BFA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E420)
#define CLASS_3_5DD3D37B5227B106_STRUCT_2_DE74B3B1CBD75BFA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_5DD3D37B5227B106_Struct_2_DE74B3B1CBD75BFA_TypeDefinitionIndex = 85643;

struct alignas(8) Class_3_5DD3D37B5227B106_Struct_2_DE74B3B1CBD75BFA
{
	::MoleMole::HollowChessboard::RenderDataHandle Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x30
	::Class_3_5DD3D37B5227B106* Field_2_0; // 0x40
	::System::Int32 Field_2_3; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD3D37B5227B106_STRUCT_2_DE74B3B1CBD75BFA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_5DD3D37B5227B106_STRUCT_2_DE74B3B1CBD75BFA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
