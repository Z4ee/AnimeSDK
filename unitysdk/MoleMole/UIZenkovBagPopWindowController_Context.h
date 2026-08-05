#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F4A33839AB405E63.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1710A4EE34865C78;
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140FED40)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController_Context_TypeDefinitionIndex = 79225;

	class UIZenkovBagPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_159<::Class_1_1710A4EE34865C78*>* SelectQuestData; // 0x28
		::Enum_3_F4A33839AB405E63 ShowPageType; // 0x30
		::System::Int32 SearchEntityRid; // 0x34
		::System::Boolean IsNightMode; // 0x38
		::System::Boolean IsLegworkBangboo; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
