#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityRevivalPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA01F0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_0__REFRESHMATERIALPROGRESSVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19CA0200)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_0__REFRESHMATERIALPROGRESSVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x19CA0260)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController___c__DisplayClass30_0_TypeDefinitionIndex = 89656;

	class UIMainCityRevivalPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityRevivalPageController* __4__this; // 0x10
		::System::Action* onDone; // 0x18
		::System::Single curProgress; // 0x20
		::System::Single prvProgress; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterialProgressView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_0__REFRESHMATERIALPROGRESSVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshMaterialProgressView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS30_0__REFRESHMATERIALPROGRESSVIEW_B__3_OFFSET))(this);
		}
	};
}
