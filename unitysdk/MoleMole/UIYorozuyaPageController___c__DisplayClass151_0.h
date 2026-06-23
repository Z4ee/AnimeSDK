#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaPageController; }
namespace MoleMole { class UIYorozuyaSphereItemWidgetController; }

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1089F640)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__ONCLICKSPHERE_B__0_OFFSET UNITYSDK_OFFSET(0x1089F650)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__ONCLICKSPHERE_B__1_OFFSET UNITYSDK_OFFSET(0x1089F6E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass151_0_TypeDefinitionIndex = 74408;

	class UIYorozuyaPageController___c__DisplayClass151_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaSphereItemWidgetController* sphereBody; // 0x10
		::MoleMole::UIYorozuyaPageController* __4__this; // 0x18
		::System::Int32 questID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSphere_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__ONCLICKSPHERE_B__0_OFFSET))(this);
		}

		::System::Void _OnClickSphere_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__ONCLICKSPHERE_B__1_OFFSET))(this);
		}
	};
}
