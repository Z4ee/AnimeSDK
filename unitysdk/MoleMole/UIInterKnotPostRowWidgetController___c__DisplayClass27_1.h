#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotPostRowWidgetController___c__DisplayClass27_0; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS27_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18385E60)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS27_1__REFRESHINTERKNOTICON_B__0_OFFSET UNITYSDK_OFFSET(0x18385E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c__DisplayClass27_1_TypeDefinitionIndex = 41685;

	class UIInterKnotPostRowWidgetController___c__DisplayClass27_1 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UIImgText* imgtext; // 0x10
		::MoleMole::UIInterKnotPostRowWidgetController___c__DisplayClass27_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS27_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInterknotIcon_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS27_1__REFRESHINTERKNOTICON_B__0_OFFSET))(this);
		}
	};
}
