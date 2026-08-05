#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigUIWeapon_KeyValueInfo_WG; }
namespace MoleMole::Config { class WeaponInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B561DC0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B561BC0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B562060)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B5621C0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B5621D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIWeapon_TypeDefinitionIndex = 56475;

	class ConfigUIWeapon : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::WeaponInfo*>* WeaponGroups; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIWeapon_KeyValueInfo_WG*>* KeyValueInfoList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
