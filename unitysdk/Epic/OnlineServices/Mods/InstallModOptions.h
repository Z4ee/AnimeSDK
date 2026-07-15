#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class ModIdentifier; }

#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BF9CB60)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_GET_MOD_OFFSET UNITYSDK_OFFSET(0x1BF9CB80)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_GET_REMOVEAFTEREXIT_OFFSET UNITYSDK_OFFSET(0x1BF9CBA0)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BF9CB70)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_SET_MOD_OFFSET UNITYSDK_OFFSET(0x1BF9CB90)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_SET_REMOVEAFTEREXIT_OFFSET UNITYSDK_OFFSET(0x1BF9CBB0)
#define EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9CBC0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int InstallModOptions_TypeDefinitionIndex = 43433;

	class InstallModOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Mods::ModIdentifier* _Mod_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::System::Boolean _RemoveAfterExit_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Mods::ModIdentifier* get_Mod()
		{
			return ((::Epic::OnlineServices::Mods::ModIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_GET_MOD_OFFSET))(this);
		}

		::System::Void set_Mod(::Epic::OnlineServices::Mods::ModIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModIdentifier*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_SET_MOD_OFFSET))(this, a1);
		}

		::System::Boolean get_RemoveAfterExit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_GET_REMOVEAFTEREXIT_OFFSET))(this);
		}

		::System::Void set_RemoveAfterExit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_INSTALLMODOPTIONS_SET_REMOVEAFTEREXIT_OFFSET))(this, a1);
		}
	};
}
