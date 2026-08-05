#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Struct_2_9D8B950D8621E6B3.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_4_3CDB96C07FCF69DD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_3CDB96C07FCF69DD_STRUCT_2_A23CD5A93277277F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AD7E0)
#define CLASS_4_3CDB96C07FCF69DD_STRUCT_2_A23CD5A93277277F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_3CDB96C07FCF69DD_Struct_2_A23CD5A93277277F_TypeDefinitionIndex = 62319;

struct alignas(8) Class_4_3CDB96C07FCF69DD_Struct_2_A23CD5A93277277F
{
	::System::Threading::CancellationToken Field_2_4; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_2_11; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_9D8B950D8621E6B3> Field_2_9; // 0x20
	::Class_4_3CDB96C07FCF69DD* Field_2_10; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x48
	::System::String* Field_2_5; // 0x58
	::Foundation::ViewObject::ViewObjectHandle Field_2_6; // 0x60
	::System::Int32 Field_2_0; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_STRUCT_2_A23CD5A93277277F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_STRUCT_2_A23CD5A93277277F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
