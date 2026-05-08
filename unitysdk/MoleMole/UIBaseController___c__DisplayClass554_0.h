#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS554_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152EC2C0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS554_0__PLAYANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x152EC2D0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS554_0__PLAYANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x152EC2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass554_0_TypeDefinitionIndex = 70944;

	class UIBaseController___c__DisplayClass554_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIBaseController* __4__this; // 0x18
		::MoleMole::UIBaseController_FadeFlag flag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS554_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimation_b__0(::System::String* backAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS554_0__PLAYANIMATION_B__0_OFFSET))(this, backAnim);
		}

		::System::Void _PlayAnimation_b__1(::System::String* backAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS554_0__PLAYANIMATION_B__1_OFFSET))(this, backAnim);
		}
	};
}
