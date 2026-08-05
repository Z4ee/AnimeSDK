#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaPageController; }
namespace MoleMole { class UIYorozuyaSphereItemWidgetController; }

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__CTOR_OFFSET UNITYSDK_OFFSET(0x112CAFF0)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__ONCLICKSPHERE_B__0_OFFSET UNITYSDK_OFFSET(0x112CB000)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS151_0__ONCLICKSPHERE_B__1_OFFSET UNITYSDK_OFFSET(0x112CB090)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass151_0_TypeDefinitionIndex = 54552;

	class UIYorozuyaPageController___c__DisplayClass151_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaPageController* __4__this; // 0x10
		::MoleMole::UIYorozuyaSphereItemWidgetController* sphereBody; // 0x18
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
