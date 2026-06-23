#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Nap/NapECS/EcsEntity.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_ENTITY_GET_ISAUTHORITY_OFFSET UNITYSDK_OFFSET(0x13475940)
#define MOLEMOLE_BATTLE_ENTITY_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x13475E90)
#define MOLEMOLE_BATTLE_ENTITY_GET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x13475930)
#define MOLEMOLE_BATTLE_ENTITY_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x134757B0)
#define MOLEMOLE_BATTLE_ENTITY_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13475F90)
#define MOLEMOLE_BATTLE_ENTITY_SETAUTHORITY_OFFSET UNITYSDK_OFFSET(0x13475950)
#define MOLEMOLE_BATTLE_ENTITY_SETDISABLEBYALIVESTATUS_OFFSET UNITYSDK_OFFSET(0x13475EF0)
#define MOLEMOLE_BATTLE_ENTITY_SETDISABLEBYNET_OFFSET UNITYSDK_OFFSET(0x13475F40)
#define MOLEMOLE_BATTLE_ENTITY_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x134757C0)
#define MOLEMOLE_BATTLE_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x134761C0)
#define MOLEMOLE_BATTLE_ENTITY___BASE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13476230)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 67895;

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
