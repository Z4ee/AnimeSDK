#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoFeaturePoint; }
namespace MoleMole { class MonoInteractionPoint; }
namespace MoleMole { class MonoItemState; }
namespace NPCCrowd { class NPCMonoDelegate; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceShadowProxyComponentInfo; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceSimpleModelComponentInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine::AI { class NavMeshObstacle; }

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_GET_GOPOS_OFFSET UNITYSDK_OFFSET(0xEC8EC80)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_GET_GOROT_OFFSET UNITYSDK_OFFSET(0xEC8F020)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_GET_GO_OFFSET UNITYSDK_OFFSET(0xEC8EC60)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_SET_GOPOS_OFFSET UNITYSDK_OFFSET(0xEC8EE70)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_SET_GOROT_OFFSET UNITYSDK_OFFSET(0xEC8F1F0)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_SET_GO_OFFSET UNITYSDK_OFFSET(0xEC8EC70)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC8F390)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReference_TypeDefinitionIndex = 70704;

	class NPCAvatarGOReference : public ::System::Object
	{
	public:
		::NPCCrowd::Avatar::NPCAvatarGOReferenceShadowProxyComponentInfo* shadowProxyComponentInfo; // 0x10
		::UnityEngine::Animator* animator; // 0x18
		::UnityEngine::GameObject* _go; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* parts; // 0x28
		::MoleMole::MonoFeaturePoint* monoFeaturePointComp; // 0x30
		::NPCCrowd::Avatar::NPCAvatarGOReferenceSimpleModelComponentInfo* simpleModelComponentInfo; // 0x38
		::MoleMole::MonoItemState* monoItemStateComp; // 0x40
		::UnityEngine::Collider* collider; // 0x48
		::NPCCrowd::NPCMonoDelegate* monoDelegate; // 0x50
		::UnityEngine::GameObject* audioEmitter; // 0x58
		::UnityEngine::Rigidbody* rigid; // 0x60
		::MoleMole::MonoInteractionPoint* monoInteractionPointComp; // 0x68
		::UnityEngine::AI::NavMeshObstacle* navObs; // 0x70
		::System::Int32 shadowProxyMeshIndex; // 0x78
		::System::Int32 id; // 0x7C
		::UnityEngine::Quaternion bornRot; // 0x80
		::UnityEngine::Vector3 bornPosition; // 0x90
		::System::Single audioLastTriggerTime; // 0x9C
		::System::Boolean audioEnableTrigger; // 0xA0
		::System::UInt32 audioLoopEventID; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_go()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_GET_GO_OFFSET))(this);
		}

		::System::Void set_go(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_SET_GO_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_goPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_GET_GOPOS_OFFSET))(this);
		}

		::System::Void set_goPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_SET_GOPOS_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_goRot()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_GET_GOROT_OFFSET))(this);
		}

		::System::Void set_goRot(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCE_SET_GOROT_OFFSET))(this, value);
		}
	};
}
