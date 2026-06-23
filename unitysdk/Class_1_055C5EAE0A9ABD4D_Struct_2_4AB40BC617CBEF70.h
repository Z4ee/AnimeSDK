#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_055C5EAE0A9ABD4D;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_055C5EAE0A9ABD4D_STRUCT_2_4AB40BC617CBEF70_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x63FF80)
#define CLASS_1_055C5EAE0A9ABD4D_STRUCT_2_4AB40BC617CBEF70_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_055C5EAE0A9ABD4D_Struct_2_4AB40BC617CBEF70_TypeDefinitionIndex = 40364;

struct alignas(8) Class_1_055C5EAE0A9ABD4D_Struct_2_4AB40BC617CBEF70
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext* Field_2_3; // 0x20
	::Class_5_A6F8D19602712D95* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::Class_1_055C5EAE0A9ABD4D* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055C5EAE0A9ABD4D_STRUCT_2_4AB40BC617CBEF70_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_055C5EAE0A9ABD4D_STRUCT_2_4AB40BC617CBEF70_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
