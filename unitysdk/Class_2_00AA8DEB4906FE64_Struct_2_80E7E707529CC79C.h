#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_00AA8DEB4906FE64;
class Class_2_208CC9941471731A_877;
namespace MoleMole { class UIBaseController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E14C0)
#define CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_00AA8DEB4906FE64_Struct_2_80E7E707529CC79C_TypeDefinitionIndex = 84909;

struct alignas(8) Class_2_00AA8DEB4906FE64_Struct_2_80E7E707529CC79C
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_2_208CC9941471731A_877* Field_2_5; // 0x30
	::MoleMole::UIBaseController* Field_2_4; // 0x38
	::Class_2_00AA8DEB4906FE64* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_2; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_STRUCT_2_80E7E707529CC79C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
