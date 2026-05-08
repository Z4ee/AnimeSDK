#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x181C9B10)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x181C9CC0)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x181C9BA0)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x181C9D30)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x181C9E00)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x181C9D80)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x181C9E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFanCylinderCollider_TypeDefinitionIndex = 38788;

	class ConfigFanCylinderCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::Single InvalidAngle; // 0x28
		::System::Single InvalidRadius; // 0x2C
		::System::Single radius; // 0x30
		::System::Int32 vertexNum; // 0x34
		::System::Int32 numberOfRays; // 0x38
		::System::Int32 angle; // 0x3C
		::System::Single height; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigFanCylinderCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigFanCylinderCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigFanCylinderCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigFanCylinderCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLEAN_OFFSET))(this);
		}

		::Enum_3_F40B865AC61AB8D7 GetColliderType()
		{
			return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}
