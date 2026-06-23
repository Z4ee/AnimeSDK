#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }

#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CBD3240)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_GET_MOD_OFFSET UNITYSDK_OFFSET(0x1CBD3260)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CBD3250)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_SET_MOD_OFFSET UNITYSDK_OFFSET(0x1CBD3270)
#define EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD3280)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int UpdateModOptions_TypeDefinitionIndex = 35573;

	class UpdateModOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Mods::ModIdentifier* _Mod_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Mods::ModIdentifier* get_Mod()
		{
			return ((::Epic::OnlineServices::Mods::ModIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_GET_MOD_OFFSET))(this);
		}

		::System::Void set_Mod(::Epic::OnlineServices::Mods::ModIdentifier* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_UPDATEMODOPTIONS_SET_MOD_OFFSET))(this, value);
		}
	};
}
