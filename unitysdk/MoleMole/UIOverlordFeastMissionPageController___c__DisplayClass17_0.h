#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastMissionPageController; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6AA90)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS17_0__INITTABS_B__1_OFFSET UNITYSDK_OFFSET(0x14C6AAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMissionPageController___c__DisplayClass17_0_TypeDefinitionIndex = 41463;

	class UIOverlordFeastMissionPageController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastMissionPageController* __4__this; // 0x10
		::UnityEngine::UI::Extension::UITabButton* tab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTabs_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS17_0__INITTABS_B__1_OFFSET))(this);
		}
	};
}
