#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/ParadoxNotion/PlayDirections.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_FINDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E236850)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E235F20)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E2360F0)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONINIT_OFFSET UNITYSDK_OFFSET(0x1E235F80)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E236B40)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E236C10)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int PlayAnimationAdvanced_TypeDefinitionIndex = 30740;

	class PlayAnimationAdvanced : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animation*>
	{
	public:
		::System::String* animationToPlay; // 0x60
		::UnityEngine::Transform* mixTransform; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationClip*>* animationClip; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* mixTransformName; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* animationLayer; // 0x80
		::ParadoxNotion::PlayDirections playDirection; // 0x88
		::System::Boolean queueAnimation; // 0x8C
		::System::Boolean waitActionFinish; // 0x8D
		::System::Int32 dir; // 0x90
		::System::Single crossFadeTime; // 0x94
		::UnityEngine::AnimationBlendMode blendMode; // 0x98
		::System::Single playbackSpeed; // 0x9C
		::UnityEngine::WrapMode animationWrap; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONUPDATE_OFFSET))(this);
		}

		::UnityEngine::Transform* FindTransform(::UnityEngine::Transform* parent, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_FINDTRANSFORM_OFFSET))(this, parent, name);
		}
	};
}
