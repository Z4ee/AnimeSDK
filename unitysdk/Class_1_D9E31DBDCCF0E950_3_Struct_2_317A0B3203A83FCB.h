#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_31852543D3677906.h"
#include "unitysdk/Struct_2_AABA1B8087026F0F.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D9E31DBDCCF0E950_3_Class_1_11B6DDA44D300C83;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_317A0B3203A83FCB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D7640)
#define CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_317A0B3203A83FCB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_3_Struct_2_317A0B3203A83FCB_TypeDefinitionIndex = 63750;

struct alignas(8) Class_1_D9E31DBDCCF0E950_3_Struct_2_317A0B3203A83FCB
{
	::Class_1_D9E31DBDCCF0E950_3_Class_1_11B6DDA44D300C83* Field_2_3; // 0x10
	::Struct_2_AABA1B8087026F0F Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_31852543D3677906> Field_2_1; // 0x40
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_317A0B3203A83FCB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_317A0B3203A83FCB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
