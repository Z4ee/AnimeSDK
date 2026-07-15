#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_AIRSHIPCARCOLLISION_AWAKE_OFFSET UNITYSDK_OFFSET(0x17EC4800)
#define RPG_CLIENT_AIRSHIPCARCOLLISION_ISIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x17EC3D10)
#define RPG_CLIENT_AIRSHIPCARCOLLISION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17EC47A0)
#define RPG_CLIENT_AIRSHIPCARCOLLISION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17EC4740)
#define RPG_CLIENT_AIRSHIPCARCOLLISION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x17EC4180)
#define RPG_CLIENT_AIRSHIPCARCOLLISION_REGISTERIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x17EC38A0)
#define RPG_CLIENT_AIRSHIPCARCOLLISION_RESET_OFFSET UNITYSDK_OFFSET(0x17EC4850)
#define RPG_CLIENT_AIRSHIPCARCOLLISION_UNREGISTERIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x17EC3A30)
#define RPG_CLIENT_AIRSHIPCARCOLLISION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EC4980)
#define RPG_CLIENT_AIRSHIPCARCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC4970)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarCollision_TypeDefinitionIndex = 57149;

	class AirshipCarCollision : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::RPG::GameCore::GameEntity*>*>** StaticGet_IgnoreCollisionEntities()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::RPG::GameCore::GameEntity*>*>**)Il2CppClass::FromTypeDefinitionIndex(AirshipCarCollision_TypeDefinitionIndex)->GetStaticField(0x4F1D0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_AdvertBoardNPC()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AirshipCarCollision_TypeDefinitionIndex)->GetStaticField(0x4F1D8);
		}
		// static const ::System::Int32 HitPlayerQuestID = 0x3E4D3E; // 0x0
		// static const ::System::Int32 HitAdvertBoardQuestID = 0x3E4D3F; // 0x0
		::UnityEngine::Collider* collider; // 0x18
		::UnityEngine::LayerMask desiredLayers; // 0x20
		::Il2CppArray<::RPG::GameCore::EntityType>* desiredEntityTypes; // 0x28
		::RPG::GameCore::AdventureHitConfig* hitConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_REGISTERIGNOREENTITY_OFFSET))(a1);
		}

		static ::System::Void UnregisterIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_UNREGISTERIGNOREENTITY_OFFSET))(a1);
		}

		static ::System::Boolean IsIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_ISIGNOREENTITY_OFFSET))(a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_ONDISABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARCOLLISION_RESET_OFFSET))(this);
		}
	};
}
