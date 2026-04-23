#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DocumentaryPhaseQuestPanelRow; }

#define RPG_CLIENT_ACTIVITYPHASEDATA_GETRECEIVABLECOUNT_OFFSET UNITYSDK_OFFSET(0x9C3C950)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_BEFOREID_OFFSET UNITYSDK_OFFSET(0x9C3C3F0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9C3C0B0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9C3C1B0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRALOCKED_OFFSET UNITYSDK_OFFSET(0x9C3C420)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRAQUEST_OFFSET UNITYSDK_OFFSET(0x9C3C380)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_FINISHEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x9C3C450)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVEBEFORE_OFFSET UNITYSDK_OFFSET(0x9C3C410)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVENEXT_OFFSET UNITYSDK_OFFSET(0x9C3C2A0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISALLFINISH_OFFSET UNITYSDK_OFFSET(0x9C3C8E0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C3C7C0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRACLOSED_OFFSET UNITYSDK_OFFSET(0x9C3C630)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C3C130)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTLOCKED_OFFSET UNITYSDK_OFFSET(0x9C3C620)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTPHASE_OFFSET UNITYSDK_OFFSET(0x9C3C230)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x9C3C310)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9C3C0D0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9C3C750)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x9C3C570)
#define RPG_CLIENT_ACTIVITYPHASEDATA_SET_BEFOREID_OFFSET UNITYSDK_OFFSET(0x9C3C400)
#define RPG_CLIENT_ACTIVITYPHASEDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9C3C0C0)
#define RPG_CLIENT_ACTIVITYPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3C0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhaseData_TypeDefinitionIndex = 56894;

	class ActivityPhaseData : public ::System::Object
	{
	public:
		::System::UInt32 _ConfigID_k__BackingField; // 0x10
		::System::UInt32 _BeforeID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA__CTOR_OFFSET))(this, configId);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_SET_CONFIGID_OFFSET))(this, value);
		}

		::RPG::GameCore::DocumentaryPhaseQuestPanelRow* get_Row()
		{
			return ((::RPG::GameCore::DocumentaryPhaseQuestPanelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_NextPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTPHASE_OFFSET))(this);
		}

		::System::Boolean get_HaveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVENEXT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_ExtraQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRAQUEST_OFFSET))(this);
		}

		::System::UInt32 get_BeforeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_BEFOREID_OFFSET))(this);
		}

		::System::Void set_BeforeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_SET_BEFOREID_OFFSET))(this, value);
		}

		::System::Boolean get_HaveBefore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVEBEFORE_OFFSET))(this);
		}

		::System::Boolean get_ExtraLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRALOCKED_OFFSET))(this);
		}

		::System::Boolean get_NextLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_TotalQuestCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALQUESTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_FinishedQuestCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_FINISHEDQUESTCOUNT_OFFSET))(this);
		}

		::System::Single get_TotalProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsExtraAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRAAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsExtraClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRACLOSED_OFFSET))(this);
		}

		::System::Boolean get_IsAllFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISALLFINISH_OFFSET))(this);
		}

		::System::UInt32 GetReceivableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GETRECEIVABLECOUNT_OFFSET))(this);
		}
	};
}
