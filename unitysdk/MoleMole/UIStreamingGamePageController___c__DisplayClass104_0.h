#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStreamingGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D714B0)
#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x14D714C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStreamingGamePageController___c__DisplayClass104_0_TypeDefinitionIndex = 61706;

	class UIStreamingGamePageController___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIStreamingGamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS104_0__PLAYFADEOUT_B__0_OFFSET))(this);
		}
	};
}
