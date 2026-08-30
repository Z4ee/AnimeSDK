#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET UNITYSDK_OFFSET(0xDA6E940)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET UNITYSDK_OFFSET(0xDA6EA20)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET UNITYSDK_OFFSET(0xDA6D860)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_PhotoGraphAim_TypeDefinitionIndex = 69392;

	class PhotoGraphAimContainer_PhotoGraphAim : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NodeStatus; // 0x10
		::UnityEngine::Animation* AnimationPending; // 0x18
		::UnityEngine::Animation* AnimationBg; // 0x20
		::UnityEngine::Transform* TargetTransform; // 0x28
		::UnityEngine::RectTransform* RectPending; // 0x30
		::RPG::GameCore::GameEntity* TargetEntity; // 0x38
		::UnityEngine::GameObject* ManualAimGO; // 0x40
		::UnityEngine::Transform* NodeFail; // 0x48
		::UnityEngine::UI::SmoothMask* ProgressSM; // 0x50
		::UnityEngine::Transform* NodeSuccess; // 0x58
		::UnityEngine::UI::Image* NodeImage; // 0x60
		::UnityEngine::Collider* TargetCollider; // 0x68
		::UnityEngine::GameObject* PendingAimGO; // 0x70
		::UnityEngine::RectTransform* Rect; // 0x78
		::System::Int32 UnionNodeIndex; // 0x80
		::System::Int32 UnionIndex; // 0x84
		::UnityEngine::Vector3 TransformOffset; // 0x88
		::UnityEngine::Vector3 WorldPos; // 0x94
		::System::Int32 UnionNodeUnitIndex; // 0xA0
		::UnityEngine::Vector3 ExtraAimTagOffset; // 0xA4
		::System::Boolean ShowTag; // 0xB0
		::System::Boolean IsInUse; // 0xB1
		::System::Boolean _IsSuccessStyle; // 0xB2
		::System::Boolean UseAimUnion; // 0xB3
		::System::Single ShowTagDirRange; // 0xB4
		::RPG::GameCore::PhotoGraphAimIdentifyType IdentifyType; // 0xB8
		::System::Int32 HandlerIndex; // 0xBC
		::RPG::Client::PhotoGraphAimUnionNodeType AimNodeType; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET))(this);
		}

		::System::Void SwitchToNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET))(this);
		}

		::System::Void SwitchToSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET))(this);
		}
	};
}
