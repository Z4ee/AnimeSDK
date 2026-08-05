#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UILiveHousePlay3DModelController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__83_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E6A0)
#define MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__83_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B600)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHousePlay3DModelController__EnterPerformSpotProcess_d__83_TypeDefinitionIndex = 76435;

	struct alignas(8) UILiveHousePlay3DModelController__EnterPerformSpotProcess_d__83
	{
		::MoleMole::UILiveHousePlay3DModelController* __4__this; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__83_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__83_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
