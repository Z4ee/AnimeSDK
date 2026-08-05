#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }

#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FA0C380)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FA0C3E0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FA0C440)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FA0C3F0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FA0C370)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0C360)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenComponent__WaitForElapsedLoops_d__16_TypeDefinitionIndex = 28589;

	class DOTweenComponent__WaitForElapsedLoops_d__16 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::DG::Tweening::Tween* t; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 elapsedLoops; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORELAPSEDLOOPS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
