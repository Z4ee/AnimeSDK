#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_72;

#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B8F87F0)
#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1B8F94E0)
#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1B8F9500)
#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1B8F9520)
#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1B8F94F0)
#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1B8F9510)
#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1B8F9530)
#define RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F79A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotData_ItemProgress_TypeDefinitionIndex = 61628;

	class ActivityHotData_ItemProgress : public ::System::Object
	{
	public:
		::System::UInt32 _Target_k__BackingField; // 0x10
		::System::UInt32 _Progress_k__BackingField; // 0x14
		::System::UInt32 _ItemID_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_D17272E82AE804C2_72* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Target()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ITEMPROGRESS_GET_ISFINISHED_OFFSET))(this);
		}
	};
}
