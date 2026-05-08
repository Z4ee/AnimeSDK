#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_534AF681CC2BD5FD_269_Class_0_16E7307DCC43CB2C_18;
class Class_1_534AF681CC2BD5FD_269_Class_1_2FC3C26C3378B60B;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class AtmosphereData; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_AF65C3A968E836D2_STRUCT_2_641CF098B7264841_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B4050)
#define CLASS_5_AF65C3A968E836D2_STRUCT_2_641CF098B7264841_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_5_AF65C3A968E836D2_Struct_2_641CF098B7264841_TypeDefinitionIndex = 50875;

struct alignas(8) Class_5_AF65C3A968E836D2_Struct_2_641CF098B7264841
{
	::MoleMole::Config::AtmosphereData* Field_2_3; // 0x10
	::Class_1_534AF681CC2BD5FD_269_Class_0_16E7307DCC43CB2C_18* Field_2_8; // 0x18
	::Class_1_534AF681CC2BD5FD_269_Class_1_2FC3C26C3378B60B* Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Action* Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x40
	::MoleMole::Config::AtmosphereData* Field_2_4; // 0x50
	::Class_5_AF65C3A968E836D2* Field_2_2; // 0x58
	::System::Boolean Field_2_5; // 0x60
	::System::Int32 Field_2_0; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_STRUCT_2_641CF098B7264841_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_STRUCT_2_641CF098B7264841_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
