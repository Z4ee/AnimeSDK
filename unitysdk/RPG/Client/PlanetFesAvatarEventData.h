#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_98A08031F550F4C1_2;
namespace RPG::Client { class PlanetFesAvatarEventOptionData; }
namespace RPG::Client { class PlanetFesReward; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_CHOOSEEVENTOPTION_OFFSET UNITYSDK_OFFSET(0x9F841E0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_CONFIRMCHOOSE_OFFSET UNITYSDK_OFFSET(0x9F84230)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x9F84540)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GETOPTIONRESULTREWARDID_OFFSET UNITYSDK_OFFSET(0x9F84700)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GETSINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0x9F846C0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATAREVENTID_OFFSET UNITYSDK_OFFSET(0x9F84790)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARICON_OFFSET UNITYSDK_OFFSET(0x9F84890)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9F84870)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0x9F849E0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0x9F847B0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0x9F847D0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9F848B0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTOPTIONRESULTID_OFFSET UNITYSDK_OFFSET(0x9F847F0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTPIC_OFFSET UNITYSDK_OFFSET(0x9F84850)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_ISINGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0x9F84AB0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_OPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9F84830)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_REROLLITEMID_OFFSET UNITYSDK_OFFSET(0x9F848F0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_REROLLRATIO_OFFSET UNITYSDK_OFFSET(0x9F848D0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_SINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0x9F84810)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F83650)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_REROLLRESULT_OFFSET UNITYSDK_OFFSET(0x9F843C0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SETISINGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0x9F84190)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATAREVENTID_OFFSET UNITYSDK_OFFSET(0x9F847A0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARICON_OFFSET UNITYSDK_OFFSET(0x9F848A0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9F84880)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0x9F847C0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0x9F847E0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x9F848C0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTOPTIONRESULTID_OFFSET UNITYSDK_OFFSET(0x9F84800)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTPIC_OFFSET UNITYSDK_OFFSET(0x9F84860)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_ISINGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0x9F84AC0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_OPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9F84840)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_REROLLRATIO_OFFSET UNITYSDK_OFFSET(0x9F848E0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_SINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0x9F84820)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSEEVENTOPTION_OFFSET UNITYSDK_OFFSET(0x9F836C0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSERESULT_OFFSET UNITYSDK_OFFSET(0x9F83710)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCSINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0x9F837A0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9F84080)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F83560)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__DISPOSEDETAIL_OFFSET UNITYSDK_OFFSET(0x9F84000)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x9F83800)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F84AD0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9F84C70)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__DISPOSEDETAIL_OFFSET UNITYSDK_OFFSET(0x9F84BF0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x9F84B50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEventData_TypeDefinitionIndex = 54141;

	class PlanetFesAvatarEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::RPG::Client::PlanetFesReward* _SingleOptionReward_k__BackingField; // 0x68
		::System::String* _AvatarIcon_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>* _OptionDataList_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OptionResultRewardDict; // 0x80
		::System::String* _EventPic_k__BackingField; // 0x88
		::System::UInt32 _AvatarEventID_k__BackingField; // 0x90
		::System::Boolean _IsInGamePlayPage_k__BackingField; // 0x94
		::System::UInt32 _AvatarID_k__BackingField; // 0x98
		::System::UInt32 _EventOptionResultID_k__BackingField; // 0x9C
		::RPG::Client::TextID _Desc_k__BackingField; // 0xA0
		::System::UInt32 _ChooseEventOptionID_k__BackingField; // 0xB0
		::System::UInt32 _ClientPreChooseEventOptionID_k__BackingField; // 0xB4
		::System::UInt32 _ReRollRatio_k__BackingField; // 0xB8
		::System::UInt32 ReRollItemCost; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void SyncChooseEventOption(::System::UInt32 optionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSEEVENTOPTION_OFFSET))(this, optionID);
		}

		::System::Void SyncChooseResult(::System::UInt32 resultID, ::System::Boolean isFromReRoll, ::System::UInt32 rewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSERESULT_OFFSET))(this, resultID, isFromReRoll, rewardID);
		}

		::System::Void SyncSingleOptionReward(::RPG::Client::PlanetFesReward* reward)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCSINGLEOPTIONREWARD_OFFSET))(this, reward);
		}

		::System::Void _SyncDetail(::Class_1_98A08031F550F4C1_2* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__SYNCDETAIL_OFFSET))(this, eventInfo);
		}

		::System::Void _DisposeDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__DISPOSEDETAIL_OFFSET))(this);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Void SetIsInGamePlayPage(::System::Boolean isInGameplay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SETISINGAMEPLAYPAGE_OFFSET))(this, isInGameplay);
		}

		::System::Void ChooseEventOption(::System::UInt32 optionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_CHOOSEEVENTOPTION_OFFSET))(this, optionID);
		}

		::System::Void ConfirmChoose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_CONFIRMCHOOSE_OFFSET))(this);
		}

		::System::Void ReRollResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_REROLLRESULT_OFFSET))(this);
		}

		::System::Void ConfirmResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_CONFIRMRESULT_OFFSET))(this);
		}

		::RPG::Client::PlanetFesReward* GetSingleOptionReward()
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GETSINGLEOPTIONREWARD_OFFSET))(this);
		}

		::System::UInt32 GetOptionResultRewardID(::System::UInt32 resultID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GETOPTIONRESULTREWARDID_OFFSET))(this, resultID);
		}

		::System::UInt32 get_AvatarEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATAREVENTID_OFFSET))(this);
		}

		::System::Void set_AvatarEventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATAREVENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_ChooseEventOptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CHOOSEEVENTOPTIONID_OFFSET))(this);
		}

		::System::Void set_ChooseEventOptionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CHOOSEEVENTOPTIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_ClientPreChooseEventOptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET))(this);
		}

		::System::Void set_ClientPreChooseEventOptionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_EventOptionResultID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTOPTIONRESULTID_OFFSET))(this);
		}

		::System::Void set_EventOptionResultID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTOPTIONRESULTID_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesReward* get_SingleOptionReward()
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_SINGLEOPTIONREWARD_OFFSET))(this);
		}

		::System::Void set_SingleOptionReward(::RPG::Client::PlanetFesReward* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_SINGLEOPTIONREWARD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>* get_OptionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_OPTIONDATALIST_OFFSET))(this);
		}

		::System::Void set_OptionDataList(::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_OPTIONDATALIST_OFFSET))(this, value);
		}

		::System::String* get_EventPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTPIC_OFFSET))(this);
		}

		::System::Void set_EventPic(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTPIC_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARID_OFFSET))(this, value);
		}

		::System::String* get_AvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARICON_OFFSET))(this);
		}

		::System::Void set_AvatarIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARICON_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_DESC_OFFSET))(this, value);
		}

		::System::UInt32 get_ReRollRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_REROLLRATIO_OFFSET))(this);
		}

		::System::Void set_ReRollRatio(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_REROLLRATIO_OFFSET))(this, value);
		}

		::System::UInt32 get_ReRollItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_REROLLITEMID_OFFSET))(this);
		}

		::System::Boolean get_CanReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CANREROLL_OFFSET))(this);
		}

		::System::Boolean get_IsInGamePlayPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_ISINGAMEPLAYPAGE_OFFSET))(this);
		}

		::System::Void set_IsInGamePlayPage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_ISINGAMEPLAYPAGE_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SyncDetail(::Class_1_98A08031F550F4C1_2* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__DisposeDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__DISPOSEDETAIL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET))(this);
		}
	};
}
