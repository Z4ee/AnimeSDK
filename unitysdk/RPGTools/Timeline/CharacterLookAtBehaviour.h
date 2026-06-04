#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPGTools::Timeline { class CharacterLookAtData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xCFEFD30)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCFEFCD0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCFEFC80)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCFEFAE0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xCFEF5D0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xCFEFC30)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xCFEFB20)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCFEFBA0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFEFCC0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xCFEFDB0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xCFEFD90)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCFEFDA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterLookAtBehaviour_TypeDefinitionIndex = 45277;

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

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, a1);
		}
	};
}
