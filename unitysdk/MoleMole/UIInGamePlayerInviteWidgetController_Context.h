#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_E23E4CB2769CC93F;
class Class_3_09CC5D2676B783CA;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18858D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGamePlayerInviteWidgetController_Context_TypeDefinitionIndex = 78529;

	class UIInGamePlayerInviteWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* OnClickFriend; // 0x28
		::System::Action* OnCloseAnimFinished; // 0x30
		::System::Action_1<::Class_2_E23E4CB2769CC93F*>* OnClickCircle; // 0x38
		::System::Action_1<::System::Boolean>* OnUpdateScrollViewSwitchPlatformUI; // 0x40
		::System::Collections::Generic::IEnumerable_1<::Class_3_09CC5D2676B783CA*>* InRoomPlayerList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
