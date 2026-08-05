#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x148755A0)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x14875750)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x14875630)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x148757C0)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x14875890)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x14875810)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x14875920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSphereCollider_TypeDefinitionIndex = 85706;

	class ConfigSphereCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::Single radius; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigSphereCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigSphereCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigSphereCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigSphereCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_CLEAN_OFFSET))(this);
		}

		::Enum_3_F40B865AC61AB8D7 GetColliderType()
		{
			return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}
