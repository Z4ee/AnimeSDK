#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_81D34D116310A358;
namespace System { class Action; }

#define MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1679FBB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFriendInviteGamePopWindowController_Context_TypeDefinitionIndex = 86872;

	class UIGeneralFriendInviteGamePopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* CallOnComplete; // 0x28
		::System::Action* OnAcceptShowAction; // 0x30
		::Class_1_81D34D116310A358* request; // 0x38
		::System::UInt32 headPortrait; // 0x40

		::System::Void _ctor(::Class_1_81D34D116310A358* request, ::System::UInt32 portrait, ::System::Action* onAcceptShowAction, ::System::Action* callOnComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81D34D116310A358*, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, request, portrait, onAcceptShowAction, callOnComplete);
		}
	};
}
