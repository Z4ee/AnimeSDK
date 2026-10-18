#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xC5263D0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC5263E0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_MAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xC526520)
#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_SUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xC526530)
#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xC526350)
#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC526280)
#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO__CTOR_OFFSET UNITYSDK_OFFSET(0xC525FF0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO__REFRESHRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC5260A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLightConeRewardGoto_TypeDefinitionIndex = 61677;

	class ActivityLightConeRewardGoto : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SubMissionIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _MainMissionIDs_k__BackingField; // 0x18
		::System::UInt32 _GotoID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO__CTOR_OFFSET))(this, a1);
		}

		::System::Void RequestRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_REQUESTRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::Void _RefreshRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO__REFRESHRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_GOTOID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_MAINMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEREWARDGOTO_GET_SUBMISSIONIDS_OFFSET))(this);
		}
	};
}
