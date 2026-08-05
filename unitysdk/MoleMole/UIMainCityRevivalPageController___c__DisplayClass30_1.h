#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityRevivalPageController___c__DisplayClass30_0; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA02C0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_1__REFRESHMATERIALPROGRESSVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x19CA02D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController___c__DisplayClass30_1_TypeDefinitionIndex = 89654;

	class UIMainCityRevivalPageController___c__DisplayClass30_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityRevivalPageController___c__DisplayClass30_0* CS___8__locals1; // 0x10
		::System::Single timer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterialProgressView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_1__REFRESHMATERIALPROGRESSVIEW_B__0_OFFSET))(this);
		}
	};
}
