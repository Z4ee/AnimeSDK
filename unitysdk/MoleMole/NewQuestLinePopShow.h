#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_NEWQUESTLINEPOPSHOW_GET_ISMESSAGESENDINGQUEST_OFFSET UNITYSDK_OFFSET(0x11DE35F0)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11DE35E0)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11DE3650)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW_SET_ISMESSAGESENDINGQUEST_OFFSET UNITYSDK_OFFSET(0x11DE3600)
#define MOLEMOLE_NEWQUESTLINEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE3610)

namespace MoleMole
{
	inline static constexpr unsigned int NewQuestLinePopShow_TypeDefinitionIndex = 51786;

	class NewQuestLinePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Boolean _IsMessageSendingQuest_k__BackingField; // 0x28
		::System::Int32 _specialQuestId; // 0x2C

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
