#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0DD90E5A9403AEBE;
class Class_1_3B0F034547F10ACD;
class Class_1_3ED5A82F1CC73B98;
class Class_1_45BB92167AED63A0_98;
class Class_1_70D2E0F3216AAE0C_1;
class Class_1_7F753D12928E830D;
class Class_1_CCF20DC2AAC0169A;
class Class_1_D17272E82AE804C2_1007;
class Class_1_D17272E82AE804C2_49;
class Class_1_F5F52138EB5675D3;
namespace RPG::Client { class CakeCatchArrangeContext; }
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class CakeCatchCatGodData; }
namespace RPG::Client { class CakeCatchDIYHistory; }
namespace RPG::Client { class CakeCatchPerformanceData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHMODULE_CANSEARCHCAKESLOT_OFFSET UNITYSDK_OFFSET(0xB472660)
#define RPG_CLIENT_CAKECATCHMODULE_DISPOSEARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xB46CC20)
#define RPG_CLIENT_CAKECATCHMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB46E2B0)
#define RPG_CLIENT_CAKECATCHMODULE_FAKEALLCATPOINTS_OFFSET UNITYSDK_OFFSET(0xB472160)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLCAKEDATA_OFFSET UNITYSDK_OFFSET(0xB472F40)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLCAUGHTCAKECOUNT_OFFSET UNITYSDK_OFFSET(0xB474860)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0xB473180)
#define RPG_CLIENT_CAKECATCHMODULE_GETARRANGEDPOSITIONINFOLIST_OFFSET UNITYSDK_OFFSET(0xB46C2F0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAKECATCHCOUNTHISTORY_OFFSET UNITYSDK_OFFSET(0xB472B40)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAKECAUGHTCOUNTINROOM_OFFSET UNITYSDK_OFFSET(0xB4743C0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCATGODATLASDATA_OFFSET UNITYSDK_OFFSET(0xB474C50)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAUGHTCAKEDATA_OFFSET UNITYSDK_OFFSET(0xB473E90)
#define RPG_CLIENT_CAKECATCHMODULE_GETCURRENTROOMCAKECATCHPROGRESS_OFFSET UNITYSDK_OFFSET(0xB474980)
#define RPG_CLIENT_CAKECATCHMODULE_GETLOCALCAKEDATA_OFFSET UNITYSDK_OFFSET(0xB473CA0)
#define RPG_CLIENT_CAKECATCHMODULE_GETPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0xB473400)
#define RPG_CLIENT_CAKECATCHMODULE_GETRANDOMCAKEDATAS_OFFSET UNITYSDK_OFFSET(0xB475160)
#define RPG_CLIENT_CAKECATCHMODULE_GETRUNTIMEIDBYPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0xB46C950)
#define RPG_CLIENT_CAKECATCHMODULE_GETSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB4720D0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xB46D230)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGELAYOUTHISTORY_OFFSET UNITYSDK_OFFSET(0xB46D220)
#define RPG_CLIENT_CAKECATCHMODULE_GET_BOXVALIDTIMESTRING_OFFSET UNITYSDK_OFFSET(0xB475720)
#define RPG_CLIENT_CAKECATCHMODULE_GET_DIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB4756F0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISARRANGING_OFFSET UNITYSDK_OFFSET(0xB46D210)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xB4756D0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xB4756E0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_PENDINGCAKEID_OFFSET UNITYSDK_OFFSET(0xB475710)
#define RPG_CLIENT_CAKECATCHMODULE_GET_WEEKLYSEARCHCOUNT_OFFSET UNITYSDK_OFFSET(0xB475700)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYCAKESTORYNEW_OFFSET UNITYSDK_OFFSET(0xB473AB0)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCECANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB473490)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCENEW_OFFSET UNITYSDK_OFFSET(0xB4737B0)
#define RPG_CLIENT_CAKECATCHMODULE_HASATLASHUDREDDOT_OFFSET UNITYSDK_OFFSET(0xB473C30)
#define RPG_CLIENT_CAKECATCHMODULE_INITARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xB46CB90)
#define RPG_CLIENT_CAKECATCHMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB46D250)
#define RPG_CLIENT_CAKECATCHMODULE_INTERRUPALLDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB475630)
#define RPG_CLIENT_CAKECATCHMODULE_ISALLPOSSIBLECAKECAUGHT_OFFSET UNITYSDK_OFFSET(0xB4728F0)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHTINROOM_OFFSET UNITYSDK_OFFSET(0xB474300)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHT_OFFSET UNITYSDK_OFFSET(0xB474640)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKELOCALAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB4746D0)
#define RPG_CLIENT_CAKECATCHMODULE_ONPLAYERINDIALOGUERANGECHANGED_OFFSET UNITYSDK_OFFSET(0xB475450)
#define RPG_CLIENT_CAKECATCHMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB46E260)
#define RPG_CLIENT_CAKECATCHMODULE_OPENCAKEBOXRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xB4740D0)
#define RPG_CLIENT_CAKECATCHMODULE_PLAYSCENERANDOMDIALOGUELOOP_OFFSET UNITYSDK_OFFSET(0xB475580)
#define RPG_CLIENT_CAKECATCHMODULE_REGISTERWAITPERFORMANCEBACKTOADVENTURE_OFFSET UNITYSDK_OFFSET(0xB474D00)
#define RPG_CLIENT_CAKECATCHMODULE_SETISPLAYERINDIALOGUERANGE_OFFSET UNITYSDK_OFFSET(0xB475680)
#define RPG_CLIENT_CAKECATCHMODULE_SET_ARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xB46D240)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCARRANGECONTEXTWITHSCENE_OFFSET UNITYSDK_OFFSET(0xB46B560)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCORIGINALDATAWITHSCENE_OFFSET UNITYSDK_OFFSET(0xB46B6F0)
#define RPG_CLIENT_CAKECATCHMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB471EA0)
#define RPG_CLIENT_CAKECATCHMODULE_TRYOPENCAKEBOX_OFFSET UNITYSDK_OFFSET(0xB4723A0)
#define RPG_CLIENT_CAKECATCHMODULE_TRYSEARCHSLOT_OFFSET UNITYSDK_OFFSET(0xB472CD0)
#define RPG_CLIENT_CAKECATCHMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB46E190)
#define RPG_CLIENT_CAKECATCHMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB46DD10)
#define RPG_CLIENT_CAKECATCHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4757E0)
#define RPG_CLIENT_CAKECATCHMODULE__DATAREFRESHREQ_OFFSET UNITYSDK_OFFSET(0xB471DC0)
#define RPG_CLIENT_CAKECATCHMODULE__DISPOSECAKEDIALOGUEMANAGER_OFFSET UNITYSDK_OFFSET(0xB46E340)
#define RPG_CLIENT_CAKECATCHMODULE__ENSURECAKEDIALOGUEMANAGER_OFFSET UNITYSDK_OFFSET(0xB474DA0)
#define RPG_CLIENT_CAKECATCHMODULE__GETARRANGEAREAINTERACTPROP_OFFSET UNITYSDK_OFFSET(0xB46D110)
#define RPG_CLIENT_CAKECATCHMODULE__GETWEEKLYSEARCHCOUNT_OFFSET UNITYSDK_OFFSET(0xB472720)
#define RPG_CLIENT_CAKECATCHMODULE__INIT_B__22_0_OFFSET UNITYSDK_OFFSET(0xB475A50)
#define RPG_CLIENT_CAKECATCHMODULE__ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xB474BA0)
#define RPG_CLIENT_CAKECATCHMODULE__ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xB4750B0)
#define RPG_CLIENT_CAKECATCHMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB471D40)
#define RPG_CLIENT_CAKECATCHMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0xB471B80)
#define RPG_CLIENT_CAKECATCHMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB46FF20)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB471AF0)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDIYSCRSP_OFFSET UNITYSDK_OFFSET(0xB46CC80)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB46E3A0)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHOPENBOXSCRSP_OFFSET UNITYSDK_OFFSET(0xB470B90)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHSEARCHSCRSP_OFFSET UNITYSDK_OFFSET(0xB4713B0)
#define RPG_CLIENT_CAKECATCHMODULE__OPENCAKEBOXRESULTPAGE_B__51_0_OFFSET UNITYSDK_OFFSET(0xB475A60)
#define RPG_CLIENT_CAKECATCHMODULE__PREPAREPERFORMANCES_OFFSET UNITYSDK_OFFSET(0xB46DA90)
#define RPG_CLIENT_CAKECATCHMODULE__PREPARESLOTS_OFFSET UNITYSDK_OFFSET(0xB46D390)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGEAREAINTERACTPROP_OFFSET UNITYSDK_OFFSET(0xB46CEF0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGELAYOUTSTATUS_OFFSET UNITYSDK_OFFSET(0xB46CE40)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHBOXVALIDTIME_OFFSET UNITYSDK_OFFSET(0xB46F4B0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHCOUNTHISTORY_OFFSET UNITYSDK_OFFSET(0xB46EA00)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHRECORDHISTORY_OFFSET UNITYSDK_OFFSET(0xB46ED20)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHTEXTJOIN_OFFSET UNITYSDK_OFFSET(0xB474FD0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKESTATUS_OFFSET UNITYSDK_OFFSET(0xB46F680)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCATGODSTATE_OFFSET UNITYSDK_OFFSET(0xB470940)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCURRENTCATGODSATE_OFFSET UNITYSDK_OFFSET(0xB474E30)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHDIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB470AF0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALARRANGELAYOUTSTATUS_OFFSET UNITYSDK_OFFSET(0xB46CD80)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALBOXVALIDTIME_OFFSET UNITYSDK_OFFSET(0xB46FED0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCAKESTATUS_OFFSET UNITYSDK_OFFSET(0xB46FB20)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCATGODSTATE_OFFSET UNITYSDK_OFFSET(0xB474EA0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALDIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB470B40)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHUNLOCKEDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB46E660)
#define RPG_CLIENT_CAKECATCHMODULE__SYNCWITHSCENE_OFFSET UNITYSDK_OFFSET(0xB46B740)
#define RPG_CLIENT_CAKECATCHMODULE__TRYREFRESHCAKESTATUS_OFFSET UNITYSDK_OFFSET(0xB46F1B0)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB475D80)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB475BE0)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB475D20)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB475CC0)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB475C60)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule_TypeDefinitionIndex = 58914;

	class CakeCatchModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F5F52138EB5675D3*>* _CakeCatchWeekRecord; // 0x10
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>* _TryOpenCakeBoxPromise; // 0x18
		::RPG::Client::Promises::Promise_1<::System::UInt32>* _TrySearchSlotPromise; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0DD90E5A9403AEBE*>* _SlotInfos; // 0x28
		::RPG::Client::CakeCatchDIYHistory* _LocalArrangeLayoutHistory; // 0x30
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_49*>* _LocalCakeHideList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchPerformanceData*>* _PerformanceDatas; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* _OpenBoxRspCakeList; // 0x48
		::Class_1_3ED5A82F1CC73B98* _CakeDialogueManager; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CakeCatchCountHistory; // 0x58
		::RPG::Client::CakeCatchArrangeContext* _ArrangeContext_k__BackingField; // 0x60
		::RPG::Client::CakeCatchDIYHistory* _ArrangeLayoutHistory; // 0x68
		::System::UInt32 _LocalDIYLikeCount; // 0x70
		::System::UInt32 _PendingPerformanceID; // 0x74
		::System::Int32 _CountDownTimerID; // 0x78
		::System::Boolean _HasCurrentBoxValidTime; // 0x7C
		::System::UInt64 _CurrentBoxValidTime; // 0x80
		::System::UInt64 _LocalBoxValidTime; // 0x88
		::System::UInt32 _PendingCakeID; // 0x90
		::System::UInt32 _DIYLikeCount; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SyncArrangeContextWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCARRANGECONTEXTWITHSCENE_OFFSET))(this);
		}

		::System::Void SyncOriginalDataWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCORIGINALDATAWITHSCENE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>* GetArrangedPositionInfoList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETARRANGEDPOSITIONINFOLIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetRuntimeIDByPositionInfo(::Class_1_CCF20DC2AAC0169A* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETRUNTIMEIDBYPOSITIONINFO_OFFSET))(this, a1);
		}

		::System::Void InitArrangeContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INITARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void DisposeArrangeContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_DISPOSEARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void _OnTrainCakeCatchDiyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDIYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshArrangeLayoutStatus(::Class_1_7F753D12928E830D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F753D12928E830D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGELAYOUTSTATUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalArrangeLayoutStatus(::Class_1_7F753D12928E830D* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F753D12928E830D*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALARRANGELAYOUTSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__SYNCWITHSCENE_OFFSET))(this);
		}

		::System::Void _RefreshArrangeAreaInteractProp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGEAREAINTERACTPROP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetArrangeAreaInteractProp()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__GETARRANGEAREAINTERACTPROP_OFFSET))(this);
		}

		::System::Boolean get_IsArranging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISARRANGING_OFFSET))(this);
		}

		::RPG::Client::CakeCatchDIYHistory* get_ArrangeLayoutHistory()
		{
			return ((::RPG::Client::CakeCatchDIYHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGELAYOUTHISTORY_OFFSET))(this);
		}

		::RPG::Client::CakeCatchArrangeContext* get_ArrangeContext()
		{
			return ((::RPG::Client::CakeCatchArrangeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void set_ArrangeContext(::RPG::Client::CakeCatchArrangeContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchArrangeContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SET_ARRANGECONTEXT_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTrainCakeCatchGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayGameplayOperationScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchOpenBoxScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHOPENBOXSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchSearchScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHSEARCHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONENTERSCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::Class_1_0DD90E5A9403AEBE* GetSlotInfo(::System::UInt32 a1)
		{
			return ((::Class_1_0DD90E5A9403AEBE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETSLOTINFO_OFFSET))(this, a1);
		}

		::System::Void FakeAllCatPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_FAKEALLCATPOINTS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>* TryOpenCakeBox()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYOPENCAKEBOX_OFFSET))(this);
		}

		::System::Boolean CanSearchCakeSlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_CANSEARCHCAKESLOT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllPossibleCakeCaught()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISALLPOSSIBLECAKECAUGHT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::UInt32>* TrySearchSlot(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYSEARCHSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetAllCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLCAKEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchPerformanceData*>* GetAllPerformanceData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchPerformanceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLPERFORMANCEDATA_OFFSET))(this);
		}

		::RPG::Client::CakeCatchPerformanceData* GetPerformanceData(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchPerformanceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETPERFORMANCEDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyPerformanceCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCECANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean HasAnyPerformanceNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCENEW_OFFSET))(this);
		}

		::System::Boolean HasAnyCakeStoryNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYCAKESTORYNEW_OFFSET))(this);
		}

		::System::Boolean HasAtlasHUDReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASATLASHUDREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetLocalCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETLOCALCAKEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetCaughtCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAUGHTCAKEDATA_OFFSET))(this);
		}

		::System::UInt32 GetCakeCatchCountHistory(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAKECATCHCOUNTHISTORY_OFFSET))(this, a1);
		}

		::System::Void OpenCakeBoxResultPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_OPENCAKEBOXRESULTPAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsCakeCaughtInRoom(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHTINROOM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetCakeCaughtCountInRoom(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAKECAUGHTCOUNTINROOM_OFFSET))(this, a1);
		}

		::System::Boolean IsCakeCaught(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHT_OFFSET))(this, a1);
		}

		::System::Boolean IsCakeLocalAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKELOCALAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 GetAllCaughtCakeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLCAUGHTCAKECOUNT_OFFSET))(this);
		}

		::System::UInt32 GetCurrentRoomCakeCatchProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCURRENTROOMCAKECATCHPROGRESS_OFFSET))(this);
		}

		::RPG::Client::CakeCatchCatGodData* GetCatGodAtlasData()
		{
			return ((::RPG::Client::CakeCatchCatGodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCATGODATLASDATA_OFFSET))(this);
		}

		::System::Void RegisterWaitPerformanceBackToAdventure(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_REGISTERWAITPERFORMANCEBACKTOADVENTURE_OFFSET))(this, a1);
		}

		::System::Void _DataRefreshReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__DATAREFRESHREQ_OFFSET))(this);
		}

		::System::Void _PrepareSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__PREPARESLOTS_OFFSET))(this);
		}

		::System::Void _PreparePerformances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__PREPAREPERFORMANCES_OFFSET))(this);
		}

		::System::Void _EnsureCakeDialogueManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ENSURECAKEDIALOGUEMANAGER_OFFSET))(this);
		}

		::System::Void _DisposeCakeDialogueManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__DISPOSECAKEDIALOGUEMANAGER_OFFSET))(this);
		}

		::System::Void _TryRefreshCakeStatus(::Class_1_70D2E0F3216AAE0C_1* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__TRYREFRESHCAKESTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshCatGodState(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCATGODSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshCurrentCatGodSate(::Class_1_3B0F034547F10ACD* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3B0F034547F10ACD*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCURRENTCATGODSATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshLocalCatGodState(::Class_1_3B0F034547F10ACD* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3B0F034547F10ACD*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCATGODSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshCakeStatus(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_49*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_49*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKESTATUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockedPerformance(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHUNLOCKEDPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _RefreshCakeCatchCountHistory(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_1007*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_1007*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHCOUNTHISTORY_OFFSET))(this, a1);
		}

		::System::Void _RefreshCakeCatchRecordHistory(::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_98*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_98*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHRECORDHISTORY_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalCakeStatus(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_49*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_49*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCAKESTATUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshBoxValidTime(::System::UInt64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHBOXVALIDTIME_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshLocalBoxValidTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALBOXVALIDTIME_OFFSET))(this, a1);
		}

		::System::Void _RefreshDIYLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHDIYLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalDIYLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALDIYLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Void _RefreshCakeCatchTextJoin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHTEXTJOIN_OFFSET))(this);
		}

		::System::Boolean _IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean _IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ISLOCALBOXOPENABLE_OFFSET))(this);
		}

		::System::UInt32 _GetWeeklySearchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__GETWEEKLYSEARCHCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetRandomCakeDatas(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETRANDOMCAKEDATAS_OFFSET))(this, a1);
		}

		::System::Void OnPlayerInDialogueRangeChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ONPLAYERINDIALOGUERANGECHANGED_OFFSET))(this, a1);
		}

		::System::Void SetIsPlayerInDialogueRange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SETISPLAYERINDIALOGUERANGE_OFFSET))(this, a1);
		}

		::System::Void PlaySceneRandomDialogueLoop(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_PLAYSCENERANDOMDIALOGUELOOP_OFFSET))(this, a1);
		}

		::System::Void InterrupAllDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INTERRUPALLDIALOGUE_OFFSET))(this);
		}

		::System::Boolean get_IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISLOCALBOXOPENABLE_OFFSET))(this);
		}

		::System::UInt32 get_DIYLikeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_DIYLIKECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_WeeklySearchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_WEEKLYSEARCHCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_PendingCakeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_PENDINGCAKEID_OFFSET))(this);
		}

		::System::String* get_BoxValidTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_BOXVALIDTIMESTRING_OFFSET))(this);
		}

		::System::Void _Init_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__INIT_B__22_0_OFFSET))(this);
		}

		::System::Void _OpenCakeBoxResultPage_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__OPENCAKEBOXRESULTPAGE_B__51_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
