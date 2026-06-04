#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_8.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_14;
class Class_1_F730B69FCB9EE042;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ContentPackageConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSANDMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB82E2C0)
#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSFROMRELEASECONDITION_OFFSET UNITYSDK_OFFSET(0xB82DD10)
#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTMISSIONSFROMRELEASECONDITION_OFFSET UNITYSDK_OFFSET(0xB82DA60)
#define RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSDIMENSION_OFFSET UNITYSDK_OFFSET(0xB82D330)
#define RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSMISSION_OFFSET UNITYSDK_OFFSET(0xB82D470)
#define RPG_CLIENT_EARLYACCESSCONTENT_CREATEMAINDIMENSION_OFFSET UNITYSDK_OFFSET(0xB82CB30)
#define RPG_CLIENT_EARLYACCESSCONTENT_CREATE_OFFSET UNITYSDK_OFFSET(0xB82C790)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETALLFLOORIDS_OFFSET UNITYSDK_OFFSET(0xB82D150)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETCONTENTFLOOR_OFFSET UNITYSDK_OFFSET(0xB82D060)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETDOINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0xB82D5B0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETRELEASECONDITIONMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB82E1F0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETTRANSFERENTRANCEID_OFFSET UNITYSDK_OFFSET(0xB82D510)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_CANUNLOCK_OFFSET UNITYSDK_OFFSET(0xB82C630)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ID_OFFSET UNITYSDK_OFFSET(0xB82C560)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0xB82C650)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB82C670)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISMAINCONTENT_OFFSET UNITYSDK_OFFSET(0xB82C6F0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xB82C6D0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISUNAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB82C570)
#define RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB82CFB0)
#define RPG_CLIENT_EARLYACCESSCONTENT_ISMAINMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0xB82E730)
#define RPG_CLIENT_EARLYACCESSCONTENT_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB82CBB0)
#define RPG_CLIENT_EARLYACCESSCONTENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xB82CF60)
#define RPG_CLIENT_EARLYACCESSCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB82C820)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYGUIDESTATE_OFFSET UNITYSDK_OFFSET(0xB82D9E0)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0xB82D8F0)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETSTATUS_OFFSET UNITYSDK_OFFSET(0xB82C590)
#define RPG_CLIENT_EARLYACCESSCONTENT__INITCONTENTFLOORS_OFFSET UNITYSDK_OFFSET(0xB82C900)
#define RPG_CLIENT_EARLYACCESSCONTENT__INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB82C860)
#define RPG_CLIENT_EARLYACCESSCONTENT__ISMAINCONTENT_OFFSET UNITYSDK_OFFSET(0xB82C740)
#define RPG_CLIENT_EARLYACCESSCONTENT__PREPAREFLOORDATA_OFFSET UNITYSDK_OFFSET(0xB82CE10)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent_TypeDefinitionIndex = 59566;

	class EarlyAccessContent : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAIN_CONTENT_ID = 0x0; // 0x0
		::RPG::Client::ConditionChecker* _GuideCondition; // 0x10
		::RPG::GameCore::ContentPackageConfigRow* _Row; // 0x18
		::Class_1_1CBA230307F9C289_14* _SrvData; // 0x20
		::RPG::Client::ConditionChecker* _ReleaseCondition; // 0x28
		::System::Collections::Generic::List_1<::Class_1_F730B69FCB9EE042*>* _ContentFloors; // 0x30
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

		static ::RPG::Client::EarlyAccessContent* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::EarlyAccessContent* CreateMainDimension()
		{
			return ((::RPG::Client::EarlyAccessContent*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CREATEMAINDIMENSION_OFFSET))();
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_PREPAREDATA_OFFSET))(this);
		}

		::System::Void Update(::Class_1_1CBA230307F9C289_14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean IsFloorUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORUNLOCKED_OFFSET))(this, a1);
		}

		::Class_1_F730B69FCB9EE042* GetContentFloor(::System::UInt32 a1)
		{
			return ((::Class_1_F730B69FCB9EE042*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETCONTENTFLOOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllFloorIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETALLFLOORIDS_OFFSET))(this);
		}

		::System::Boolean ContainsDimension(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSDIMENSION_OFFSET))(this, a1);
		}

		::System::Boolean ContainsMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 GetTransferEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETTRANSFERENTRANCEID_OFFSET))(this);
		}

		::System::Void CollectMissionsFromReleaseCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTMISSIONSFROMRELEASECONDITION_OFFSET))(this, a1);
		}

		::System::Void CollectContentIDsFromReleaseCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSFROMRELEASECONDITION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetReleaseConditionMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETRELEASECONDITIONMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Void CollectContentIDsAndMainMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSANDMAINMISSIONIDS_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsMainContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__ISMAINCONTENT_OFFSET))(this);
		}

		::System::Void _Initialize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void _InitContentFloors(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__INITCONTENTFLOORS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _PrepareFloorData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__PREPAREFLOORDATA_OFFSET))(this);
		}

		::System::UInt32 _GetEntranceIDByGuideState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYGUIDESTATE_OFFSET))(this);
		}

		::System::UInt32 _GetEntranceIDBySubMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYSUBMISSION_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_8 _GetStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_8(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETSTATUS_OFFSET))(this);
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
