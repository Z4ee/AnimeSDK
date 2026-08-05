#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_E23E4CB2769CC93F;
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }

#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC5D20)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17BC5D30)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17BC63F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatCommonInfoUIWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 51798;

	class UIFriendChatCommonInfoUIWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::Class_2_E23E4CB2769CC93F* circleData; // 0x10
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCirclePlayerInfoUIView_b__0(::Class_1_57F7F2BF8C55D6B6* selfSys)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__0_OFFSET))(this, selfSys);
		}

		::System::Boolean _InitCirclePlayerInfoUIView_b__1(::Class_2_D02DABCF41CDA271* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D02DABCF41CDA271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__1_OFFSET))(this, member);
		}
	};
}
