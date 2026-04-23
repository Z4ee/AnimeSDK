#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpaceZooFeatureConfigRow; }

#define RPG_CLIENT_SPACEZOOFEATUREDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB19A520)
#define RPG_CLIENT_SPACEZOOFEATUREDATA_GET_FEATUREID_OFFSET UNITYSDK_OFFSET(0xB19A8C0)
#define RPG_CLIENT_SPACEZOOFEATUREDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB19A8E0)
#define RPG_CLIENT_SPACEZOOFEATUREDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB199EE0)
#define RPG_CLIENT_SPACEZOOFEATUREDATA_SET_FEATUREID_OFFSET UNITYSDK_OFFSET(0xB19A8D0)
#define RPG_CLIENT_SPACEZOOFEATUREDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB19A8F0)
#define RPG_CLIENT_SPACEZOOFEATUREDATA_SYNCSTATE_OFFSET UNITYSDK_OFFSET(0xB19A3F0)
#define RPG_CLIENT_SPACEZOOFEATUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB19A8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooFeatureData_TypeDefinitionIndex = 62660;

	class SpaceZooFeatureData : public ::System::Object
	{
	public:
		::System::UInt32 _FeatureID_k__BackingField; // 0x10
		::System::Boolean _IsUnlock_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SpaceZooFeatureData* Create(::System::UInt32 featureID)
		{
			return ((::RPG::Client::SpaceZooFeatureData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA_CREATE_OFFSET))(featureID);
		}

		::System::Void SyncState(::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA_SYNCSTATE_OFFSET))(this, isUnlock);
		}

		::System::UInt32 get_FeatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA_GET_FEATUREID_OFFSET))(this);
		}

		::System::Void set_FeatureID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA_SET_FEATUREID_OFFSET))(this, value);
		}

		::RPG::GameCore::SpaceZooFeatureConfigRow* get_Row()
		{
			return ((::RPG::GameCore::SpaceZooFeatureConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOFEATUREDATA_SET_ISUNLOCK_OFFSET))(this, value);
		}
	};
}
