#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILevelLongFightResultChessboardTypePageController___c__DisplayClass28_0; }

#define MOLEMOLE_UILEVELLONGFIGHTRESULTCHESSBOARDTYPEPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15A60B80)
#define MOLEMOLE_UILEVELLONGFIGHTRESULTCHESSBOARDTYPEPAGECONTROLLER___C__DISPLAYCLASS28_1__REFRESHLEVELTXTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x15A64DE0)
#define MOLEMOLE_UILEVELLONGFIGHTRESULTCHESSBOARDTYPEPAGECONTROLLER___C__DISPLAYCLASS28_1__REFRESHLEVELTXTVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x15A64E90)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelLongFightResultChessboardTypePageController___c__DisplayClass28_1_TypeDefinitionIndex = 50181;

	class UILevelLongFightResultChessboardTypePageController___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::MoleMole::UILevelLongFightResultChessboardTypePageController___c__DisplayClass28_0* CS___8__locals1; // 0x10
		::System::Single prvExpRatio; // 0x18
		::System::Single remainExpRatio; // 0x1C
		::System::Single realExpProgressDuration; // 0x20
		::System::Single timer; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLONGFIGHTRESULTCHESSBOARDTYPEPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLONGFIGHTRESULTCHESSBOARDTYPEPAGECONTROLLER___C__DISPLAYCLASS28_1__REFRESHLEVELTXTVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLONGFIGHTRESULTCHESSBOARDTYPEPAGECONTROLLER___C__DISPLAYCLASS28_1__REFRESHLEVELTXTVIEW_B__2_OFFSET))(this);
		}
	};
}
