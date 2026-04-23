#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_7.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

class Class_1_35C4631AD9C32CA1;
namespace RPG::Client { class CakeCatchClimbingFrameData; }
namespace RPG::Client { class CakeCatchFreeRangeAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARALL_OFFSET UNITYSDK_OFFSET(0x9ECABD0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEAREDITMODE_OFFSET UNITYSDK_OFFSET(0x9ECA510)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x9ECA3C0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARSHELFCAKE_OFFSET UNITYSDK_OFFSET(0x9ECA8E0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CREATEPROTODATA_OFFSET UNITYSDK_OFFSET(0x9ECF5B0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EC8B60)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMEBYSLOT_OFFSET UNITYSDK_OFFSET(0x9ECB0B0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMELIST_OFFSET UNITYSDK_OFFSET(0x9ECB640)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMETYPE_OFFSET UNITYSDK_OFFSET(0x9ECAFC0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCOPYPROTODATA_OFFSET UNITYSDK_OFFSET(0x9EC7040)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREABYSLOTID_OFFSET UNITYSDK_OFFSET(0x9EC99F0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREALIST_OFFSET UNITYSDK_OFFSET(0x9ECB6D0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SETCLIMBINGFRAMETYPE_OFFSET UNITYSDK_OFFSET(0x9EC8F90)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SWITCHGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x9ECA0E0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SYNCRECORD_OFFSET UNITYSDK_OFFSET(0x9EC70B0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0x9EC9C40)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0x9EC9460)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYRESETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x9ECA9C0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0x9EC9BA0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0x9EC9260)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLSETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x9ECF4E0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC6D00)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__ISCAKEKNOWPOSE_OFFSET UNITYSDK_OFFSET(0x9ED02D0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__REBUILDINDEXES_OFFSET UNITYSDK_OFFSET(0x9ECE970)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchDIYHistory_TypeDefinitionIndex = 58015;

	class CakeCatchDIYHistory : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchClimbingFrameData*>* _ClimbingFrameBySlotDict; // 0x10
		::Class_1_35C4631AD9C32CA1* _ProtoData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchFreeRangeAreaData*>* _FreeRangeAreaDict; // 0x20
		::Enum_3_ED790DAC948A65A9_7 _ClimbingFrameType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRecord(::Class_1_35C4631AD9C32CA1* record)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35C4631AD9C32CA1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SYNCRECORD_OFFSET))(this, record);
		}

		::System::Void _RebuildIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__REBUILDINDEXES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeRangeAreaData*>* GetFreeRangeAreaList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeRangeAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREALIST_OFFSET))(this);
		}

		::RPG::Client::CakeCatchFreeRangeAreaData* GetFreeRangeAreaBySlotId(::System::UInt32 slotId)
		{
			return ((::RPG::Client::CakeCatchFreeRangeAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREABYSLOTID_OFFSET))(this, slotId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchClimbingFrameData*>* GetClimbingFrameList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchClimbingFrameData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMELIST_OFFSET))(this);
		}

		::RPG::Client::CakeCatchClimbingFrameData* GetClimbingFrameBySlot(::System::UInt32 slot)
		{
			return ((::RPG::Client::CakeCatchClimbingFrameData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMEBYSLOT_OFFSET))(this, slot);
		}

		::Enum_3_ED790DAC948A65A9_7 GetClimbingFrameType()
		{
			return ((::Enum_3_ED790DAC948A65A9_7(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMETYPE_OFFSET))(this);
		}

		::System::Void SetClimbingFrameType(::Enum_3_ED790DAC948A65A9_7 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SETCLIMBINGFRAMETYPE_OFFSET))(this, type);
		}

		::System::Boolean WillAddCakeToShelf(::System::UInt32 slotId, ::System::UInt32 cakeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOSHELF_OFFSET))(this, slotId, cakeId);
		}

		::System::Boolean TryAddCakeToShelf(::System::UInt32 slotId, ::System::UInt32 cakeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOSHELF_OFFSET))(this, slotId, cakeId);
		}

		::System::Void ClearShelfCake(::System::UInt32 slotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARSHELFCAKE_OFFSET))(this, slotId);
		}

		::System::Boolean WillAddCakeToGround(::System::UInt32 slotId, ::System::Int32 index, ::System::UInt32 cakeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOGROUND_OFFSET))(this, slotId, index, cakeId);
		}

		::System::Boolean WillSetGroundPose(::System::UInt32 groundSlotId, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType pose)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLSETGROUNDPOSE_OFFSET))(this, groundSlotId, pose);
		}

		::System::Boolean TryAddCakeToGround(::System::UInt32 slotId, ::System::Int32 index, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType pose, ::System::UInt32 cakeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOGROUND_OFFSET))(this, slotId, index, pose, cakeId);
		}

		::System::Void SwitchGroundPose(::System::UInt32 groundSlotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SWITCHGROUNDPOSE_OFFSET))(this, groundSlotId);
		}

		::System::Void ClearGroundPose(::System::UInt32 groundSlotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARGROUNDPOSE_OFFSET))(this, groundSlotId);
		}

		::System::Void TryResetGroundPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYRESETGROUNDPOSE_OFFSET))(this);
		}

		::System::Void ClearEditMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEAREDITMODE_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARALL_OFFSET))(this);
		}

		::Class_1_35C4631AD9C32CA1* GetCopyProtoData()
		{
			return ((::Class_1_35C4631AD9C32CA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCOPYPROTODATA_OFFSET))(this);
		}

		::Class_1_35C4631AD9C32CA1* CreateProtoData()
		{
			return ((::Class_1_35C4631AD9C32CA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CREATEPROTODATA_OFFSET))(this);
		}

		::System::Boolean _IsCakeKnowPose(::System::UInt32 cakeId, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType pose)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__ISCAKEKNOWPOSE_OFFSET))(this, cakeId, pose);
		}
	};
}
