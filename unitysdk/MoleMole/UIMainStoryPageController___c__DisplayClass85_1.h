#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController___c__DisplayClass85_0; }
namespace MoleMole { class UIMainStoryPersonalRowWidgetController; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_1__CTOR_OFFSET UNITYSDK_OFFSET(0x189C5740)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_1__INITPERSONALLINE_B__0_OFFSET UNITYSDK_OFFSET(0x189C5750)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_1__INITPERSONALLINE_B__1_OFFSET UNITYSDK_OFFSET(0x189C5E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass85_1_TypeDefinitionIndex = 84574;

	class UIMainStoryPageController___c__DisplayClass85_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPersonalRowWidgetController* ctrl; // 0x10
		::MoleMole::UIMainStoryPageController___c__DisplayClass85_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitPersonalLine_b__0(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_1__INITPERSONALLINE_B__0_OFFSET))(this, isInit);
		}

		::System::Void _InitPersonalLine_b__1(::System::Int32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_1__INITPERSONALLINE_B__1_OFFSET))(this, templateID);
		}
	};
}
