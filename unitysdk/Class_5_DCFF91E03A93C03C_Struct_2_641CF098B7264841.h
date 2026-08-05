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

#define CLASS_5_DCFF91E03A93C03C_STRUCT_2_641CF098B7264841_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8481A0)
#define CLASS_5_DCFF91E03A93C03C_STRUCT_2_641CF098B7264841_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_5_DCFF91E03A93C03C_Struct_2_641CF098B7264841_TypeDefinitionIndex = 83225;

struct alignas(8) Class_5_DCFF91E03A93C03C_Struct_2_641CF098B7264841
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x10
	::System::Action* Field_2_5; // 0x20
	::Class_1_534AF681CC2BD5FD_256_Class_1_2FC3C26C3378B60B* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x30
	::MoleMole::Config::AtmosphereData* Field_2_0; // 0x40
	::Class_5_DCFF91E03A93C03C* Field_2_1; // 0x48
	::MoleMole::Config::AtmosphereData* Field_2_7; // 0x50
	::Class_1_534AF681CC2BD5FD_256_Class_0_16E7307DCC43CB2C_22* Field_2_11; // 0x58
	::System::Int32 Field_2_3; // 0x60
	::System::Boolean Field_2_6; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_STRUCT_2_641CF098B7264841_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_STRUCT_2_641CF098B7264841_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
