#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_81D34D116310A358;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1744BB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityFriendInviteDialogPopWindowController_Context_TypeDefinitionIndex = 70105;

	class UIMainCityFriendInviteDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_81D34D116310A358*>* activeInvites; // 0x28
		::System::Action* CallOnComplete; // 0x30
		::System::Action* OnAcceptShowAction; // 0x38
		::Class_1_81D34D116310A358* selectedInvite; // 0x40

		::System::Void _ctor(::Class_1_81D34D116310A358* request, ::System::Collections::Generic::List_1<::Class_1_81D34D116310A358*>* activeRequests, ::System::Action* onAcceptShowAction, ::System::Action* callOnComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81D34D116310A358*, ::System::Collections::Generic::List_1<::Class_1_81D34D116310A358*>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, request, activeRequests, onAcceptShowAction, callOnComplete);
		}
	};
}
