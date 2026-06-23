#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMiniscapeMainPageController___c__DisplayClass20_0; }

#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15766410)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_1__PLAYLEVELUPGRADE_B__1_OFFSET UNITYSDK_OFFSET(0x15766470)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainPageController___c__DisplayClass20_1_TypeDefinitionIndex = 42266;

	class UIMiniscapeMainPageController___c__DisplayClass20_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMiniscapeMainPageController___c__DisplayClass20_0* CS___8__locals1; // 0x10
		::System::Int32 targetExp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayLevelUpgrade_b__1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_1__PLAYLEVELUPGRADE_B__1_OFFSET))(this, value);
		}
	};
}
