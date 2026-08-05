#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }

#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F69A830)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F69A880)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F69A8E0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F69A890)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F69A820)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x1F69A810)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenComponent__WaitForStart_d__18_TypeDefinitionIndex = 28591;

	class DOTweenComponent__WaitForStart_d__18 : public ::System::Object
	{
	public:
		::DG::Tweening::Tween* t; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__WAITFORSTART_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
