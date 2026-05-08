#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class GameObjectPosBehavior_UIAdaptorRectTransform; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1BB057A0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1BB05AA0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1BB05490)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1BB05AC0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1BB05AB0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_RECORDERINITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BB05A30)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_RECORDPOS_OFFSET UNITYSDK_OFFSET(0x1BB05190)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_RECOVERRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BB05310)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_SETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BB054A0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BB05620)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB05AD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GameObjectPosBehavior_TypeDefinitionIndex = 30674;

	class GameObjectPosBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean unInited; // 0x10
		::MoleMole::Timeline::GameObjectPosBehavior_UIAdaptorRectTransform* RectTransform; // 0x18
		::MoleMole::Timeline::GameObjectPosBehavior_UIAdaptorRectTransform* InitRectTransform; // 0x20
		::UnityEngine::GameObject* referenceObj; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void RecordPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_RECORDPOS_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void SetRectTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_SETRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_INITDATA_OFFSET))(this, referenceObj);
		}

		::System::Void RecorderInitTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_RECORDERINITTRANSFORM_OFFSET))(this);
		}

		::System::Void RecoverRectTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_RECOVERRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void SetTransform(::UnityEngine::Transform* transform, ::MoleMole::Timeline::GameObjectPosBehavior_UIAdaptorRectTransform* adaptorParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Timeline::GameObjectPosBehavior_UIAdaptorRectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_SETTRANSFORM_OFFSET))(this, transform, adaptorParams);
		}
	};
}
