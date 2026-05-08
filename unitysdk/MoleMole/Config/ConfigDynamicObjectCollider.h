#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1752FCC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x1752FE60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1752FD50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x1752FF40)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1752FF90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1752FED0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17530020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicObjectCollider_TypeDefinitionIndex = 72362;

	class ConfigDynamicObjectCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::String* Path; // 0x28
		::System::Single Size; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicObjectCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigDynamicObjectCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigDynamicObjectCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigDynamicObjectCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_CLEAN_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::Enum_3_F40B865AC61AB8D7 GetColliderType()
		{
			return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTCOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}
