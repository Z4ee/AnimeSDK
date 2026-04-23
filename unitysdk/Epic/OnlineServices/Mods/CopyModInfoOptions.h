#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8ECFD60)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x8ECFD80)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8ECFD70)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x8ECFD90)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECFDA0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int CopyModInfoOptions_TypeDefinitionIndex = 41761;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Mods::ModEnumerationType get_Type()
		{
			return ((::Epic::OnlineServices::Mods::ModEnumerationType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONS_SET_TYPE_OFFSET))(this, value);
		}
	};
}
