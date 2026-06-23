#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS314_0__CLOSEWITHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x15B51D20)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS314_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B51D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass314_0_TypeDefinitionIndex = 76173;

	class UIBaseController___c__DisplayClass314_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIBaseController* __4__this; // 0x18
		::System::Boolean closeAfter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS314_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseWithAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS314_0__CLOSEWITHANIMATION_B__0_OFFSET))(this);
		}
	};
}
