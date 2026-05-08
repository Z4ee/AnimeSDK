#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1AFD06E0)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AFD08B0)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1AFD0740)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AFD0CA0)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD0D70)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD0D50)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int PlayAnimationSimple_TypeDefinitionIndex = 27053;

	class PlayAnimationSimple : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animation*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Animation*, ::UnityEngine::AnimationClip*>** StaticGet_lastPlayedClips()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Animation*, ::UnityEngine::AnimationClip*>**)Il2CppClass::FromTypeDefinitionIndex(PlayAnimationSimple_TypeDefinitionIndex)->GetStaticField(0x209D0);
		}
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationClip*>* animationClip; // 0x60
		::UnityEngine::WrapMode animationWrap; // 0x68
		::System::Boolean waitActionFinish; // 0x6C
		::System::Single crossFadeTime; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE__CCTOR_OFFSET))();
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONSIMPLE_ONUPDATE_OFFSET))(this);
		}
	};
}
