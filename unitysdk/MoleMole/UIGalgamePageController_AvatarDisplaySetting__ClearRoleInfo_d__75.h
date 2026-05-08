#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController_UIRoleInfo; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x157A3600)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157A3780)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157A37E0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x157A3790)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157A35F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75__CTOR_OFFSET UNITYSDK_OFFSET(0x157A35E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_AvatarDisplaySetting__ClearRoleInfo_d__75_TypeDefinitionIndex = 41815;

	class UIGalgamePageController_AvatarDisplaySetting__ClearRoleInfo_d__75 : public ::System::Object
	{
	public:
		::System::Action* onClear; // 0x10
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* __4__this; // 0x18
		::MoleMole::UIGalgamePageController_UIRoleInfo* currRoleInfo; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single __2__current; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CLEARROLEINFO_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
