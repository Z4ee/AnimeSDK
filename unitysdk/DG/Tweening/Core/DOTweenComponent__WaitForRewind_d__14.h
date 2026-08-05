#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }

#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FC5AC40)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC5ACB0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC5AD10)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FC5ACC0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FC5AC30)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5AC20)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenComponent__WaitForRewind_d__14_TypeDefinitionIndex = 28587;

	class DOTweenComponent__WaitForRewind_d__14 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::DG::Tweening::Tween* t; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORREWIND_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
