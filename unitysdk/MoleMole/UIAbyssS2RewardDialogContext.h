#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssS2RewardDialogPageController_PageType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_10;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2REWARDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED73C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardDialogContext_TypeDefinitionIndex = 42890;

	class UIAbyssS2RewardDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* CloseBtnCallBack; // 0x28
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_10*>* missionTabs; // 0x30
		::MoleMole::UIAbyssS2RewardDialogPageController_PageType DefaultPage; // 0x38
		::System::Boolean showTab; // 0x3C
		::System::Boolean needPlayAnim; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
