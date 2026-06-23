#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1270FE90)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x12710040)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1270FF20)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x127100B0)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x12710180)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x12710100)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12710210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCylinderCollider_TypeDefinitionIndex = 52065;

	class ConfigCylinderCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::Single radius; // 0x28
		::System::Single height; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigCylinderCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigCylinderCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigCylinderCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigCylinderCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_CLEAN_OFFSET))(this);
		}

		::Enum_3_F40B865AC61AB8D7 GetColliderType()
		{
			return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}
