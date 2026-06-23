#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseChatPlusController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BEA000)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS10_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x14BEA010)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlusController___c__DisplayClass10_0_TypeDefinitionIndex = 61577;

	class UIBaseChatPlusController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseChatPlusController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsurePreviousNodeFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER___C__DISPLAYCLASS10_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET))(this);
		}
	};
}
