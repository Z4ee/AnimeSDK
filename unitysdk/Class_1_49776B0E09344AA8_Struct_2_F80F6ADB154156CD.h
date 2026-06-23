#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class Class_5_FCAF801AC482D3B5;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A4650)
#define CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_49776B0E09344AA8_Struct_2_F80F6ADB154156CD_TypeDefinitionIndex = 85452;

struct alignas(8) Class_1_49776B0E09344AA8_Struct_2_F80F6ADB154156CD
{
	::MoleMole::HollowChessboard::HollowEntity* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Action* Field_2_7; // 0x38
	::Class_5_FCAF801AC482D3B5* Field_2_5; // 0x40
	::Class_5_FCAF801AC482D3B5* Field_2_3; // 0x48
	::MoleMole::HollowChessboard::HollowCell Field_2_4; // 0x50
	::MoleMole::HollowChessboard::HollowCell Field_2_6; // 0x5C
	::System::Int32 Field_2_0; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_STRUCT_2_F80F6ADB154156CD_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
