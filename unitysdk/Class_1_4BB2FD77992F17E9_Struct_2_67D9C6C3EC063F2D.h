#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4BB2FD77992F17E9;
class Class_1_4BB2FD77992F17E9_Class_1_1D372300EA1A6C91;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_4BB2FD77992F17E9_STRUCT_2_67D9C6C3EC063F2D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B37F0)
#define CLASS_1_4BB2FD77992F17E9_STRUCT_2_67D9C6C3EC063F2D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_4BB2FD77992F17E9_Struct_2_67D9C6C3EC063F2D_TypeDefinitionIndex = 50055;

struct alignas(8) Class_1_4BB2FD77992F17E9_Struct_2_67D9C6C3EC063F2D
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_2; // 0x10
	::Class_1_4BB2FD77992F17E9* Field_2_0; // 0x28
	::Class_1_4BB2FD77992F17E9_Class_1_1D372300EA1A6C91* Field_2_1; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x38
	::System::Int32 Field_2_3; // 0x48
	::MoleMole::HollowChessboard::HollowCell Field_2_7; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB2FD77992F17E9_STRUCT_2_67D9C6C3EC063F2D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_4BB2FD77992F17E9_STRUCT_2_67D9C6C3EC063F2D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
