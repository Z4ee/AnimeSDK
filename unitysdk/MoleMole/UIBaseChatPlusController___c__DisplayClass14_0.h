#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseChatPlusController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192AAD10)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS14_0__PLAYMASKFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x192AADB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlusController___c__DisplayClass14_0_TypeDefinitionIndex = 67739;

	class UIBaseChatPlusController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseChatPlusController* __4__this; // 0x10
		::System::Action* onFadeOutCompleted; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMaskFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS14_0__PLAYMASKFADEOUT_B__0_OFFSET))(this);
		}
	};
}
