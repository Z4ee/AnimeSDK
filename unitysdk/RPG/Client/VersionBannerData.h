#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityVersionBannerRow; }

#define RPG_CLIENT_VERSIONBANNERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB46B5E0)
#define RPG_CLIENT_VERSIONBANNERDATA_GET_MISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xB46B6A0)
#define RPG_CLIENT_VERSIONBANNERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB46B690)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionBannerData_TypeDefinitionIndex = 56875;

	class VersionBannerData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityVersionBannerRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONBANNERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::VersionBannerData* Create(::System::UInt32 activityID)
		{
			return ((::RPG::Client::VersionBannerData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONBANNERDATA_CREATE_OFFSET))(activityID);
		}

		::System::UInt32 get_MissionType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONBANNERDATA_GET_MISSIONTYPE_OFFSET))(this);
		}
	};
}
