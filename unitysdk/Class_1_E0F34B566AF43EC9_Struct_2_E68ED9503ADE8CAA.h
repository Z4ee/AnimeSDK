#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_534AF681CC2BD5FD_256_Class_0_16E7307DCC43CB2C_22;
class Class_1_534AF681CC2BD5FD_256_Class_1_2FC3C26C3378B60B;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class AtmosphereData; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x873260)
#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Struct_2_E68ED9503ADE8CAA_TypeDefinitionIndex = 54834;

struct alignas(8) Class_1_E0F34B566AF43EC9_Struct_2_E68ED9503ADE8CAA
{
	::Class_5_DCFF91E03A93C03C* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x18
	::MoleMole::Config::AtmosphereData* Field_2_4; // 0x28
	::Class_1_534AF681CC2BD5FD_256_Class_1_2FC3C26C3378B60B* Field_2_10; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x38
	::System::Action* Field_2_11; // 0x48
	::Class_1_534AF681CC2BD5FD_256_Class_0_16E7307DCC43CB2C_22* Field_2_9; // 0x50
	::MoleMole::Config::AtmosphereData* Field_2_5; // 0x58
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
