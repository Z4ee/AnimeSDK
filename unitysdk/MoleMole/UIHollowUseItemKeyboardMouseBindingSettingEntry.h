#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_LOCKEDSETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x1829AEB0)
#define MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1829AE90)
#define MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1829AEA0)
#define MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1829AF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowUseItemKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 56184;

	class UIHollowUseItemKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>* get_LockedSettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWUSEITEMKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_LOCKEDSETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}
	};
}
