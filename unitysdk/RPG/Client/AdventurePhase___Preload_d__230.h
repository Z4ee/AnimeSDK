#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
namespace RPG::Client { class AdventurePhase; }

#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC60C3C0)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC60C710)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC60C770)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC60C720)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC60C3B0)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230__CTOR_OFFSET UNITYSDK_OFFSET(0xC609750)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___Preload_d__230_TypeDefinitionIndex = 60124;

	class AdventurePhase___Preload_d__230 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_384* __2__current; // 0x10
		::RPG::Client::AdventurePhase* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_384* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_384*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__230_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
