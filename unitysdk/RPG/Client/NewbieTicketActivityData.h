#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x9E87EC0)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9E87D10)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_SET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x9E87ED0)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x9E87B70)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E87970)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x9E879E0)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9E87FA0)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x9E87F40)
#define RPG_CLIENT_NEWBIETICKETACTIVITYDATA___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x9E87EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int NewbieTicketActivityData_TypeDefinitionIndex = 50008;

	class NewbieTicketActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList_k__BackingField; // 0xA0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA__CTOR_OFFSET))(this, ID);
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

		::System::Void set_QuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA_SET_QUESTIDLIST_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA___IFIXBASEPROXY__ONINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIETICKETACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
