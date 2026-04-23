#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_382479A119B6EF73;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_BEGINTRACKOFFICE_OFFSET UNITYSDK_OFFSET(0xA73C510)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA72EE20)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_ENDTRACKOFFICE_OFFSET UNITYSDK_OFFSET(0xA73BCA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0xA739B10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSION_OFFSET UNITYSDK_OFFSET(0xA73C0C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_SETLIMAONEWSTRACKSURVEY_OFFSET UNITYSDK_OFFSET(0xA73BB80)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ADDBILLBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA73D390)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xA73C940)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA72E610)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__DOTRACKOFFICE_OFFSET UNITYSDK_OFFSET(0xA73C990)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETBILLBOARDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA73D490)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETENTRYIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0xA73C3E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETFIRSTTRACKABLEDATA_OFFSET UNITYSDK_OFFSET(0xA73CAF0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETMAPICONINCARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xA73CD40)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETPREPARESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA73D780)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GOTOSURVEYMISSIONTARGET_B__3_0_OFFSET UNITYSDK_OFFSET(0xA73E020)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ISDATAVALID_OFFSET UNITYSDK_OFFSET(0xA73BC40)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__JUMPTOMISSIONTARGETUIPAGE_OFFSET UNITYSDK_OFFSET(0xA73BD60)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONCLOSEBIGMAP_OFFSET UNITYSDK_OFFSET(0xA73DF10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA73D940)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONREFRESHBILLBORDINFO_OFFSET UNITYSDK_OFFSET(0xA73DBF0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONUPDATEMAPPINGINFOTRACE_OFFSET UNITYSDK_OFFSET(0xA73DD60)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__OPENMAPPAGE_OFFSET UNITYSDK_OFFSET(0xA73D010)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__PREPARESUBMISSION_OFFSET UNITYSDK_OFFSET(0xA73C670)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__REMOVEBILLBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA73C720)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__REMOVEMAPSHOWICON_OFFSET UNITYSDK_OFFSET(0xA73C890)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__TRYTRACKNEXTENTITY_OFFSET UNITYSDK_OFFSET(0xA73DA20)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___DOTRACKOFFICE_B__10_0_OFFSET UNITYSDK_OFFSET(0xA73E1A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___TRYTRACKNEXTENTITY_B__21_0_OFFSET UNITYSDK_OFFSET(0xA73E320)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsTrackService_TypeDefinitionIndex = 68505;

	class LimaoNewsTrackService : public ::System::Object
	{
	public:
		::RPG::Client::IBigMapIcon* _CurrentIcon; // 0x10
		::Class_1_382479A119B6EF73* _CurrentLimaoTrackData; // 0x18
		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* _CurrentLimaoItem; // 0x20
		::System::Boolean _IsRemovingMapIcon; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetLimaoNewsTrackSurvey(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* officeSurveyItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_SETLIMAONEWSTRACKSURVEY_OFFSET))(this, officeSurveyItem);
		}

		::System::Void GotoSurveyMissionTarget(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* officeSurveyItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSIONTARGET_OFFSET))(this, officeSurveyItem);
		}

		::System::Void _JumpToMissionTargetUiPage(::RPG::GameCore::SubMissionInfoConfig* submissionInfoConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__JUMPTOMISSIONTARGETUIPAGE_OFFSET))(this, submissionInfoConfig);
		}

		::System::Void GotoSurveyMission(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_GOTOSURVEYMISSION_OFFSET))(this, subMissionData);
		}

		::System::UInt32 _GetEntryIDByFloorId(::System::UInt32 floorId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETENTRYIDBYFLOORID_OFFSET))(this, floorId);
		}

		::System::Void BeginTrackOffice(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_BEGINTRACKOFFICE_OFFSET))(this, surveyItem);
		}

		::System::Void EndTrackOffice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE_ENDTRACKOFFICE_OFFSET))(this);
		}

		::System::Void _RemoveMapShowIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__REMOVEMAPSHOWICON_OFFSET))(this);
		}

		::System::Void _DoTrackOffice(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__DOTRACKOFFICE_OFFSET))(this, surveyItem);
		}

		::RPG::Client::IBigMapIcon* _GetMapIconInCartography(::RPG::Client::NavMap::ICartography* cartography, ::Class_1_382479A119B6EF73* trackData)
		{
			return ((::RPG::Client::IBigMapIcon*(*)(::PVOID, ::RPG::Client::NavMap::ICartography*, ::Class_1_382479A119B6EF73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETMAPICONINCARTOGRAPHY_OFFSET))(this, cartography, trackData);
		}

		::System::Void _OpenMapPage(::RPG::Client::IBigMapIcon* icon, ::System::UInt32 submissionID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__OPENMAPPAGE_OFFSET))(this, icon, submissionID);
		}

		::System::Boolean _IsDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ISDATAVALID_OFFSET))(this);
		}

		::System::Void _AddBillboardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ADDBILLBOARDINFO_OFFSET))(this);
		}

		::System::Void _RemoveBillboardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__REMOVEBILLBOARDINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareSubMission(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__PREPARESUBMISSION_OFFSET))(this, surveyItem);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetPrepareSubMissionList(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETPREPARESUBMISSIONLIST_OFFSET))(this, surveyItem);
		}

		::Class_1_382479A119B6EF73* _GetFirstTrackableData(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem, ::System::UInt32 floorID)
		{
			return ((::Class_1_382479A119B6EF73*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETFIRSTTRACKABLEDATA_OFFSET))(this, surveyItem, floorID);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__CLEARDATA_OFFSET))(this);
		}

		::System::Void _OnFinishSubMission(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONFINISHSUBMISSION_OFFSET))(this, param);
		}

		::System::Void _TryTrackNextEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__TRYTRACKNEXTENTITY_OFFSET))(this);
		}

		::System::Void _OnRefreshBillbordInfo(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONREFRESHBILLBORDINFO_OFFSET))(this, param);
		}

		::System::Void _OnUpdateMappingInfoTrace(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONUPDATEMAPPINGINFOTRACE_OFFSET))(this, param);
		}

		::System::Void _OnCloseBigMap(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__ONCLOSEBIGMAP_OFFSET))(this, param);
		}

		::RPG::GameCore::BillboardComponent* _GetBillboardComponent()
		{
			return ((::RPG::GameCore::BillboardComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GETBILLBOARDCOMPONENT_OFFSET))(this);
		}

		::System::Void _GotoSurveyMissionTarget_b__3_0(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE__GOTOSURVEYMISSIONTARGET_B__3_0_OFFSET))(this, subMissionData);
		}

		::System::Void __DoTrackOffice_b__10_0(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___DOTRACKOFFICE_B__10_0_OFFSET))(this, cartography);
		}

		::System::Void __TryTrackNextEntity_b__21_0(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___TRYTRACKNEXTENTITY_B__21_0_OFFSET))(this, cartography);
		}
	};
}
