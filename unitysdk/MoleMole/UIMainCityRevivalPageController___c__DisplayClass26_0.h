#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace MoleMole { class UIMainCityRevivalPageController; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1744C710)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS26_0__REFRESHDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1744C720)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController___c__DisplayClass26_0_TypeDefinitionIndex = 89652;

	class UIMainCityRevivalPageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityRevivalPageController* __4__this; // 0x10
		::System::Boolean init; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshData_b__0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___C__DISPLAYCLASS26_0__REFRESHDATA_B__0_OFFSET))(this, message);
		}
	};
}
