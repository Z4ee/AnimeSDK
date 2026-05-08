#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIGeneralLoginTopTipsPopWindowController; }

#define MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151B86C0)
#define MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONSTARTSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x151B86D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTopTipsPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 73659;

	class UIGeneralLoginTopTipsPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralLoginTopTipsPopWindowController* __4__this; // 0x10
		::System::Single length; // 0x18
		::UnityEngine::Vector2 finalSize; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStartShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONSTARTSHOW_B__0_OFFSET))(this);
		}
	};
}
