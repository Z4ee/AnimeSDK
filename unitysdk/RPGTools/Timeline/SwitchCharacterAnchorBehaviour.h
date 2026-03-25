#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class OverrideTransform; }
namespace RPGTools::Timeline { class SwitchCharacterAnchorData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xABA8D00)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xABA8D20)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xABA8D90)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xABA9310)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_C1F4FF5533AF9A70_OFFSET UNITYSDK_OFFSET(0xABA9500)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_DA1A8A25D0B64A55_OFFSET UNITYSDK_OFFSET(0xABA9260)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xABA8EA0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA8F20)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xABA8D30)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABA9470)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABA9780)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xABA97A0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA97B0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xABA9790)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABA97C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SwitchCharacterAnchorBehaviour_TypeDefinitionIndex = 39183;

	class SwitchCharacterAnchorBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SwitchCharacterAnchorData* Config; // 0x10
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x20
		::UnityEngine::GameObject* _TargetGo; // 0x28
		::UnityEngine::GameObject* _AnchorGo; // 0x30
		::RPGTools::Timeline::OverrideTransform* _OverrideTransformComp; // 0x38
		::UnityEngine::Vector3 _Position; // 0x40
		::UnityEngine::Quaternion _Rotation; // 0x4C
		::System::Boolean _IsDragging; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_ROTATION_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_2_568AE7A1499723FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_568AE7A1499723FD_OFFSET))(this);
		}

		::System::Void Method_2_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_DA1A8A25D0B64A55(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_DA1A8A25D0B64A55_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_2_C1F4FF5533AF9A70(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_METHOD_2_C1F4FF5533AF9A70_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
