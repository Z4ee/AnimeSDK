#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_LOCKEDSETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x1AE3B170)
#define MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE3B150)
#define MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE3B160)
#define MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3B200)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCurseKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 42108;

	class UIHollowCurseKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>* get_LockedSettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_LOCKEDSETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}
	};
}
