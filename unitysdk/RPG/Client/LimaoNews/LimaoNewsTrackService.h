#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F917B69C2E81F61E;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_BEGINTRACKOFFICE_OFFSET UNITYSDK_OFFSET(0xD4922E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4917B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_ENDTRACKOFFICE_OFFSET UNITYSDK_OFFSET(0xD491AE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0xD4918F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSION_OFFSET UNITYSDK_OFFSET(0xD491E50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_SETLIMAONEWSTRACKSURVEY_OFFSET UNITYSDK_OFFSET(0xD491830)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ADDBILLBOARDINFO_OFFSET UNITYSDK_OFFSET(0xD493480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xD492780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xD491680)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__DOTRACKOFFICE_OFFSET UNITYSDK_OFFSET(0xD4927D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETBILLBOARDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD4935D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETENTRYIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0xD4921B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETFIRSTTRACKABLEDATA_OFFSET UNITYSDK_OFFSET(0xD492950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETMAPICONINCARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD492C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETPREPARESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xD4939A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GOTOSURVEYMISSIONTARGET_B__3_0_OFFSET UNITYSDK_OFFSET(0xD4946B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ISDATAVALID_OFFSET UNITYSDK_OFFSET(0xD491A80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__JUMPTOMISSIONTARGETUIPAGE_OFFSET UNITYSDK_OFFSET(0xD491BA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONCLOSEBIGMAP_OFFSET UNITYSDK_OFFSET(0xD4945A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xD493E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONREFRESHBILLBORDINFO_OFFSET UNITYSDK_OFFSET(0xD494250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONUPDATEMAPPINGINFOTRACE_OFFSET UNITYSDK_OFFSET(0xD4943D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__OPENMAPPAGE_OFFSET UNITYSDK_OFFSET(0xD4930B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__PREPARESUBMISSION_OFFSET UNITYSDK_OFFSET(0xD492450)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__REMOVEBILLBOARDINFO_OFFSET UNITYSDK_OFFSET(0xD492500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__REMOVEMAPSHOWICON_OFFSET UNITYSDK_OFFSET(0xD4926D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__TRYTRACKNEXTENTITY_OFFSET UNITYSDK_OFFSET(0xD494010)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___DOTRACKOFFICE_B__10_0_OFFSET UNITYSDK_OFFSET(0xD494860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___TRYTRACKNEXTENTITY_B__21_0_OFFSET UNITYSDK_OFFSET(0xD494A60)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsTrackService_TypeDefinitionIndex = 79019;

	class LimaoNewsTrackService : public ::System::Object
	{
	public:
		::Class_1_F917B69C2E81F61E* _CurrentLimaoTrackData; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* _CurrentLimaoItem; // 0x18
		::RPG::Client::IBigMapIcon* _CurrentIcon; // 0x20
		::System::Boolean _IsRemovingMapIcon; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetLimaoNewsTrackSurvey(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_SETLIMAONEWSTRACKSURVEY_OFFSET))(this, a1);
		}

		::System::Void GotoSurveyMissionTarget(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSIONTARGET_OFFSET))(this, a1);
		}

		::System::Void _JumpToMissionTargetUiPage(::RPG::GameCore::SubMissionInfoConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__JUMPTOMISSIONTARGETUIPAGE_OFFSET))(this, a1);
		}

		::System::Void GotoSurveyMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 _GetEntryIDByFloorId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETENTRYIDBYFLOORID_OFFSET))(this, a1);
		}

		::System::Void BeginTrackOffice(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_BEGINTRACKOFFICE_OFFSET))(this, a1);
		}

		::System::Void EndTrackOffice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE_ENDTRACKOFFICE_OFFSET))(this);
		}

		::System::Void _RemoveMapShowIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__REMOVEMAPSHOWICON_OFFSET))(this);
		}

		::System::Void _DoTrackOffice(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__DOTRACKOFFICE_OFFSET))(this, a1);
		}

		::RPG::Client::IBigMapIcon* _GetMapIconInCartography(::RPG::Client::NavMap::ICartography* a1, ::Class_1_F917B69C2E81F61E* a2)
		{
			return ((::RPG::Client::IBigMapIcon*(*)(::PVOID, ::RPG::Client::NavMap::ICartography*, ::Class_1_F917B69C2E81F61E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETMAPICONINCARTOGRAPHY_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenMapPage(::RPG::Client::IBigMapIcon* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__OPENMAPPAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ISDATAVALID_OFFSET))(this);
		}

		::System::Void _AddBillboardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ADDBILLBOARDINFO_OFFSET))(this);
		}

		::System::Void _RemoveBillboardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__REMOVEBILLBOARDINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareSubMission(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__PREPARESUBMISSION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetPrepareSubMissionList(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETPREPARESUBMISSIONLIST_OFFSET))(this, a1);
		}

		::Class_1_F917B69C2E81F61E* _GetFirstTrackableData(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1, ::System::UInt32 a2)
		{
			return ((::Class_1_F917B69C2E81F61E*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETFIRSTTRACKABLEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__CLEARDATA_OFFSET))(this);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _TryTrackNextEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__TRYTRACKNEXTENTITY_OFFSET))(this);
		}

		::System::Void _OnRefreshBillbordInfo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONREFRESHBILLBORDINFO_OFFSET))(this, a1);
		}

		::System::Void _OnUpdateMappingInfoTrace(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONUPDATEMAPPINGINFOTRACE_OFFSET))(this, a1);
		}

		::System::Void _OnCloseBigMap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__ONCLOSEBIGMAP_OFFSET))(this, a1);
		}

		::RPG::GameCore::BillboardComponent* _GetBillboardComponent()
		{
			return ((::RPG::GameCore::BillboardComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GETBILLBOARDCOMPONENT_OFFSET))(this);
		}

		::System::Void _GotoSurveyMissionTarget_b__3_0(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE__GOTOSURVEYMISSIONTARGET_B__3_0_OFFSET))(this, a1);
		}

		::System::Void __DoTrackOffice_b__10_0(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___DOTRACKOFFICE_B__10_0_OFFSET))(this, a1);
		}

		::System::Void __TryTrackNextEntity_b__21_0(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___TRYTRACKNEXTENTITY_B__21_0_OFFSET))(this, a1);
		}
	};
}
