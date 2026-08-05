#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITheGunMainPageController; }
namespace MoleMole { class UITheGunMainPageController_Context; }

#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D69F30)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x17D69F40)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunMainPageController___c__DisplayClass16_0_TypeDefinitionIndex = 46652;

	class UITheGunMainPageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UITheGunMainPageController* __4__this; // 0x10
		::MoleMole::UITheGunMainPageController_Context* context; // 0x18
		::System::Int32 questID; // 0x20
		::System::Boolean openLevelDetail; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__ONUIOPEN_B__0_OFFSET))(this);
		}
	};
}
