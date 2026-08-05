#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16D67A10)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_0__SHOWCOMBOUI_INNER_B__0_OFFSET UNITYSDK_OFFSET(0x16D67A20)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass85_0_TypeDefinitionIndex = 46350;

	class UICinemaSinglePlayWidgetController___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* comboRoot; // 0x10
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowComboUI_Inner_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_0__SHOWCOMBOUI_INNER_B__0_OFFSET))(this);
		}
	};
}
