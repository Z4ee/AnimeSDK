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

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET UNITYSDK_OFFSET(0xDAF6D50)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET UNITYSDK_OFFSET(0xDAF6E30)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET UNITYSDK_OFFSET(0xDAF6680)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_PhotoGraphAim_TypeDefinitionIndex = 69428;

	class PhotoGraphAimContainer_PhotoGraphAim : public ::System::Object
	{
	public:
		::UnityEngine::UI::SmoothMask* ProgressSM; // 0x10
		::UnityEngine::GameObject* ManualAimGO; // 0x18
		::UnityEngine::GameObject* PendingAimGO; // 0x20
		::UnityEngine::Transform* TargetTransform; // 0x28
		::UnityEngine::Transform* NodeFail; // 0x30
		::UnityEngine::Collider* TargetCollider; // 0x38
		::UnityEngine::RectTransform* Rect; // 0x40
		::UnityEngine::Transform* NodeStatus; // 0x48
		::UnityEngine::UI::Image* NodeImage; // 0x50
		::UnityEngine::Animation* AnimationPending; // 0x58
		::UnityEngine::Animation* AnimationBg; // 0x60
		::UnityEngine::RectTransform* RectPending; // 0x68
		::UnityEngine::Transform* NodeSuccess; // 0x70
		::RPG::GameCore::GameEntity* TargetEntity; // 0x78
		::System::Int32 UnionIndex; // 0x80
		::System::Single ShowTagDirRange; // 0x84
		::System::Boolean ShowTag; // 0x88
		::System::Boolean UseAimUnion; // 0x89
		::System::Boolean _IsSuccessStyle; // 0x8A
		::System::Boolean IsInUse; // 0x8B
		::UnityEngine::Vector3 TransformOffset; // 0x8C
		::UnityEngine::Vector3 WorldPos; // 0x98
		::System::Int32 UnionNodeUnitIndex; // 0xA4
		::RPG::Client::PhotoGraphAimUnionNodeType AimNodeType; // 0xA8
		::System::Int32 UnionNodeIndex; // 0xAC
		::System::Int32 HandlerIndex; // 0xB0
		::RPG::GameCore::PhotoGraphAimIdentifyType IdentifyType; // 0xB4
		::UnityEngine::Vector3 ExtraAimTagOffset; // 0xB8

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
