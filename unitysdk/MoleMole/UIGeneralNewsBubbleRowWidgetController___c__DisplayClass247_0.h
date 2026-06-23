#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6EDC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G___SYNCFILL1TOFILL2_2_OFFSET UNITYSDK_OFFSET(0x16F6F260)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G____CHANGEICONPROG_3_OFFSET UNITYSDK_OFFSET(0x16F6F2B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G____CHANGEICON_1_OFFSET UNITYSDK_OFFSET(0x16F6EFC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G____CHANGEPROGRESSMAT_0_OFFSET UNITYSDK_OFFSET(0x16F6EDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass247_0_TypeDefinitionIndex = 86516;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass247_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::System::Boolean ignoreSwitchOut; // 0x18
		::MoleMole::Level::RatingType ratingTypeIcon; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateHadalIcon_g____ChangeProgressMat_0(::System::Boolean isFill1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G____CHANGEPROGRESSMAT_0_OFFSET))(this, isFill1);
		}

		::System::Void _UpdateHadalIcon_g____ChangeIcon_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G____CHANGEICON_1_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _UpdateHadalIcon_g___SyncFill1ToFill2_2()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G___SYNCFILL1TOFILL2_2_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _UpdateHadalIcon_g____ChangeIconProg_3()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS247_0__UPDATEHADALICON_G____CHANGEICONPROG_3_OFFSET))(this);
		}
	};
}
