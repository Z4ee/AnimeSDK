#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ECE900)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_CAKEIDLIST_OFFSET UNITYSDK_OFFSET(0x9ED0450)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_POSE_OFFSET UNITYSDK_OFFSET(0x9ED0430)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x9ED0410)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SETPOSE_OFFSET UNITYSDK_OFFSET(0x9ECF560)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_CAKEIDLIST_OFFSET UNITYSDK_OFFSET(0x9ED0460)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_POSE_OFFSET UNITYSDK_OFFSET(0x9ED0440)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x9ED0420)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SYNCFROMPROTO_OFFSET UNITYSDK_OFFSET(0x9ECF430)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECF3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchFreeRangeAreaData_TypeDefinitionIndex = 58013;

	class CakeCatchFreeRangeAreaData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CakeIdList_k__BackingField; // 0x10
		::System::UInt32 _SlotId_k__BackingField; // 0x18
		::System::UInt32 _Pose_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 slotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA__CTOR_OFFSET))(this, slotId);
		}

		::System::Void SyncFromProto(::Class_1_4BC858D7C27E10ED_6* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SYNCFROMPROTO_OFFSET))(this, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetPose(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType pose)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SETPOSE_OFFSET))(this, pose);
		}

		::System::UInt32 get_SlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_SLOTID_OFFSET))(this, value);
		}

		::System::UInt32 get_Pose()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_POSE_OFFSET))(this);
		}

		::System::Void set_Pose(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_POSE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CakeIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_CAKEIDLIST_OFFSET))(this);
		}

		::System::Void set_CakeIdList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_CAKEIDLIST_OFFSET))(this, value);
		}
	};
}
