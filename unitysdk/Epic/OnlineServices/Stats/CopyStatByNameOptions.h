#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA0F3CB0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0F3C90)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA0F3CC0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0F3CA0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F3CD0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int CopyStatByNameOptions_TypeDefinitionIndex = 42008;

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

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONS_SET_NAME_OFFSET))(this, a1);
		}
	};
}
