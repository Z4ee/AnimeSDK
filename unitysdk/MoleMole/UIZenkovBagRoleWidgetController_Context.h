#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_186;
class Class_1_1685EC66FBD28897;
namespace MoleMole { class UIZenkovBagRoleWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14D988C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagRoleWidgetController_Context_TypeDefinitionIndex = 52277;

	class UIZenkovBagRoleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnEmptyWeaponClicked; // 0x28
		::System::String* TeleportTextMapKey; // 0x30
		::System::String* WeaponEmptyLabel; // 0x38
		::Class_0_16E4307DCC419505_186* WeaponEmptyDropTarget; // 0x40
		::System::Action_1<::MoleMole::UIZenkovBagRoleWidgetController*>* AfterContextApplied; // 0x48
		::System::Action_1<::System::Int32>* OnSlotClicked; // 0x50
		::Class_1_1685EC66FBD28897* WeaponViewData; // 0x58
		::System::String* WeaponEmptyBgPath; // 0x60
		::System::Int32 SlotIndex; // 0x68
		::System::Int32 LockTipGroupId; // 0x6C
		::System::Int32 DisplayAvatarTemplateId; // 0x70
		::System::Boolean IsSlotLocked; // 0x74
		::System::Boolean IsCanUnlock; // 0x75
		::System::Boolean DisplayAvatarIsUp; // 0x76
		::System::Boolean IsSplitTeam; // 0x77

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
