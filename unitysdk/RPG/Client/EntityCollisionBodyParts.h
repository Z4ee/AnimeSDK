#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EntityCollisionBodyParts_CollisionBodyPart; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_COMPAREBYPRIORITY_OFFSET UNITYSDK_OFFSET(0xA2890D0)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_FINDBODYPARTANCHORHITPOSITION_OFFSET UNITYSDK_OFFSET(0xA2896A0)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_FINDBODYPARTANCHORMODEL_OFFSET UNITYSDK_OFFSET(0xA289560)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_FINDBODYPARTINDEX_OFFSET UNITYSDK_OFFSET(0xA289810)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_METHOD_5_5F32FD20E92D0466_OFFSET UNITYSDK_OFFSET(0xA289BB0)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_SETUPPARTSMAPPING_OFFSET UNITYSDK_OFFSET(0xA289340)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_TRIGGERBODYPARTHITANIMSTATE_OFFSET UNITYSDK_OFFSET(0xA289960)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_UPDATE_OFFSET UNITYSDK_OFFSET(0xA28A040)
#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS__CTOR_OFFSET UNITYSDK_OFFSET(0xA28A160)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityCollisionBodyParts_TypeDefinitionIndex = 63081;

	class EntityCollisionBodyParts : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EntityCollisionBodyParts_CollisionBodyPart*>* BodyParts; // 0x18
		::UnityEngine::Animator* MainBodyAnimatorRef; // 0x20
		::RPG::GameCore::AdventureCharacterController* OwnerControllerRef; // 0x28
		::System::Int32 Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareByPriority(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_COMPAREBYPRIORITY_OFFSET))(this, a1, a2);
		}

		::System::Void SetupPartsMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_SETUPPARTSMAPPING_OFFSET))(this);
		}

		::UnityEngine::GameObject* FindBodyPartAnchorModel(::UnityEngine::Collider* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_FINDBODYPARTANCHORMODEL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FindBodyPartAnchorHitPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_FINDBODYPARTANCHORHITPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 FindBodyPartIndex(::UnityEngine::Collider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_FINDBODYPARTINDEX_OFFSET))(this, a1);
		}

		::System::Boolean TriggerBodyPartHitAnimState(::System::Int32 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_TRIGGERBODYPARTHITANIMSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_UPDATE_OFFSET))(this);
		}

		::System::Single Method_5_5F32FD20E92D0466(::UnityEngine::Transform* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_METHOD_5_5F32FD20E92D0466_OFFSET))(this, a1, a2);
		}
	};
}
