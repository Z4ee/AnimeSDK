#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/Enum_3_F4A33839AB405E63.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1710A4EE34865C78;
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1930FCC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController_Context_TypeDefinitionIndex = 61461;

	class UIBangkovBagPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_159<::Class_1_1710A4EE34865C78*>* SelectQuestData; // 0x28
		::System::Int32 SearchEntityRid; // 0x30
		::Enum_3_F4A33839AB405E63 ShowPageType; // 0x34
		::System::Boolean IsNightMode; // 0x38
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
