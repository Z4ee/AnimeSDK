#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8BE1D80)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8BE1D60)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8BE1D90)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8BE1D70)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE1DA0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int CopyStatByNameOptions_TypeDefinitionIndex = 41205;

	class CopyStatByNameOptions : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_NAME_OFFSET))(this, value);
		}
	};
}
