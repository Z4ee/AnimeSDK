#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPGTools::Timeline { class CharacterLookAtData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAB37E50)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB37DF0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAB37DA0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB37C00)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xAB37700)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xAB37D50)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB37C40)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB37CC0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB37DE0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xAB37ED0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB37EB0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB37EC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterLookAtBehaviour_TypeDefinitionIndex = 38827;

	class CharacterLookAtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterLookAtData* Config; // 0x20
		::UnityEngine::GameObject* Target; // 0x28
		::RPG::Client::CharacterMonoAvatar* _CharacterMonoAvatar; // 0x30
		::System::Single _currentTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_EBAB6A35C21A2A5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_EBAB6A35C21A2A5B_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
		}
	};
}
