#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEBDD700)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEBDD990)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEBDD9F0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xEBDD9A0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBDD6D0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDD6C0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xEBDD6F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem__LoadAllConfigDataAsync_d__65_TypeDefinitionIndex = 42356;

	class NPCCrowdModuleMainSystem__LoadAllConfigDataAsync_d__65 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action_1<::System::Single>* moveOneStepCallback; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::System::Action*> __7__wrap2; // 0x20
		::System::Single _step_5__2; // 0x38
		::System::Single progressSpan; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__LOADALLCONFIGDATAASYNC_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
