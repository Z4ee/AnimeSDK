#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x134F6950)
#define MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x134F6B00)
#define MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x134F69E0)
#define MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x134F6BF0)
#define MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x134F6C40)
#define MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x134F6B70)
#define MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x134F6CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCapsuleCollider_TypeDefinitionIndex = 77642;

	class ConfigCapsuleCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::Single radius; // 0x28
		::System::Single height; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigCapsuleCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigCapsuleCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigCapsuleCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigCapsuleCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_CLEAN_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::Enum_3_F40B865AC61AB8D7 GetColliderType()
		{
			return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAPSULECOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}
