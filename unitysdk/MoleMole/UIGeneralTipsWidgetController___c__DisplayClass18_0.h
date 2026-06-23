#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIGeneralTipsWidgetController; }

#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1845CBB0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS18_0__FADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1845CBC0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS18_0__FADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x1845CC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsWidgetController___c__DisplayClass18_0_TypeDefinitionIndex = 84361;

	class UIGeneralTipsWidgetController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsWidgetController* __4__this; // 0x10
		::UnityEngine::Vector2 finalSize; // 0x18
		::System::Single length; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _FadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS18_0__FADEOUT_B__0_OFFSET))(this);
		}

		::System::Void _FadeOut_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS18_0__FADEOUT_B__1_OFFSET))(this);
		}
	};
}
