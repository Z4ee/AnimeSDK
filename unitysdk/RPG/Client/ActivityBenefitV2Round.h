#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_21C7581DFE99F091_10;
class Class_1_A7B2F9D1AE8AB549;
class Class_1_D17272E82AE804C2_155;

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0xC4D4650)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDDRAWN_OFFSET UNITYSDK_OFFSET(0xC4D4510)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC4D42F0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEDESCRIPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xC4D4580)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEID_OFFSET UNITYSDK_OFFSET(0xC4D43A0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0xC4D4690)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC4D4330)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEDESCRIPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xC4D45C0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEID_OFFSET UNITYSDK_OFFSET(0xC4D43E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNCISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC4D4720)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_1_OFFSET UNITYSDK_OFFSET(0xC4D4890)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_2_OFFSET UNITYSDK_OFFSET(0xC4D4A10)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_OFFSET UNITYSDK_OFFSET(0xC4D47B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xC4D4AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2Round_TypeDefinitionIndex = 61501;

	class ActivityBenefitV2Round : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::UInt32 _PrizeID; // 0x18
		::System::Boolean _IsRewardClaimed; // 0x1C
		::System::Boolean _IsUnlocked; // 0x1D
		::System::Int32 _PrizeDescriptionIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrizeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEID_OFFSET))(this);
		}

		::System::Void set_PrizeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardDrawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDDRAWN_OFFSET))(this);
		}

		::System::Int32 get_PrizeDescriptionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEDESCRIPTIONINDEX_OFFSET))(this);
		}

		::System::Void set_PrizeDescriptionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEDESCRIPTIONINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDCLAIMED_OFFSET))(this);
		}

		::System::Void set_IsRewardClaimed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISREWARDCLAIMED_OFFSET))(this, a1);
		}

		::System::Void SyncIsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNCISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_155* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_155*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_21C7581DFE99F091_10* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Sync_2(::Class_1_A7B2F9D1AE8AB549* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A7B2F9D1AE8AB549*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_2_OFFSET))(this, a1);
		}
	};
}
