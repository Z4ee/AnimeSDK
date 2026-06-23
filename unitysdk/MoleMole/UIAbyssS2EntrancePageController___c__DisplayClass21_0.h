#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_60;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace MoleMole { class UIAbyssS2EntrancePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183B1180)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS21_0__SHOWVERSIONUPDATEREMINDER_WITHUNITASK_B__0_OFFSET UNITYSDK_OFFSET(0x183B1190)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS21_0__SHOWVERSIONUPDATEREMINDER_WITHUNITASK_B__1_OFFSET UNITYSDK_OFFSET(0x183B1500)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c__DisplayClass21_0_TypeDefinitionIndex = 54799;

	class UIAbyssS2EntrancePageController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* tcs; // 0x10
		::MoleMole::UIAbyssS2EntrancePageController* __4__this; // 0x18
		::Class_2_208CC9941471731A_60* needShowConfig; // 0x20
		::System::Action* __9__1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowVersionUpdateReminder_WithUniTask_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS21_0__SHOWVERSIONUPDATEREMINDER_WITHUNITASK_B__0_OFFSET))(this);
		}

		::System::Void _ShowVersionUpdateReminder_WithUniTask_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS21_0__SHOWVERSIONUPDATEREMINDER_WITHUNITASK_B__1_OFFSET))(this);
		}
	};
}
