#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_DF2C726EEEEC912D;
class Class_3_4666E61F66433B1E;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1488D5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGamePlayerInviteWidgetController_Context_TypeDefinitionIndex = 57544;

	class UIInGamePlayerInviteWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* OnClickFriend; // 0x28
		::System::Collections::Generic::IEnumerable_1<::Class_3_4666E61F66433B1E*>* InRoomPlayerList; // 0x30
		::System::Action_1<::System::Boolean>* OnUpdateScrollViewSwitchPlatformUI; // 0x38
		::System::Action* OnCloseAnimFinished; // 0x40
		::System::Action_1<::Class_2_DF2C726EEEEC912D*>* OnClickCircle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
