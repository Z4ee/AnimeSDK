#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTEXT_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15B91510)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTEXT_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15B91520)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B91530)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaInsightLevelUpPopWindowContext_TypeDefinitionIndex = 81614;

	class UIForbiddenAreaInsightLevelUpPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* _OnClose_k__BackingField; // 0x28
		::System::UInt32 LastInsight; // 0x30
		::System::UInt32 NewInsight; // 0x34

		::System::Void _ctor(::System::UInt32 lastInsight, ::System::UInt32 newInsight, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTEXT__CTOR_OFFSET))(this, lastInsight, newInsight, onClose);
		}

		::System::Action* get_OnClose()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTEXT_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTEXT_SET_ONCLOSE_OFFSET))(this, value);
		}
	};
}
