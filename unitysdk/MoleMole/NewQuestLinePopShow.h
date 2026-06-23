#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_NEWQUESTLINEPOPSHOW_GET_ISMESSAGESENDINGQUEST_OFFSET UNITYSDK_OFFSET(0x11647150)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11647140)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x116471B0)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW_SET_ISMESSAGESENDINGQUEST_OFFSET UNITYSDK_OFFSET(0x11647160)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x11647170)

namespace MoleMole
{
	inline static constexpr unsigned int NewQuestLinePopShow_TypeDefinitionIndex = 84482;

	class NewQuestLinePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _specialQuestId; // 0x28
		::System::Boolean _IsMessageSendingQuest_k__BackingField; // 0x2C

		::System::Void _ctor(::System::Int32 id, ::System::Boolean isMessageSendingQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTLINEPOPSHOW__CTOR_OFFSET))(this, id, isMessageSendingQuest);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTLINEPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsMessageSendingQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTLINEPOPSHOW_GET_ISMESSAGESENDINGQUEST_OFFSET))(this);
		}

		::System::Void set_IsMessageSendingQuest(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTLINEPOPSHOW_SET_ISMESSAGESENDINGQUEST_OFFSET))(this, value);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTLINEPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
