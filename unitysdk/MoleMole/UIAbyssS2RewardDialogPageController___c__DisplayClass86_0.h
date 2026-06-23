#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2RewardDialogPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18646810)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS86_0__ONTAKEALLREWARDERRORHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x18646820)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardDialogPageController___c__DisplayClass86_0_TypeDefinitionIndex = 66540;

	class UIAbyssS2RewardDialogPageController___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* resultList; // 0x10
		::MoleMole::UIAbyssS2RewardDialogPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTakeAllRewardErrorHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS86_0__ONTAKEALLREWARDERRORHANDLE_B__0_OFFSET))(this);
		}
	};
}
