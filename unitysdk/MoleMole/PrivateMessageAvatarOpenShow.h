#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace MoleMole { class UIPrivateMessageContext; }

#define MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x1385D3A0)
#define MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1385D3B0)
#define MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1385D530)
#define MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1385D4D0)
#define MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1385D490)
#define MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW___BASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1385D660)
#define MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1385D670)

namespace MoleMole
{
	inline static constexpr unsigned int PrivateMessageAvatarOpenShow_TypeDefinitionIndex = 64665;

	class PrivateMessageAvatarOpenShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::UIPrivateMessageContext* _ctx; // 0x28
		::System::Single _delaySec; // 0x30

		::System::Void _ctor(::MoleMole::UIPrivateMessageContext* ctx, ::System::Single delaySec)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPrivateMessageContext*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW__CTOR_OFFSET))(this, ctx, delaySec);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Boolean __base_get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW___BASE_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEAVATAROPENSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
