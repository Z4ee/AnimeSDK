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

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET UNITYSDK_OFFSET(0x17F57310)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET UNITYSDK_OFFSET(0x17F573F0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17F56220)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_PhotoGraphAim_TypeDefinitionIndex = 66300;

	class PhotoGraphAimContainer_PhotoGraphAim : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NodeSuccess; // 0x10
		::UnityEngine::GameObject* PendingAimGO; // 0x18
		::UnityEngine::Transform* NodeStatus; // 0x20
		::UnityEngine::UI::SmoothMask* ProgressSM; // 0x28
		::UnityEngine::Animation* AnimationPending; // 0x30
		::UnityEngine::Animation* AnimationBg; // 0x38
		::UnityEngine::Transform* NodeFail; // 0x40
		::UnityEngine::GameObject* ManualAimGO; // 0x48
		::UnityEngine::Collider* TargetCollider; // 0x50
		::UnityEngine::RectTransform* Rect; // 0x58
		::UnityEngine::RectTransform* RectPending; // 0x60
		::UnityEngine::Transform* TargetTransform; // 0x68
		::RPG::GameCore::GameEntity* TargetEntity; // 0x70
		::UnityEngine::UI::Image* NodeImage; // 0x78
		::System::Int32 UnionNodeUnitIndex; // 0x80
		::System::Int32 UnionNodeIndex; // 0x84
		::System::Int32 HandlerIndex; // 0x88
		::RPG::GameCore::PhotoGraphAimIdentifyType IdentifyType; // 0x8C
		::System::Int32 UnionIndex; // 0x90
		::UnityEngine::Vector3 TransformOffset; // 0x94
		::System::Single ShowTagDirRange; // 0xA0
		::RPG::Client::PhotoGraphAimUnionNodeType AimNodeType; // 0xA4
		::UnityEngine::Vector3 ExtraAimTagOffset; // 0xA8
		::System::Boolean IsInUse; // 0xB4
		::System::Boolean ShowTag; // 0xB5
		::System::Boolean UseAimUnion; // 0xB6
		::System::Boolean _IsSuccessStyle; // 0xB7
		::UnityEngine::Vector3 WorldPos; // 0xB8

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
