#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_D02DABCF41CDA271;
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1699AC30)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__0_OFFSET UNITYSDK_OFFSET(0x1699AC40)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__1_OFFSET UNITYSDK_OFFSET(0x1699B0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatCommonInfoUIWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 81585;

	class UIFriendChatCommonInfoUIWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* __4__this; // 0x10
		::Class_1_BE6BF7909AD9D940* brief; // 0x18
		::System::Func_2<::Class_2_D02DABCF41CDA271*, ::System::Boolean>* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCirclePlayerIconBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__0_OFFSET))(this);
		}

		::System::Boolean _InitCirclePlayerIconBtn_b__1(::Class_2_D02DABCF41CDA271* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D02DABCF41CDA271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__1_OFFSET))(this, item);
		}
	};
}
