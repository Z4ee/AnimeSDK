#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Controls { class ProfilerMemoryBlock; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19E90880)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E909B0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E90A10)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19E909C0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E90870)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x19E90850)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerMemoryBlock__CleanUp_d__8_TypeDefinitionIndex = 35397;

	class ProfilerMemoryBlock__CleanUp_d__8 : public ::System::Object
	{
	public:
		::SRDebugger::UI::Controls::ProfilerMemoryBlock* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CLEANUP_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
