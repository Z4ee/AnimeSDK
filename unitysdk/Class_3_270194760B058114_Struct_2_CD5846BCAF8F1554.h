#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_270194760B058114;
class Class_3_270194760B058114_Class_1_5E8223171F89DF5C;
class Class_3_733B560439A4DEF8;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76E6C0)
#define CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_3_270194760B058114_Struct_2_CD5846BCAF8F1554_TypeDefinitionIndex = 55479;

struct alignas(8) Class_3_270194760B058114_Struct_2_CD5846BCAF8F1554
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::System::Threading::CancellationToken Field_2_3; // 0x30
	::Class_3_270194760B058114* Field_2_2; // 0x38
	::Class_3_733B560439A4DEF8* Field_2_5; // 0x40
	::Class_3_270194760B058114_Class_1_5E8223171F89DF5C* Field_2_4; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
