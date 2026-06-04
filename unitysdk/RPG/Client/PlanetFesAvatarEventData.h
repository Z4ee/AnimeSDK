#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_9BD68750D8B87DAA;
namespace RPG::Client { class PlanetFesAvatarEventOptionData; }
namespace RPG::Client { class PlanetFesReward; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_CHOOSEEVENTOPTION_OFFSET UNITYSDK_OFFSET(0xC3FD660)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_CONFIRMCHOOSE_OFFSET UNITYSDK_OFFSET(0xC3FD6B0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0xC3FD9C0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GETOPTIONRESULTREWARDID_OFFSET UNITYSDK_OFFSET(0xC3FDB80)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GETSINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0xC3FDB40)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATAREVENTID_OFFSET UNITYSDK_OFFSET(0xC3FDC40)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARICON_OFFSET UNITYSDK_OFFSET(0xC3FDD40)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC3FDD20)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0xC3FDE90)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0xC3FDC60)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0xC3FDC80)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC3FDD60)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTOPTIONRESULTID_OFFSET UNITYSDK_OFFSET(0xC3FDCA0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTPIC_OFFSET UNITYSDK_OFFSET(0xC3FDD00)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_ISINGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xC3FDF60)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_OPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC3FDCE0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_REROLLITEMID_OFFSET UNITYSDK_OFFSET(0xC3FDDA0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_REROLLRATIO_OFFSET UNITYSDK_OFFSET(0xC3FDD80)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_SINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0xC3FDCC0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3FCA30)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_REROLLRESULT_OFFSET UNITYSDK_OFFSET(0xC3FD840)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SETISINGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xC3FD610)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATAREVENTID_OFFSET UNITYSDK_OFFSET(0xC3FDC50)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARICON_OFFSET UNITYSDK_OFFSET(0xC3FDD50)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC3FDD30)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0xC3FDC70)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET UNITYSDK_OFFSET(0xC3FDC90)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC3FDD70)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTOPTIONRESULTID_OFFSET UNITYSDK_OFFSET(0xC3FDCB0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTPIC_OFFSET UNITYSDK_OFFSET(0xC3FDD10)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_ISINGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xC3FDF70)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_OPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC3FDCF0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_REROLLRATIO_OFFSET UNITYSDK_OFFSET(0xC3FDD90)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_SINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0xC3FDCD0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSEEVENTOPTION_OFFSET UNITYSDK_OFFSET(0xC3FCAA0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSERESULT_OFFSET UNITYSDK_OFFSET(0xC3FCAF0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCSINGLEOPTIONREWARD_OFFSET UNITYSDK_OFFSET(0xC3FCB80)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xC3FD4E0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3FC960)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__DISPOSEDETAIL_OFFSET UNITYSDK_OFFSET(0xC3FD440)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xC3FCBE0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3FDF80)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xC3FE0A0)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__DISPOSEDETAIL_OFFSET UNITYSDK_OFFSET(0xC3FE040)
#define RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xC3FDFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEventData_TypeDefinitionIndex = 62228;

	class PlanetFesAvatarEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::System::String* _AvatarIcon_k__BackingField; // 0x68
		::RPG::Client::PlanetFesReward* _SingleOptionReward_k__BackingField; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OptionResultRewardDict; // 0x78
		::System::String* _EventPic_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>* _OptionDataList_k__BackingField; // 0x88
		::System::UInt32 _AvatarID_k__BackingField; // 0x90
		::System::UInt32 _ReRollRatio_k__BackingField; // 0x94
		::System::Boolean _IsInGamePlayPage_k__BackingField; // 0x98
		::System::UInt32 _AvatarEventID_k__BackingField; // 0x9C
		::RPG::Client::TextID _Desc_k__BackingField; // 0xA0
		::System::UInt32 ReRollItemCost; // 0xB0
		::System::UInt32 _ChooseEventOptionID_k__BackingField; // 0xB4
		::System::UInt32 _ClientPreChooseEventOptionID_k__BackingField; // 0xB8
		::System::UInt32 _EventOptionResultID_k__BackingField; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void SyncChooseEventOption(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSEEVENTOPTION_OFFSET))(this, a1);
		}

		::System::Void SyncChooseResult(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCCHOOSERESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncSingleOptionReward(::RPG::Client::PlanetFesReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SYNCSINGLEOPTIONREWARD_OFFSET))(this, a1);
		}

		::System::Void _SyncDetail(::Class_1_9BD68750D8B87DAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BD68750D8B87DAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
		}

		::System::Void _DisposeDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__DISPOSEDETAIL_OFFSET))(this);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Void SetIsInGamePlayPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SETISINGAMEPLAYPAGE_OFFSET))(this, a1);
		}

		::System::Void ChooseEventOption(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_CHOOSEEVENTOPTION_OFFSET))(this, a1);
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

		::System::UInt32 GetOptionResultRewardID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GETOPTIONRESULTREWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATAREVENTID_OFFSET))(this);
		}

		::System::Void set_AvatarEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATAREVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChooseEventOptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CHOOSEEVENTOPTIONID_OFFSET))(this);
		}

		::System::Void set_ChooseEventOptionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CHOOSEEVENTOPTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ClientPreChooseEventOptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET))(this);
		}

		::System::Void set_ClientPreChooseEventOptionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_CLIENTPRECHOOSEEVENTOPTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EventOptionResultID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTOPTIONRESULTID_OFFSET))(this);
		}

		::System::Void set_EventOptionResultID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTOPTIONRESULTID_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesReward* get_SingleOptionReward()
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_SINGLEOPTIONREWARD_OFFSET))(this);
		}

		::System::Void set_SingleOptionReward(::RPG::Client::PlanetFesReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_SINGLEOPTIONREWARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>* get_OptionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_OPTIONDATALIST_OFFSET))(this);
		}

		::System::Void set_OptionDataList(::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarEventOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_OPTIONDATALIST_OFFSET))(this, a1);
		}

		::System::String* get_EventPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_EVENTPIC_OFFSET))(this);
		}

		::System::Void set_EventPic(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_EVENTPIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::String* get_AvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_AVATARICON_OFFSET))(this);
		}

		::System::Void set_AvatarIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_AVATARICON_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_DESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReRollRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_GET_REROLLRATIO_OFFSET))(this);
		}

		::System::Void set_ReRollRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_REROLLRATIO_OFFSET))(this, a1);
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

		::System::Void set_IsInGamePlayPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA_SET_ISINGAMEPLAYPAGE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SyncDetail(::Class_1_9BD68750D8B87DAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BD68750D8B87DAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET))(this, a1);
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
