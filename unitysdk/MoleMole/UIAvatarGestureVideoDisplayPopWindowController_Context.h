#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_46A4DF183FD2681B.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_179;
namespace MoleMole { class UIGeneralAvatarGesturePurchaseWidgetController_Context; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAVATARGESTUREVIDEODISPLAYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1850A190)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarGestureVideoDisplayPopWindowController_Context_TypeDefinitionIndex = 67156;

	class UIAvatarGestureVideoDisplayPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context*>* OnPurchase; // 0x28
		::Class_0_16E4307DCC419505_179* GoodsData; // 0x30
		::Enum_3_46A4DF183FD2681B Mode; // 0x38
		::System::Boolean DoubleConfirm; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGESTUREVIDEODISPLAYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
