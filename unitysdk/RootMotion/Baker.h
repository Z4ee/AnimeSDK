#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/Baker_Mode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion { class Baker_BakerDelegate; }
namespace RootMotion { class Baker_ClipSettings; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define ROOTMOTION_BAKER_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1B9A0550)
#define ROOTMOTION_BAKER_BAKECLIP_OFFSET UNITYSDK_OFFSET(0x1B9A0600)
#define ROOTMOTION_BAKER_GET_BAKINGPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B9A05C0)
#define ROOTMOTION_BAKER_GET_CLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x1B9A05E0)
#define ROOTMOTION_BAKER_GET_ISBAKING_OFFSET UNITYSDK_OFFSET(0x1B9A05A0)
#define ROOTMOTION_BAKER_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B9A04B0)
#define ROOTMOTION_BAKER_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1B9A0460)
#define ROOTMOTION_BAKER_SET_BAKINGPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B9A05D0)
#define ROOTMOTION_BAKER_SET_CLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x1B9A05F0)
#define ROOTMOTION_BAKER_SET_ISBAKING_OFFSET UNITYSDK_OFFSET(0x1B9A05B0)
#define ROOTMOTION_BAKER_STARTBAKING_OFFSET UNITYSDK_OFFSET(0x1B9A0610)
#define ROOTMOTION_BAKER_STOPBAKING_OFFSET UNITYSDK_OFFSET(0x1B9A0620)
#define ROOTMOTION_BAKER_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1B9A0500)
#define ROOTMOTION_BAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A0630)

namespace RootMotion
{
	inline static constexpr unsigned int Baker_TypeDefinitionIndex = 36505;

	class Baker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 frameRate; // 0x18
		::System::Single keyReductionError; // 0x1C
		::RootMotion::Baker_Mode mode; // 0x20
		::Il2CppArray<::UnityEngine::AnimationClip*>* animationClips; // 0x28
		::Il2CppArray<::System::String*>* animationStates; // 0x30
		::System::String* saveToFolder; // 0x38
		::System::String* appendName; // 0x40
		::System::String* saveName; // 0x48
		::System::Boolean _isBaking_k__BackingField; // 0x50
		::System::Single _bakingProgress_k__BackingField; // 0x54
		::UnityEngine::Animator* animator; // 0x58
		::UnityEngine::Playables::PlayableDirector* director; // 0x60
		::RootMotion::Baker_BakerDelegate* OnStartClip; // 0x68
		::RootMotion::Baker_BakerDelegate* OnUpdateClip; // 0x70
		::System::Boolean inheritClipSettings; // 0x78
		::RootMotion::Baker_ClipSettings* clipSettings; // 0x80
		::System::Single _clipLength_k__BackingField; // 0x88
		::System::Boolean addLoopFrame; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_ASTHREAD_OFFSET))(this);
		}

		::System::Boolean get_isBaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_GET_ISBAKING_OFFSET))(this);
		}

		::System::Void set_isBaking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_SET_ISBAKING_OFFSET))(this, value);
		}

		::System::Single get_bakingProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_GET_BAKINGPROGRESS_OFFSET))(this);
		}

		::System::Void set_bakingProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_SET_BAKINGPROGRESS_OFFSET))(this, value);
		}

		::System::Single get_clipLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_GET_CLIPLENGTH_OFFSET))(this);
		}

		::System::Void set_clipLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_SET_CLIPLENGTH_OFFSET))(this, value);
		}

		::System::Void BakeClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_BAKECLIP_OFFSET))(this);
		}

		::System::Void StartBaking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_STARTBAKING_OFFSET))(this);
		}

		::System::Void StopBaking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_STOPBAKING_OFFSET))(this);
		}
	};
}
