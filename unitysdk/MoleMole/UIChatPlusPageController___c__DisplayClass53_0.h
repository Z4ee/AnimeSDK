#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatPlusPageController; }
namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E82860)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS53_0__PLAYMASKFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x14E82870)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass53_0_TypeDefinitionIndex = 51460;

	class UIChatPlusPageController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Action* onFadeOutCompleted; // 0x10
		::MoleMole::UIChatPlusPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMaskFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS53_0__PLAYMASKFADEOUT_B__0_OFFSET))(this);
		}
	};
}
