#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }

#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F980BA0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F980BF0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F980C50)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F980C00)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F980B90)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1F980B80)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenComponent__WaitForCompletion_d__13_TypeDefinitionIndex = 28586;

	class DOTweenComponent__WaitForCompletion_d__13 : public ::System::Object
	{
	public:
		::DG::Tweening::Tween* t; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORCOMPLETION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
