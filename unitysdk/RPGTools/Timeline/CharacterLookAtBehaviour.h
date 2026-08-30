#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPGTools::Timeline { class CharacterLookAtData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1D13EE70)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D13ECD0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_METHOD_3_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x1D13E7C0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1D13EE20)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1D13ED10)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1D13ED90)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13EEB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterLookAtBehaviour_TypeDefinitionIndex = 48435;

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
	};
}
