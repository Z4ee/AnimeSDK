#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_7594C8C40FFC1AE0.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NEWQUESTPOPSHOW_GETMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x173814C0)
#define MOLEMOLE_NEWQUESTPOPSHOW_GET_ISMESSAGESENDINGQUEST_OFFSET UNITYSDK_OFFSET(0x17381280)
#define MOLEMOLE_NEWQUESTPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17381270)
#define MOLEMOLE_NEWQUESTPOPSHOW_INITIGNOREPOPCTRL_OFFSET UNITYSDK_OFFSET(0x173813C0)
#define MOLEMOLE_NEWQUESTPOPSHOW_INITMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x17381420)
#define MOLEMOLE_NEWQUESTPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x173817B0)
#define MOLEMOLE_NEWQUESTPOPSHOW_SET_ISMESSAGESENDINGQUEST_OFFSET UNITYSDK_OFFSET(0x17381290)
#define MOLEMOLE_NEWQUESTPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x173812A0)

namespace MoleMole
{
	inline static constexpr unsigned int NewQuestPopShow_TypeDefinitionIndex = 53729;

	class NewQuestPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* QuestIDList; // 0x28
		::Enum_3_7594C8C40FFC1AE0 QuestType; // 0x30
		::System::Boolean _IsMessageSendingQuest_k__BackingField; // 0x34

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* questIDList, ::System::Boolean isMessageSendingQuest, ::Enum_3_7594C8C40FFC1AE0 questType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::Enum_3_7594C8C40FFC1AE0))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW__CTOR_OFFSET))(this, questIDList, isMessageSendingQuest, questType);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsMessageSendingQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW_GET_ISMESSAGESENDINGQUEST_OFFSET))(this);
		}

		::System::Void set_IsMessageSendingQuest(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW_SET_ISMESSAGESENDINGQUEST_OFFSET))(this, value);
		}

		::System::Void InitIgnorePopCtrl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW_INITIGNOREPOPCTRL_OFFSET))(this);
		}

		::System::Void InitMatchPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW_INITMATCHPAGE_OFFSET))(this);
		}

		::System::Boolean GetMatchPage(::Enum_3_205B03D40B9BD873& matchPage)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_205B03D40B9BD873&))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW_GETMATCHPAGE_OFFSET))(this, matchPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWQUESTPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
