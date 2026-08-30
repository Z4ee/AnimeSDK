#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xD9D0270)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD9D00F0)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_SET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xD9D0280)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xD9CFF80)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CFD50)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xD9CFDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int NewbieTicketActivityData_TypeDefinitionIndex = 61736;

	class NewbieTicketActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList_k__BackingField; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA_GET_QUESTIDLIST_OFFSET))(this);
		}

		::System::Void set_QuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA_SET_QUESTIDLIST_OFFSET))(this, a1);
		}
	};
}
