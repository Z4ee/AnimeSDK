#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD8A2640)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD8A28D0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD8A2930)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD8A28E0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8A2610)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60__CTOR_OFFSET UNITYSDK_OFFSET(0xD8A2600)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD8A2630)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem__LoadAllConfigDataAsync_d__60_TypeDefinitionIndex = 41874;

	class NPCCrowdModuleMainSystem__LoadAllConfigDataAsync_d__60 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* moveOneStepCallback; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::System::Action*> __7__wrap2; // 0x18
		::System::Object* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Single progressSpan; // 0x3C
		::System::Single _step_5__2; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
