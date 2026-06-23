#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
class Class_3_DFD5D1FDB9D2A4AC;
class MonoRootMotion;
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87FF60)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_4C3056D3512A5C50_1_TypeDefinitionIndex = 86322;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_4C3056D3512A5C50_1
{
	::MonoRootMotion* Field_2_11; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x18
	::System::Collections::Generic::List_1_Enumerator<::MoleMole::FishPosConfig*> Field_2_4; // 0x28
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x40
	::Class_3_DFD5D1FDB9D2A4AC* Field_2_5; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x50
	::System::Int32 Field_2_10; // 0x60
	::UnityEngine::Vector3 Field_2_8; // 0x64
	::System::Boolean Field_2_3; // 0x70
	::System::Single Field_2_6; // 0x74
	::System::Int32 Field_2_0; // 0x78
	::System::Single Field_2_7; // 0x7C
	::System::Single Field_2_9; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
