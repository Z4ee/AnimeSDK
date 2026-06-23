#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_81D34D116310A358;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17717910)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInviteRowWidgetController_Context_TypeDefinitionIndex = 51996;

	class UIFriendInviteRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Action*>* OnConfirm; // 0x28
		::System::Action_1<::Class_1_81D34D116310A358*>* OnReject; // 0x30
		::Class_1_81D34D116310A358* request; // 0x38
		::System::Action* ConfirmAction; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
