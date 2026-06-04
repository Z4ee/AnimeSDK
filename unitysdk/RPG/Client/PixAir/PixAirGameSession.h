#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CDB6C405C8FD68.h"
#include "unitysdk/RPG/Client/PixAir/PixAirContainerType.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGameSession_PixAirBattleReportInfo.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGameSession_PixAirEquipmentReportInfo.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGameSession_PixAirPlaneReportInfo.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGameSession_PixAirStageReportInfo.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGameSession___c__DisplayClass111_0.h"
#include "unitysdk/RPG/GameCore/PixAirBasicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1209;
class Class_1_21DCD4640D389503_33;
class Class_1_22B4C7CF09D1BAC1_5;
class Class_1_3F6BDFD89C2271F6;
class Class_1_4AF9832A6EE2A67F_2;
class Class_1_5CFFA593A88CE0E6;
class Class_1_7291C38274750BA2_5;
class Class_1_7FF19F6206AF6DD7_37;
class Class_1_D17272E82AE804C2_681;
class Class_1_D1E0AD3915BCCF29_91;
class Class_1_D40936EF3BF54118_64;
namespace RPG::Client::PixAir { class PixAirAreaInstance; }
namespace RPG::Client::PixAir { class PixAirBag; }
namespace RPG::Client::PixAir { class PixAirCurrencyData; }
namespace RPG::Client::PixAir { class PixAirEquipBar; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace RPG::Client::PixAir { class PixAirLockActionChecker; }
namespace RPG::Client::PixAir { class PixAirModule; }
namespace RPG::Client::PixAir { class PixAirNodeInstance; }
namespace RPG::Client::PixAir { class PixAirPlaneInstance; }
namespace RPG::Client::PixAir { class PixAirRecommendData; }
namespace RPG::Client::PixAir { class PixAirSellAndRefreshLocker; }
namespace RPG::Client::PixAir { class PixAirStageInstance; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDBAGEQUIPMENTINFOLIST_OFFSET UNITYSDK_OFFSET(0xC3B44E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDBATTLEREPORTINFO_OFFSET UNITYSDK_OFFSET(0xC3B4180)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDEQUIPPEDEQUIPMENTINFOLIST_OFFSET UNITYSDK_OFFSET(0xC3B42E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDPLANEREPORTINFO_OFFSET UNITYSDK_OFFSET(0xC3CE710)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDSTAGEREPORTINFO_OFFSET UNITYSDK_OFFSET(0xC3CE7F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CHECKBASICCOSTENOUGH_OFFSET UNITYSDK_OFFSET(0xC3CB330)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CHECKEQUIPCANLEVELUP_OFFSET UNITYSDK_OFFSET(0xC3D1D10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CHECKPENDINGACTIONCANLEVELUP_OFFSET UNITYSDK_OFFSET(0xC3D1EC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CREATE_OFFSET UNITYSDK_OFFSET(0xC3CF5B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_DEQUEUEACTION_OFFSET UNITYSDK_OFFSET(0xC3B5690)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3D3750)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_ENQUEUEACTION_OFFSET UNITYSDK_OFFSET(0xC3CEF00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GENERATEBROADCASTTEXT_OFFSET UNITYSDK_OFFSET(0xC3D2CB0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GETEQUIPINSTANCEBYUID_OFFSET UNITYSDK_OFFSET(0xC3D08F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GETSLOTTYPEBYSERVERINDEX_OFFSET UNITYSDK_OFFSET(0xC3D1CB0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_ALIVEPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CED40)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_AREACOUNT_OFFSET UNITYSDK_OFFSET(0xC3CECA0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_BAG_OFFSET UNITYSDK_OFFSET(0xC3CEE80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0xC3CEEA0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC3CEEC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xC3CF060)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTAREAINDEX_OFFSET UNITYSDK_OFFSET(0xC3CEC40)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0xC3CEC20)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTNODE_OFFSET UNITYSDK_OFFSET(0xC3CE980)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0xC3CEC00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_EQUIPBAR_OFFSET UNITYSDK_OFFSET(0xC3CEE60)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_LASTALIVEPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CED00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_LIFE_OFFSET UNITYSDK_OFFSET(0xC3CF040)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_LOCKACTIONCHECKER_OFFSET UNITYSDK_OFFSET(0xC3CF0C0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_MAXLIFE_OFFSET UNITYSDK_OFFSET(0xC3B3270)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_OLDALIVEPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CED20)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_PENDINGACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0xC3CEEE0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_PENDINGACTION_OFFSET UNITYSDK_OFFSET(0xC3B5600)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_PLANE_OFFSET UNITYSDK_OFFSET(0xC3CF080)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_SEENEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xC3CF0E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_SELLANDREFRESHLOCKER_OFFSET UNITYSDK_OFFSET(0xC3CF0A0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_TOTALPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CED60)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_TRANSNO_OFFSET UNITYSDK_OFFSET(0xC3CEBE0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_MARKALLBAGEQUIPSEEN_OFFSET UNITYSDK_OFFSET(0xC3CF150)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_MARKEQUIPSEEN_OFFSET UNITYSDK_OFFSET(0xC3CF0F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_ALIVEPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CED50)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_BAG_OFFSET UNITYSDK_OFFSET(0xC3CEE90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0xC3CEEB0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC3CEED0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xC3CF070)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0xC3CEC30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0xC3CEC10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_EQUIPBAR_OFFSET UNITYSDK_OFFSET(0xC3CEE70)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_LASTALIVEPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CED10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_LIFE_OFFSET UNITYSDK_OFFSET(0xC3CF050)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_LOCKACTIONCHECKER_OFFSET UNITYSDK_OFFSET(0xC3CF0D0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_OLDALIVEPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CED30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_PENDINGACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0xC3CEEF0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_PLANE_OFFSET UNITYSDK_OFFSET(0xC3CF090)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_SELLANDREFRESHLOCKER_OFFSET UNITYSDK_OFFSET(0xC3CF0B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_TRANSNO_OFFSET UNITYSDK_OFFSET(0xC3CEBF0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCALIVEPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC3CFD90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCBASICCHANGE_OFFSET UNITYSDK_OFFSET(0xC3D25F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCENTERNEWNODE_OFFSET UNITYSDK_OFFSET(0xC3D2540)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCEQUIPCHANGE_OFFSET UNITYSDK_OFFSET(0xC3D0560)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCEQUIPREMOVE_OFFSET UNITYSDK_OFFSET(0xC3D1A50)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCSWAPEQUIP_OFFSET UNITYSDK_OFFSET(0xC3D0E00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNC_OFFSET UNITYSDK_OFFSET(0xC3CF880)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__ADDNEWEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xC3D0970)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__BUILDEQUIPMENTREPORTINFO_OFFSET UNITYSDK_OFFSET(0xC3CE9E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CANLEVELUPFROMSHOPACTION_OFFSET UNITYSDK_OFFSET(0xC3D2150)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CHECKBASICINFO_OFFSET UNITYSDK_OFFSET(0xC3D2340)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CHECKPENDINGACTIONCANLEVELUP_G__MATCHLEVELUPSOURCE_111_0_OFFSET UNITYSDK_OFFSET(0xC3D2140)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CREATEEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xC3D24E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CF730)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__GETMODULE_OFFSET UNITYSDK_OFFSET(0xC3D22B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__INITBROADCASTCANDIDATES_OFFSET UNITYSDK_OFFSET(0xC3CFA40)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__INITSEENEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xC3CF3F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__LOGALLSLOTINDICES_OFFSET UNITYSDK_OFFSET(0xC3D15B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__MARKALLEQUIPBAREQUIPSEEN_OFFSET UNITYSDK_OFFSET(0xC3CF440)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__MARKAUTOEQUIPPEDASSEEN_OFFSET UNITYSDK_OFFSET(0xC3D0C90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__REPLACESLOTWITHEMPTYBYSERVERPOSITION_OFFSET UNITYSDK_OFFSET(0xC3D1480)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__REPLACESLOTWITHEQUIPBYSERVERPOSITION_OFFSET UNITYSDK_OFFSET(0xC3D1510)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCAREA_OFFSET UNITYSDK_OFFSET(0xC3CFFC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCBASICINFO_OFFSET UNITYSDK_OFFSET(0xC3D28F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCBASIC_OFFSET UNITYSDK_OFFSET(0xC3D0130)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCCURRENCY_OFFSET UNITYSDK_OFFSET(0xC3D2A50)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCEQUIPINFO_OFFSET UNITYSDK_OFFSET(0xC3D0A80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCEQUIPMGR_OFFSET UNITYSDK_OFFSET(0xC3D03E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCINCOME_OFFSET UNITYSDK_OFFSET(0xC3D2B90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCNODE_OFFSET UNITYSDK_OFFSET(0xC3D00D0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xC3D04C0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC3CFD10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCSTAGE_OFFSET UNITYSDK_OFFSET(0xC3CFDF0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSession_TypeDefinitionIndex = 73672;

	class PixAirGameSession : public ::System::Object
	{
	public:
		// static const ::System::Int32 BagServerIndexMin = 0x1; // 0x0
		// static const ::System::Int32 BagServerIndexMax = 0xA; // 0x0
		// static const ::System::Int32 EquipBarServerIndexMin = 0xB; // 0x0
		// static const ::System::Int32 EquipBarServerIndexMax = 0x14; // 0x0
		::Class_1_3F6BDFD89C2271F6* _previewService; // 0x10
		::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_5*>* _BroadcastDeadCandidates; // 0x18
		::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1209*>* _PendingActionQueue_k__BackingField; // 0x20
		::RPG::Client::PixAir::PixAirLockActionChecker* _LockActionChecker_k__BackingField; // 0x28
		::RPG::Client::PixAir::PixAirPlaneInstance* _Plane_k__BackingField; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SeenEquipIDs_k__BackingField; // 0x38
		::RPG::Client::PixAir::PixAirBag* _Bag_k__BackingField; // 0x40
		::RPG::Client::PixAir::PixAirStageInstance* _CurrentStage_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_5*>* _BroadcastCandidates; // 0x50
		::RPG::Client::PixAir::PixAirCurrencyData* _Currency_k__BackingField; // 0x58
		::RPG::Client::PixAir::PixAirAreaInstance* _CurrentArea_k__BackingField; // 0x60
		::RPG::Client::PixAir::PixAirRecommendData* _CurRecommendData_k__BackingField; // 0x68
		::System::String* _TransNo_k__BackingField; // 0x70
		::System::Random* _BroadcastRandom; // 0x78
		::RPG::Client::PixAir::PixAirEquipBar* _EquipBar_k__BackingField; // 0x80
		::RPG::Client::PixAir::PixAirSellAndRefreshLocker* _SellAndRefreshLocker_k__BackingField; // 0x88
		::System::UInt32 _CoreEquipID_k__BackingField; // 0x90
		::System::UInt32 _AlivePlayerCount_k__BackingField; // 0x94
		::System::Int32 _Life_k__BackingField; // 0x98
		::System::UInt32 _LastAlivePlayerCount_k__BackingField; // 0x9C
		::System::UInt32 _OldAlivePlayerCount_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CTOR_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirGameSession_PixAirPlaneReportInfo BuildPlaneReportInfo()
		{
			return ((::RPG::Client::PixAir::PixAirGameSession_PixAirPlaneReportInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDPLANEREPORTINFO_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirGameSession_PixAirStageReportInfo BuildStageReportInfo(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirGameSession_PixAirStageReportInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDSTAGEREPORTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirGameSession_PixAirBattleReportInfo BuildBattleReportInfo(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirGameSession_PixAirBattleReportInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDBATTLEREPORTINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameSession_PixAirEquipmentReportInfo>* BuildBagEquipmentInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameSession_PixAirEquipmentReportInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDBAGEQUIPMENTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameSession_PixAirEquipmentReportInfo>* BuildEquippedEquipmentInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameSession_PixAirEquipmentReportInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_BUILDEQUIPPEDEQUIPMENTINFOLIST_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirGameSession_PixAirEquipmentReportInfo _BuildEquipmentReportInfo(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::RPG::Client::PixAir::PixAirGameSession_PixAirEquipmentReportInfo(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__BUILDEQUIPMENTREPORTINFO_OFFSET))(this, a1);
		}

		::System::String* get_TransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_TRANSNO_OFFSET))(this);
		}

		::System::Void set_TransNo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_TRANSNO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirStageInstance* get_CurrentStage()
		{
			return ((::RPG::Client::PixAir::PixAirStageInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrentStage(::RPG::Client::PixAir::PixAirStageInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRENTSTAGE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirAreaInstance* get_CurrentArea()
		{
			return ((::RPG::Client::PixAir::PixAirAreaInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTAREA_OFFSET))(this);
		}

		::System::Void set_CurrentArea(::RPG::Client::PixAir::PixAirAreaInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirAreaInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRENTAREA_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentAreaIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTAREAINDEX_OFFSET))(this);
		}

		::System::Int32 get_AreaCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_AREACOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LastAlivePlayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_LASTALIVEPLAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_LastAlivePlayerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_LASTALIVEPLAYERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OldAlivePlayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_OLDALIVEPLAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_OldAlivePlayerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_OLDALIVEPLAYERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AlivePlayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_ALIVEPLAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_AlivePlayerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_ALIVEPLAYERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalPlayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_TOTALPLAYERCOUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeInstance* get_CurrentNode()
		{
			return ((::RPG::Client::PixAir::PixAirNodeInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENTNODE_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipBar* get_EquipBar()
		{
			return ((::RPG::Client::PixAir::PixAirEquipBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_EQUIPBAR_OFFSET))(this);
		}

		::System::Void set_EquipBar(::RPG::Client::PixAir::PixAirEquipBar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_EQUIPBAR_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirBag* get_Bag()
		{
			return ((::RPG::Client::PixAir::PixAirBag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_BAG_OFFSET))(this);
		}

		::System::Void set_Bag(::RPG::Client::PixAir::PixAirBag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirBag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_BAG_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoreEquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_COREEQUIPID_OFFSET))(this);
		}

		::System::Void set_CoreEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_COREEQUIPID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirRecommendData* get_CurRecommendData()
		{
			return ((::RPG::Client::PixAir::PixAirRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRECOMMENDDATA_OFFSET))(this);
		}

		::System::Void set_CurRecommendData(::RPG::Client::PixAir::PixAirRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRECOMMENDDATA_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1209* get_PendingAction()
		{
			return ((::Class_0_16E4307DCC419505_1209*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_PENDINGACTION_OFFSET))(this);
		}

		::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1209*>* get_PendingActionQueue()
		{
			return ((::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1209*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_PENDINGACTIONQUEUE_OFFSET))(this);
		}

		::System::Void set_PendingActionQueue(::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1209*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1209*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_PENDINGACTIONQUEUE_OFFSET))(this, a1);
		}

		::System::Void EnqueueAction(::Class_0_16E4307DCC419505_1209* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1209*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_ENQUEUEACTION_OFFSET))(this, a1);
		}

		::System::Void DequeueAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_DEQUEUEACTION_OFFSET))(this);
		}

		::System::Int32 get_Life()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_LIFE_OFFSET))(this);
		}

		::System::Void set_Life(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_LIFE_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_MAXLIFE_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirCurrencyData* get_Currency()
		{
			return ((::RPG::Client::PixAir::PixAirCurrencyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_CURRENCY_OFFSET))(this);
		}

		::System::Void set_Currency(::RPG::Client::PixAir::PixAirCurrencyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirCurrencyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_CURRENCY_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneInstance* get_Plane()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_PLANE_OFFSET))(this);
		}

		::System::Void set_Plane(::RPG::Client::PixAir::PixAirPlaneInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_PLANE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirSellAndRefreshLocker* get_SellAndRefreshLocker()
		{
			return ((::RPG::Client::PixAir::PixAirSellAndRefreshLocker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_SELLANDREFRESHLOCKER_OFFSET))(this);
		}

		::System::Void set_SellAndRefreshLocker(::RPG::Client::PixAir::PixAirSellAndRefreshLocker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSellAndRefreshLocker*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_SELLANDREFRESHLOCKER_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirLockActionChecker* get_LockActionChecker()
		{
			return ((::RPG::Client::PixAir::PixAirLockActionChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_LOCKACTIONCHECKER_OFFSET))(this);
		}

		::System::Void set_LockActionChecker(::RPG::Client::PixAir::PixAirLockActionChecker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirLockActionChecker*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SET_LOCKACTIONCHECKER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_SeenEquipIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GET_SEENEQUIPIDS_OFFSET))(this);
		}

		::System::Void MarkEquipSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_MARKEQUIPSEEN_OFFSET))(this, a1);
		}

		::System::Void MarkAllBagEquipSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_MARKALLBAGEQUIPSEEN_OFFSET))(this);
		}

		::System::Void _InitSeenEquipIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__INITSEENEQUIPIDS_OFFSET))(this);
		}

		::System::Void _MarkAllEquipBarEquipSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__MARKALLEQUIPBAREQUIPSEEN_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirGameSession* Create(::Class_1_21DCD4640D389503_33* a1)
		{
			return ((::RPG::Client::PixAir::PixAirGameSession*(*)(::Class_1_21DCD4640D389503_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_21DCD4640D389503_33* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncEquipChange(::Class_1_D40936EF3BF54118_64* a1, ::Enum_3_63CDB6C405C8FD68 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_64*, ::Enum_3_63CDB6C405C8FD68))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCEQUIPCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncSwapEquip(::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_91*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_91*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCSWAPEQUIP_OFFSET))(this, a1);
		}

		::System::Void _ReplaceSlotWithEmptyByServerPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__REPLACESLOTWITHEMPTYBYSERVERPOSITION_OFFSET))(this, a1);
		}

		::System::Void _ReplaceSlotWithEquipByServerPosition(::System::Int32 a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__REPLACESLOTWITHEQUIPBYSERVERPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void _MarkAutoEquippedAsSeen(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__MARKAUTOEQUIPPEDASSEEN_OFFSET))(this, a1);
		}

		::System::Void SyncEquipRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCEQUIPREMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* GetEquipInstanceByUid(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GETEQUIPINSTANCEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirContainerType GetSlotTypeByServerIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirContainerType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GETSLOTTYPEBYSERVERINDEX_OFFSET))(this, a1);
		}

		::System::Boolean CheckEquipCanLevelUp(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CHECKEQUIPCANLEVELUP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CheckPendingActionCanLevelUp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CHECKPENDINGACTIONCANLEVELUP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CanLevelUpFromShopAction(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CANLEVELUPFROMSHOPACTION_OFFSET))(this, a1, a2);
		}

		::System::Void SyncAlivePlayerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCALIVEPLAYERCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean CheckBasicCostEnough(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirBasicType, ::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirBasicType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_CHECKBASICCOSTENOUGH_OFFSET))(this, a1);
		}

		::System::Void _SyncRecommendData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _SyncStage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCSTAGE_OFFSET))(this, a1);
		}

		::System::Void _SyncEquipInfo(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::Class_1_D17272E82AE804C2_681* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*, ::Class_1_D17272E82AE804C2_681*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCEQUIPINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _LogAllSlotIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__LOGALLSLOTINDICES_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* _AddNewEquipInstance(::Class_1_D17272E82AE804C2_681* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::Class_1_D17272E82AE804C2_681*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__ADDNEWEQUIPINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _SyncArea(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCAREA_OFFSET))(this, a1);
		}

		::System::Void _SyncNode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCNODE_OFFSET))(this, a1);
		}

		::System::Void SyncEnterNewNode(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCENTERNEWNODE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncBasicChange(::Class_1_4AF9832A6EE2A67F_2* a1, ::Enum_3_63CDB6C405C8FD68 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_2*, ::Enum_3_63CDB6C405C8FD68))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_SYNCBASICCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncBasic(::Class_1_7FF19F6206AF6DD7_37* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCBASIC_OFFSET))(this, a1);
		}

		::System::Void _SyncBasicInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCBASICINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckBasicInfo(::RPG::GameCore::PixAirBasicType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PixAirBasicType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CHECKBASICINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncEquipMgr(::Class_1_22B4C7CF09D1BAC1_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCEQUIPMGR_OFFSET))(this, a1);
		}

		::System::Void _SyncPendingAction(::Class_1_5CFFA593A88CE0E6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFFA593A88CE0E6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCPENDINGACTION_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* _CreateEquipInstance(::Class_1_D17272E82AE804C2_681* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::Class_1_D17272E82AE804C2_681*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CREATEEQUIPINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _SyncCurrency(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCCURRENCY_OFFSET))(this, a1);
		}

		::System::Void _SyncIncome(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__SYNCINCOME_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirModule* _GetModule()
		{
			return ((::RPG::Client::PixAir::PixAirModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__GETMODULE_OFFSET))(this);
		}

		::System::Void _InitBroadcastCandidates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__INITBROADCASTCANDIDATES_OFFSET))(this);
		}

		::System::String* GenerateBroadcastText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_GENERATEBROADCASTTEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean _CheckPendingActionCanLevelUp_g__MatchLevelUpSource_111_0(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::PixAir::PixAirGameSession___c__DisplayClass111_0& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::PixAir::PixAirGameSession___c__DisplayClass111_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION__CHECKPENDINGACTIONCANLEVELUP_G__MATCHLEVELUPSOURCE_111_0_OFFSET))(a1, a2, a3);
		}
	};
}
