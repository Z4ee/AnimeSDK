#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatPlusPageController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187D1F40)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__1_OFFSET UNITYSDK_OFFSET(0x187D2A50)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__4_OFFSET UNITYSDK_OFFSET(0x187D2F90)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__5_OFFSET UNITYSDK_OFFSET(0x187D2BA0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__6_OFFSET UNITYSDK_OFFSET(0x187D2CA0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__7_OFFSET UNITYSDK_OFFSET(0x187D2DF0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__8_OFFSET UNITYSDK_OFFSET(0x187D2E50)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_G__ONFINISH_2_OFFSET UNITYSDK_OFFSET(0x187D2D00)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_G__OPENNARRATORSCREEN_0_OFFSET UNITYSDK_OFFSET(0x187D1F50)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_G__PLAYGALEFFECT_3_OFFSET UNITYSDK_OFFSET(0x187D2470)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass54_0_TypeDefinitionIndex = 70299;

	class UIChatPlusPageController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Action* onFadeInFinished; // 0x10
		::MoleMole::UIChatPlusPageController* __4__this; // 0x18
		::System::Action* __9__5; // 0x20
		::System::String* textKey; // 0x28
		::UnityEngine::Events::UnityAction* __9__6; // 0x30
		::System::Action* onFinished; // 0x38
		::System::String* soundEvent; // 0x40
		::System::Single delay; // 0x48
		::System::Boolean anim; // 0x4C
		::System::Single speakSpeed; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_g__OpenNarratorScreen_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_G__OPENNARRATORSCREEN_0_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__1_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__5_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__6_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_g__OnFinish_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_G__ONFINISH_2_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__7_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_g__PlayGalEffect_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_G__PLAYGALEFFECT_3_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__8_OFFSET))(this);
		}

		::System::Void _ShowNarratorScreen_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS54_0__SHOWNARRATORSCREEN_B__4_OFFSET))(this);
		}
	};
}
