#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_179;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCBCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAvatarGesturePurchaseWidgetController_Context_TypeDefinitionIndex = 59811;

	class UIGeneralAvatarGesturePurchaseWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_179* GoodsData; // 0x28
		::System::Action_1<::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context*>* OnPurchase; // 0x30
		::System::Boolean DoubleConfirm; // 0x38
		::System::Boolean ShowInfoText; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
