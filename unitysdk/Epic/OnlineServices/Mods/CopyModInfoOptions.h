#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3A6400)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB3A6420)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3A6410)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB3A6430)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A6440)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int CopyModInfoOptions_TypeDefinitionIndex = 45607;

	class CopyModInfoOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::Mods::ModEnumerationType _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Mods::ModEnumerationType get_Type()
		{
			return ((::Epic::OnlineServices::Mods::ModEnumerationType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_TYPE_OFFSET))(this, a1);
		}
	};
}
