#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE0650)

namespace MoleMole
{
	inline static constexpr unsigned int UIKeyBindingContext_TypeDefinitionIndex = 84137;

	class UIKeyBindingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_7FA27888FA17A22A SettingContentType; // 0x28
		::System::Boolean IsLocked; // 0x2C
		::Enum_3_A019F766F8C74696 InputDevice; // 0x30
		::MoleMole::LogicButtonInputType LogicButtonType; // 0x34
		::MoleMole::LogicButtonInputType ComboLogicButtonType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
