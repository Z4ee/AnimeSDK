#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_696E0C6E8A7D9C84_Struct_2_615BE4A515A3D1B0.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ObjectPoolOfT_1_ObjectHandler_1.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_1138;
class Class_2_8A73177250348A72;
class Class_2_B34091191FCE3A1B;
class Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B34091191FCE3A1B_STRUCT_2_232A75C7EA7E48EC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x860D50)
#define CLASS_2_B34091191FCE3A1B_STRUCT_2_232A75C7EA7E48EC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_Struct_2_232A75C7EA7E48EC_TypeDefinitionIndex = 87058;

struct alignas(8) Class_2_B34091191FCE3A1B_Struct_2_232A75C7EA7E48EC
{
	::Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A* Field_2_7; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::Class_2_696E0C6E8A7D9C84_Struct_2_615BE4A515A3D1B0> Field_2_11; // 0x18
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::Class_2_696E0C6E8A7D9C84_Struct_2_615BE4A515A3D1B0>*, ::System::Collections::Generic::List_1<::Class_2_696E0C6E8A7D9C84_Struct_2_615BE4A515A3D1B0>*> Field_2_6; // 0x50
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x58
	::Class_2_208CC9941471731A_1138* Field_2_5; // 0x68
	::Class_2_8A73177250348A72* Field_2_4; // 0x70
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x78
	::Class_2_B34091191FCE3A1B* Field_2_0; // 0x88
	::System::Int32 Field_2_2; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_232A75C7EA7E48EC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_232A75C7EA7E48EC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
