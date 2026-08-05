#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Nap/NapECS/EcsEntity.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_ENTITY_GET_ISAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1483F3D0)
#define MOLEMOLE_BATTLE_ENTITY_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x1483F8D0)
#define MOLEMOLE_BATTLE_ENTITY_GET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1483F3C0)
#define MOLEMOLE_BATTLE_ENTITY_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1483F240)
#define MOLEMOLE_BATTLE_ENTITY_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1483F9D0)
#define MOLEMOLE_BATTLE_ENTITY_SETAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1483F3E0)
#define MOLEMOLE_BATTLE_ENTITY_SETDISABLEBYALIVESTATUS_OFFSET UNITYSDK_OFFSET(0x1483F930)
#define MOLEMOLE_BATTLE_ENTITY_SETDISABLEBYNET_OFFSET UNITYSDK_OFFSET(0x1483F980)
#define MOLEMOLE_BATTLE_ENTITY_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x1483F250)
#define MOLEMOLE_BATTLE_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1483FC00)
#define MOLEMOLE_BATTLE_ENTITY___BASE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1483FCB0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 64627;

	class Entity : public ::Nap::NapECS::EcsEntity
	{
	public:
		::UnityEngine::GameObject* _root; // 0x40
		::UnityEngine::Transform* _rootTransform; // 0x48
		::System::Boolean _isAuthority; // 0x50
		::System::Boolean _isDisableByNet; // 0x51
		::System::Boolean _isDisableByAliveStatus; // 0x52
		::MoleMole::Config::EntityType entityType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_Root(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_SET_ROOT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_RootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_GET_ROOTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_IsAuthority()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_GET_ISAUTHORITY_OFFSET))(this);
		}

		::System::Void SetAuthority(::System::Boolean isAuthority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_SETAUTHORITY_OFFSET))(this, isAuthority);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void SetDisableByAliveStatus(::System::Boolean isDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_SETDISABLEBYALIVESTATUS_OFFSET))(this, isDisable);
		}

		::System::Void SetDisableByNet(::System::Boolean isDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_SETDISABLEBYNET_OFFSET))(this, isDisable);
		}

		::System::Void OnClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY_ONCLEAN_OFFSET))(this);
		}

		::System::Void __base_OnClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITY___BASE_ONCLEAN_OFFSET))(this);
		}
	};
}
