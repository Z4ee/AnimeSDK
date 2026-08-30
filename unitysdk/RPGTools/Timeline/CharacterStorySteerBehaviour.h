#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class CharacterStorySteerData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_METHOD_2_8F527828D3994AB7_OFFSET UNITYSDK_OFFSET(0x1D146AF0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x1D1464F0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1D1469D0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D1463D0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1D146A50)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1D146AA0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1D146CE0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1D146450)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D146D60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStorySteerBehaviour_TypeDefinitionIndex = 48479;

	class CharacterStorySteerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStorySteerData* Config; // 0x10
		::System::Boolean _IsFirstFrame; // 0x18
		::UnityEngine::GameObject* _TargetGo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_8F527828D3994AB7(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_METHOD_2_8F527828D3994AB7_OFFSET))(this, a1);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERBEHAVIOUR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}
	};
}
