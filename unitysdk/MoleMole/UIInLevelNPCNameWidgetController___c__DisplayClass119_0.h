#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18155A80)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__PLAYCHATBUBBLEANIM_B__2_OFFSET UNITYSDK_OFFSET(0x18155D30)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__PLAYCHATBUBBLEANIM_G__PLAYCHAT_1_OFFSET UNITYSDK_OFFSET(0x18155AE0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__PLAYCHATBUBBLEANIM_G____DELAYPLAYCHAT_0_OFFSET UNITYSDK_OFFSET(0x18155A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController___c__DisplayClass119_0_TypeDefinitionIndex = 61990;

	class UIInLevelNPCNameWidgetController___c__DisplayClass119_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelNPCNameWidgetController* __4__this; // 0x10
		::System::String* clipName; // 0x18
		::System::Boolean isShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _PlayChatBubbleAnim_g____DelayPlayChat_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__PLAYCHATBUBBLEANIM_G____DELAYPLAYCHAT_0_OFFSET))(this);
		}

		::System::Void _PlayChatBubbleAnim_g__PlayChat_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__PLAYCHATBUBBLEANIM_G__PLAYCHAT_1_OFFSET))(this);
		}

		::System::Void _PlayChatBubbleAnim_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS119_0__PLAYCHATBUBBLEANIM_B__2_OFFSET))(this);
		}
	};
}
