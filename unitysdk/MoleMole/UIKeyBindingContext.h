#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x148CF2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIKeyBindingContext_TypeDefinitionIndex = 69770;

	class UIKeyBindingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::LogicButtonInputType ComboLogicButtonType; // 0x28
		::Enum_3_A019F766F8C74696 InputDevice; // 0x2C
		::Enum_3_54486B88E1863A04 SettingContentType; // 0x30
		::System::Boolean IsLocked; // 0x34
		::MoleMole::LogicButtonInputType LogicButtonType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
