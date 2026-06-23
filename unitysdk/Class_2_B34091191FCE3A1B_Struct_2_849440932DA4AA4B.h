#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_624;
class Class_2_8A73177250348A72;
class Class_2_B34091191FCE3A1B;
class Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_1;
class Class_3_270194760B058114;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_B34091191FCE3A1B_STRUCT_2_849440932DA4AA4B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C8CE0)
#define CLASS_2_B34091191FCE3A1B_STRUCT_2_849440932DA4AA4B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_Struct_2_849440932DA4AA4B_TypeDefinitionIndex = 86401;

struct alignas(8) Class_2_B34091191FCE3A1B_Struct_2_849440932DA4AA4B
{
	::Class_2_208CC9941471731A_624* Field_2_5; // 0x10
	::Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_1* Field_2_4; // 0x18
	::Class_2_B34091191FCE3A1B* Field_2_3; // 0x20
	::Class_3_270194760B058114* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::Class_2_8A73177250348A72* Field_2_7; // 0x40
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_6; // 0x48
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x50
	::System::Collections::Generic::List_1_Enumerator<::System::String*> Field_2_8; // 0x60
	::System::Int32 Field_2_0; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_849440932DA4AA4B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_849440932DA4AA4B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
