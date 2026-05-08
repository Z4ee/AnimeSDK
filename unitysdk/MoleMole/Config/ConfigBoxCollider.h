#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x12301F00)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x12301E80)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x12301F90)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x123020C0)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x12302190)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x12302110)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12302220)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBoxCollider_TypeDefinitionIndex = 68078;

	class ConfigBoxCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::Single height; // 0x28
		::System::Single distance; // 0x2C
		::System::Single width; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLEAN_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigBoxCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigBoxCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigBoxCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigBoxCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::Enum_3_F40B865AC61AB8D7 GetColliderType()
		{
			return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}
