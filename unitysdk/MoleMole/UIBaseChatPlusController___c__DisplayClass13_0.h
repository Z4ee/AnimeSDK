#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseChatPlusController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19367BF0)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS13_0__PLAYMASKFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0x19367C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlusController___c__DisplayClass13_0_TypeDefinitionIndex = 67738;

	class UIBaseChatPlusController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* onFadeInCompleted; // 0x10
		::MoleMole::UIBaseChatPlusController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMaskFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS13_0__PLAYMASKFADEIN_B__0_OFFSET))(this);
		}
	};
}
