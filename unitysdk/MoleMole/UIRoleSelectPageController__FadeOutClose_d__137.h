#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12E78930)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12E78A30)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12E78A90)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12E78A40)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E78920)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137__CTOR_OFFSET UNITYSDK_OFFSET(0x12E78910)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController__FadeOutClose_d__137_TypeDefinitionIndex = 39217;

	class UIRoleSelectPageController__FadeOutClose_d__137 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x10
		::System::Action* action; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single __2__current; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER__FADEOUTCLOSE_D__137_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
