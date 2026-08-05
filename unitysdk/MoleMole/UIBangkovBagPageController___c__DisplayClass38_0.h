#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovBagPageController; }
namespace MoleMole { class UIBangkovItemInfoWidgetController_Context; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1956EC20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS38_0__OPENITEMINFOPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x1956EC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController___c__DisplayClass38_0_TypeDefinitionIndex = 61470;

	class UIBangkovBagPageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovBagPageController* __4__this; // 0x10
		::MoleMole::UIBangkovItemInfoWidgetController_Context* ctx; // 0x18
		::UnityEngine::Transform* parent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenItemInfoPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS38_0__OPENITEMINFOPANEL_B__0_OFFSET))(this);
		}
	};
}
