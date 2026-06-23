#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_STRUCT_2_76FE475E84A3BE1D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0930)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_STRUCT_2_76FE475E84A3BE1D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_76FE475E84A3BE1D_TypeDefinitionIndex = 42211;

struct alignas(8) Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_76FE475E84A3BE1D
{
	::Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02 Field_2_10; // 0x10
	::Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A* Field_2_2; // 0x50
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_15; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x68
	::MoleMole::Config::GuidePoint_AutoGenStrategy Field_2_3; // 0x78
	::System::Int32 Field_2_14; // 0xC0
	::UnityEngine::Vector3 Field_2_6; // 0xC4
	::System::Int32 Field_2_9; // 0xD0
	::System::Int32 Field_2_0; // 0xD4
	::System::Int32 Field_2_5; // 0xD8
	::System::Boolean Field_2_7; // 0xDC
	::System::Boolean Field_2_4; // 0xDD
	::System::Boolean Field_2_12; // 0xDE
	::UnityEngine::Vector3 Field_2_8; // 0xE0
	::System::Int32 Field_2_11; // 0xEC
	::System::Single Field_2_13; // 0xF0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_STRUCT_2_76FE475E84A3BE1D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_STRUCT_2_76FE475E84A3BE1D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
