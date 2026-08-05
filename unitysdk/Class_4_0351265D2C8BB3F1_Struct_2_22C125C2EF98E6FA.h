#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Enum_3_44A8FD5EE475BAE7.h"
#include "unitysdk/Struct_2_903FDA347BBAD2AB.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_0351265D2C8BB3F1;
namespace MoleMole { class AreaCategoryInOutSubsystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_0351265D2C8BB3F1_STRUCT_2_22C125C2EF98E6FA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x870E50)
#define CLASS_4_0351265D2C8BB3F1_STRUCT_2_22C125C2EF98E6FA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_0351265D2C8BB3F1_Struct_2_22C125C2EF98E6FA_TypeDefinitionIndex = 83161;

struct alignas(8) Class_4_0351265D2C8BB3F1_Struct_2_22C125C2EF98E6FA
{
	::MoleMole::AreaCategoryInOutSubsystem* Field_2_6; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_2_9; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_903FDA347BBAD2AB> Field_2_14; // 0x48
	::Class_4_0351265D2C8BB3F1* Field_2_11; // 0x70
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x78
	::Struct_2_FE9BD044832BC9C3 Field_2_15; // 0x88
	::System::Int32 Field_2_8; // 0xB8
	::System::Int32 Field_2_10; // 0xBC
	::System::Int32 Field_2_0; // 0xC0
	::UnityEngine::Vector3 Field_2_4; // 0xC4
	::Enum_3_44A8FD5EE475BAE7 Field_2_5; // 0xD0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1_STRUCT_2_22C125C2EF98E6FA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1_STRUCT_2_22C125C2EF98E6FA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
