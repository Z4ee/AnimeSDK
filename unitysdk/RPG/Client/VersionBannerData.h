#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityVersionBannerRow; }

#define RPG_CLIENT_VERSIONBANNERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCC0E160)
#define RPG_CLIENT_VERSIONBANNERDATA_GET_MISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xCC0E220)
#define RPG_CLIENT_VERSIONBANNERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC0E210)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionBannerData_TypeDefinitionIndex = 57663;

	class VersionBannerData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityVersionBannerRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONBANNERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::VersionBannerData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::VersionBannerData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONBANNERDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_MissionType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONBANNERDATA_GET_MISSIONTYPE_OFFSET))(this);
		}
	};
}
