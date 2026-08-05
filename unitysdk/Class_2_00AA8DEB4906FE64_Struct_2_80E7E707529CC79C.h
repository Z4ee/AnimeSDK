#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_00AA8DEB4906FE64;
class Class_2_208CC9941471731A_1022;
namespace MoleMole { class UIBaseController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D0670)
#define CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_00AA8DEB4906FE64_Struct_2_80E7E707529CC79C_TypeDefinitionIndex = 44308;

struct alignas(8) Class_2_00AA8DEB4906FE64_Struct_2_80E7E707529CC79C
{
	::Class_2_00AA8DEB4906FE64* Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x18
	::Class_2_208CC9941471731A_1022* Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x30
	::MoleMole::UIBaseController* Field_2_7; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::System::Int32 Field_2_1; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
