#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }

#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FC53AB0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC53B00)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC53B60)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FC53B10)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FC53AA0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC53A90)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenComponent__WaitForKill_d__15_TypeDefinitionIndex = 28588;

	class DOTweenComponent__WaitForKill_d__15 : public ::System::Object
	{
	public:
		::DG::Tweening::Tween* t; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORKILL_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
