#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCEE060)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DCEE080)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCEE070)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DCEE090)
#define EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEE0A0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int EnumerateModsOptions_TypeDefinitionIndex = 45611;

	class EnumerateModsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::Mods::ModEnumerationType _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Mods::ModEnumerationType get_Type()
		{
			return ((::Epic::OnlineServices::Mods::ModEnumerationType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ENUMERATEMODSOPTIONS_SET_TYPE_OFFSET))(this, a1);
		}
	};
}
