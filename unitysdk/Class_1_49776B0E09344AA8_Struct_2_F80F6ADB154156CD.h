#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class Class_5_AF65C3A968E836D2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x701B10)
#define CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_49776B0E09344AA8_Struct_2_F80F6ADB154156CD_TypeDefinitionIndex = 57734;

struct alignas(8) Class_1_49776B0E09344AA8_Struct_2_F80F6ADB154156CD
{
	::Class_5_AF65C3A968E836D2* Field_2_5; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x20
	::Class_5_AF65C3A968E836D2* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::System::Action* Field_2_7; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::MoleMole::HollowChessboard::HollowCell Field_2_6; // 0x54
	::MoleMole::HollowChessboard::HollowCell Field_2_4; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
