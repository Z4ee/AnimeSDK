#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1588AEB0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__0_OFFSET UNITYSDK_OFFSET(0x1588AEC0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__1_OFFSET UNITYSDK_OFFSET(0x1588AFE0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__3_OFFSET UNITYSDK_OFFSET(0x1588B000)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__4_OFFSET UNITYSDK_OFFSET(0x1588B3F0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_G__ONREPORTSUCCESS_2_OFFSET UNITYSDK_OFFSET(0x1588AF90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass93_0_TypeDefinitionIndex = 53760;

	class UIActivityHotpotInGamePageController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x18
		::System::Int32 originNumber; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRoundEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__0_OFFSET))(this);
		}

		::System::Void _OnRoundEnd_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__1_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _OnRoundEnd_g__OnReportSuccess_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_G__ONREPORTSUCCESS_2_OFFSET))(this);
		}

		::System::Void _OnRoundEnd_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__3_OFFSET))(this);
		}

		::System::Void _OnRoundEnd_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS93_0__ONROUNDEND_B__4_OFFSET))(this);
		}
	};
}
