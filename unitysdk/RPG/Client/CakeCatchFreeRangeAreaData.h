#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A130580)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_CAKEIDLIST_OFFSET UNITYSDK_OFFSET(0x1A1322C0)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_POSE_OFFSET UNITYSDK_OFFSET(0x1A1322A0)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1A132280)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SETPOSE_OFFSET UNITYSDK_OFFSET(0x1A1314F0)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_CAKEIDLIST_OFFSET UNITYSDK_OFFSET(0x1A1322D0)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_POSE_OFFSET UNITYSDK_OFFSET(0x1A1322B0)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1A132290)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SYNCFROMPROTO_OFFSET UNITYSDK_OFFSET(0x1A1313E0)
#define RPG_CLIENT_CAKECATCHFREERANGEAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A131380)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchFreeRangeAreaData_TypeDefinitionIndex = 63048;

	class CakeCatchFreeRangeAreaData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CakeIdList_k__BackingField; // 0x10
		::System::UInt32 _Pose_k__BackingField; // 0x18
		::System::UInt32 _SlotId_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncFromProto(::Class_1_766E1CF11E204F43* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SYNCFROMPROTO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetPose(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SETPOSE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_SLOTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Pose()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_POSE_OFFSET))(this);
		}

		::System::Void set_Pose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_POSE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CakeIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_GET_CAKEIDLIST_OFFSET))(this);
		}

		::System::Void set_CakeIdList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREERANGEAREADATA_SET_CAKEIDLIST_OFFSET))(this, a1);
		}
	};
}
