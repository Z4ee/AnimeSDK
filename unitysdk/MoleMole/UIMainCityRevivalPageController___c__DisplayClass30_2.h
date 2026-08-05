#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityRevivalPageController___c__DisplayClass30_0; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA0380)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_2__REFRESHMATERIALPROGRESSVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x19CA0390)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController___c__DisplayClass30_2_TypeDefinitionIndex = 89655;

	class UIMainCityRevivalPageController___c__DisplayClass30_2 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityRevivalPageController___c__DisplayClass30_0* CS___8__locals2; // 0x10
		::System::Single timer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterialProgressView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_2__REFRESHMATERIALPROGRESSVIEW_B__2_OFFSET))(this);
		}
	};
}
