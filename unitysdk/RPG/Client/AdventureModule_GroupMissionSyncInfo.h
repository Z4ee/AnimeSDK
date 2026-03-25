#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x90471D0)
#define RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x9047320)
#define RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_ONALLOC_OFFSET UNITYSDK_OFFSET(0x9047280)
#define RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x90472D0)
#define RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x9047330)
#define RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9047340)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureModule_GroupMissionSyncInfo_TypeDefinitionIndex = 50343;

	class AdventureModule_GroupMissionSyncInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ActivatedMissions; // 0x10
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::String*>> ActiveMissionCustomValueKey; // 0x18
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::String*>> DeactiveMissionCustomValueKey; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* DeactivatedMissions; // 0x48
		::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_ONRECYCLE_OFFSET))(this);
		}

		::RPG::AutoReleaseReferenceState get_ReferenceState()
		{
			return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_GET_REFERENCESTATE_OFFSET))(this);
		}

		::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE_GROUPMISSIONSYNCINFO_SET_REFERENCESTATE_OFFSET))(this, value);
		}
	};
}
