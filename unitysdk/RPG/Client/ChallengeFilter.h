#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4F99D0)
#define RPG_CLIENT_CHALLENGEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4F9930)
#define RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET UNITYSDK_OFFSET(0xB4FA1E0)
#define RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTREWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0xB4FA1A0)
#define RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTREWARDWITHSPECIALGROUPIDS_OFFSET UNITYSDK_OFFSET(0xB4FA1C0)
#define RPG_CLIENT_CHALLENGEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xB4F8B60)
#define RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET UNITYSDK_OFFSET(0xB4FA1F0)
#define RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTREWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0xB4FA1B0)
#define RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTREWARDWITHSPECIALGROUPIDS_OFFSET UNITYSDK_OFFSET(0xB4FA1D0)
#define RPG_CLIENT_CHALLENGEFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0xB4FA2F0)
#define RPG_CLIENT_CHALLENGEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FA200)
#define RPG_CLIENT_CHALLENGEFILTER__UPDATENEWSCHEDULEREDDOTS_OFFSET UNITYSDK_OFFSET(0xB4F9490)
#define RPG_CLIENT_CHALLENGEFILTER__UPDATEREWARDREDDOTS_OFFSET UNITYSDK_OFFSET(0xB4F8BE0)
#define RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4FA3F0)
#define RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4FA380)
#define RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB4FA310)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFilter_TypeDefinitionIndex = 62474;

	class ChallengeFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotRewardWithSpecialGroupIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotRewardGroupIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewScheduleGroupIDs_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _UpdateRewardRedDots(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__UPDATEREWARDREDDOTS_OFFSET))(this, a1);
		}

		::System::Void _UpdateNewScheduleRedDots(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__UPDATENEWSCHEDULEREDDOTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotRewardGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTREWARDGROUPIDS_OFFSET))(this);
		}

		::System::Void set_RedDotRewardGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTREWARDGROUPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotRewardWithSpecialGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTREWARDWITHSPECIALGROUPIDS_OFFSET))(this);
		}

		::System::Void set_RedDotRewardWithSpecialGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTREWARDWITHSPECIALGROUPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotNewScheduleGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET))(this);
		}

		::System::Void set_RedDotNewScheduleGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__ADDHANDLERS_B__2_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
