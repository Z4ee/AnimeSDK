#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoDirectionDissolve; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_METHOD_2_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0xAB348C0)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB34830)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB34D00)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB34F90)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB34FA0)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB34FB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDirectDissolveBehaviour_TypeDefinitionIndex = 38804;

	class CharacterDirectDissolveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* TargetName; // 0x10
		::RPG::Client::MonoDirectionDissolve* _TargetRoot; // 0x18
		::UnityEngine::Transform* _TargetQuad; // 0x20
		::UnityEngine::Transform* _EntityRoot; // 0x28
		::System::Boolean EnableDissolve; // 0x30
		::UnityEngine::Vector3 Position; // 0x34
		::UnityEngine::Vector3 Rotation; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_C8EED11299FD17DB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_METHOD_2_C8EED11299FD17DB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
