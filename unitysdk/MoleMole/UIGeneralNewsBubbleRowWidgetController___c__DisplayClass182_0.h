#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177EBE70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__SHOWBONUSTIME_B__0_OFFSET UNITYSDK_OFFSET(0x177EBE80)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__SHOWBONUSTIME_B__2_OFFSET UNITYSDK_OFFSET(0x177EBFA0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__SHOWBONUSTIME_G___WAITANDFADEOUT_1_OFFSET UNITYSDK_OFFSET(0x177EBF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass182_0_TypeDefinitionIndex = 86508;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::String* outAnim; // 0x18
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBonusTime_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__SHOWBONUSTIME_B__0_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _ShowBonusTime_g___WaitAndFadeOut_1()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__SHOWBONUSTIME_G___WAITANDFADEOUT_1_OFFSET))(this);
		}

		::System::Void _ShowBonusTime_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS182_0__SHOWBONUSTIME_B__2_OFFSET))(this);
		}
	};
}
