#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_9.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_14;
class Class_1_F730B69FCB9EE042;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ContentPackageConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSANDMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA1ACB30)
#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSFROMRELEASECONDITION_OFFSET UNITYSDK_OFFSET(0xA1AC580)
#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTMISSIONSFROMRELEASECONDITION_OFFSET UNITYSDK_OFFSET(0xA1AC2D0)
#define RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSDIMENSION_OFFSET UNITYSDK_OFFSET(0xA1ABA30)
#define RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSMISSION_OFFSET UNITYSDK_OFFSET(0xA1ABB60)
#define RPG_CLIENT_EARLYACCESSCONTENT_CREATEMAINDIMENSION_OFFSET UNITYSDK_OFFSET(0xA1AB230)
#define RPG_CLIENT_EARLYACCESSCONTENT_CREATE_OFFSET UNITYSDK_OFFSET(0xA1AAF30)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETALLFLOORIDS_OFFSET UNITYSDK_OFFSET(0xA1AB880)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETCONTENTFLOOR_OFFSET UNITYSDK_OFFSET(0xA1AB7A0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETDOINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA1ABD90)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETRELEASECONDITIONMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA1ACA60)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETTRANSFERENTRANCEID_OFFSET UNITYSDK_OFFSET(0xA1ABC00)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_CANUNLOCK_OFFSET UNITYSDK_OFFSET(0xA1AADD0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ID_OFFSET UNITYSDK_OFFSET(0xA1AAD00)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0xA1AADF0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA1AAE10)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISMAINCONTENT_OFFSET UNITYSDK_OFFSET(0xA1AAE90)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xA1AAE70)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISUNAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA1AAD10)
#define RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA1AB6F0)
#define RPG_CLIENT_EARLYACCESSCONTENT_ISMAINMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0xA1ACF90)
#define RPG_CLIENT_EARLYACCESSCONTENT_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA1AB2B0)
#define RPG_CLIENT_EARLYACCESSCONTENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA1AB6A0)
#define RPG_CLIENT_EARLYACCESSCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AAFC0)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYGUIDESTATE_OFFSET UNITYSDK_OFFSET(0xA1AC250)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA1AC160)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETSTATUS_OFFSET UNITYSDK_OFFSET(0xA1AAD30)
#define RPG_CLIENT_EARLYACCESSCONTENT__INITCONTENTFLOORS_OFFSET UNITYSDK_OFFSET(0xA1AB0A0)
#define RPG_CLIENT_EARLYACCESSCONTENT__INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA1AB000)
#define RPG_CLIENT_EARLYACCESSCONTENT__ISMAINCONTENT_OFFSET UNITYSDK_OFFSET(0xA1AAEE0)
#define RPG_CLIENT_EARLYACCESSCONTENT__PREPAREFLOORDATA_OFFSET UNITYSDK_OFFSET(0xA1AB580)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent_TypeDefinitionIndex = 58636;

	class EarlyAccessContent : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAIN_CONTENT_ID = 0x0; // 0x0
		::RPG::GameCore::ContentPackageConfigRow* _Row; // 0x10
		::RPG::Client::ConditionChecker* _GuideCondition; // 0x18
		::Class_1_1CBA230307F9C289_14* _SrvData; // 0x20
		::System::Collections::Generic::List_1<::Class_1_F730B69FCB9EE042*>* _ContentFloors; // 0x28
		::RPG::Client::ConditionChecker* _ReleaseCondition; // 0x30
		::System::UInt32 _ContentID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsUnavailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISUNAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_CanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_CANUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISDOING_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISRELEASED_OFFSET))(this);
		}

		::System::Boolean get_IsMainContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISMAINCONTENT_OFFSET))(this);
		}

		static ::RPG::Client::EarlyAccessContent* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CREATE_OFFSET))(id);
		}

		static ::RPG::Client::EarlyAccessContent* CreateMainDimension()
		{
			return ((::RPG::Client::EarlyAccessContent*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CREATEMAINDIMENSION_OFFSET))();
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_PREPAREDATA_OFFSET))(this);
		}

		::System::Void Update(::Class_1_1CBA230307F9C289_14* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_UPDATE_OFFSET))(this, data);
		}

		::System::Boolean IsFloorUnlocked(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORUNLOCKED_OFFSET))(this, floorID);
		}

		::Class_1_F730B69FCB9EE042* GetContentFloor(::System::UInt32 floorID)
		{
			return ((::Class_1_F730B69FCB9EE042*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETCONTENTFLOOR_OFFSET))(this, floorID);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllFloorIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETALLFLOORIDS_OFFSET))(this);
		}

		::System::Boolean ContainsDimension(::System::UInt32 dimensionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSDIMENSION_OFFSET))(this, dimensionID);
		}

		::System::Boolean ContainsMission(::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSMISSION_OFFSET))(this, mainMissionID);
		}

		::System::UInt32 GetTransferEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETTRANSFERENTRANCEID_OFFSET))(this);
		}

		::System::Void CollectMissionsFromReleaseCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* mainMissionIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTMISSIONSFROMRELEASECONDITION_OFFSET))(this, mainMissionIDs);
		}

		::System::Void CollectContentIDsFromReleaseCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* contentIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSFROMRELEASECONDITION_OFFSET))(this, contentIDs);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetReleaseConditionMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETRELEASECONDITIONMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Void CollectContentIDsAndMainMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* contentIDs, ::System::Collections::Generic::HashSet_1<::System::UInt32>* mainMissionIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSANDMAINMISSIONIDS_OFFSET))(this, contentIDs, mainMissionIDs);
		}

		::System::Boolean _IsMainContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__ISMAINCONTENT_OFFSET))(this);
		}

		::System::Void _Initialize(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__INITIALIZE_OFFSET))(this, id);
		}

		::System::Void _InitContentFloors(::System::UInt32 contentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__INITCONTENTFLOORS_OFFSET))(this, contentID);
		}

		::RPG::Client::Promises::IPromise* _PrepareFloorData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__PREPAREFLOORDATA_OFFSET))(this);
		}

		::System::UInt32 _GetEntranceIDByGuideState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYGUIDESTATE_OFFSET))(this);
		}

		::System::UInt32 _GetEntranceIDBySubMission(::RPG::Client::SubMissionData* subMission)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYSUBMISSION_OFFSET))(this, subMission);
		}

		::Enum_3_4608E37A1B3D374A_9 _GetStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_9(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETSTATUS_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetDoingSubMission()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETDOINGSUBMISSION_OFFSET))(this);
		}

		::System::Boolean IsMainMissionAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_ISMAINMISSIONALLFINISHED_OFFSET))(this);
		}
	};
}
