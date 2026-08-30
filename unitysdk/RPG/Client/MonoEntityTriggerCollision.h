#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B3AF970)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_ISIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x1B3AECA0)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_METHOD_5_008AB2182F1ED765_OFFSET UNITYSDK_OFFSET(0x1B3AF7E0)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1B3AF110)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_REGISTERIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x1B3AE830)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_RESET_OFFSET UNITYSDK_OFFSET(0x1B3AF9C0)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_UNREGISTERIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x1B3AE9C0)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B3AE7C0)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3AFAF0)
#define RPG_CLIENT_MONOENTITYTRIGGERCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3AFAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEntityTriggerCollision_TypeDefinitionIndex = 68554;

	class MonoEntityTriggerCollision : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::RPG::GameCore::GameEntity*>*>** StaticGet_IgnoreCollisionEntities()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::RPG::GameCore::GameEntity*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityTriggerCollision_TypeDefinitionIndex)->GetStaticField(0x13ED0);
		}
		::UnityEngine::Collider* collider; // 0x18
		::UnityEngine::LayerMask desiredLayers; // 0x20
		::Il2CppArray<::RPG::GameCore::EntityType>* desiredEntityTypes; // 0x28
		::Il2CppArray<::System::UInt32>* ignoreNPCIDs; // 0x30
		::RPG::GameCore::AdventureHitConfig* hitConfig; // 0x38
		::System::Single TriggerHitTimeCount; // 0x40
		::System::String* OnPlayerCollisionCustomString; // 0x48
		::System::UInt32 HitPlayerQuestID; // 0x50
		::System::Single ECNLKMLELIJ; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_UPDATE_OFFSET))(this);
		}

		static ::System::Void RegisterIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_REGISTERIGNOREENTITY_OFFSET))(a1);
		}

		static ::System::Void UnregisterIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_UNREGISTERIGNOREENTITY_OFFSET))(a1);
		}

		static ::System::Boolean IsIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_ISIGNOREENTITY_OFFSET))(a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void Method_5_008AB2182F1ED765(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_METHOD_5_008AB2182F1ED765_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYTRIGGERCOLLISION_RESET_OFFSET))(this);
		}
	};
}
