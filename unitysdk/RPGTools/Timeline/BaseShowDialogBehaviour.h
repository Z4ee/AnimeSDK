#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UILUAPATH_OFFSET UNITYSDK_OFFSET(0xE8178F0)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UINAME_OFFSET UNITYSDK_OFFSET(0xE817910)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UIPARAM_OFFSET UNITYSDK_OFFSET(0xE817930)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE817950)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UILUAPATH_OFFSET UNITYSDK_OFFSET(0xE817900)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UINAME_OFFSET UNITYSDK_OFFSET(0xE817920)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UIPARAM_OFFSET UNITYSDK_OFFSET(0xE817940)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE817AE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BaseShowDialogBehaviour_TypeDefinitionIndex = 48752;

	class BaseShowDialogBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _UILuaPath_k__BackingField; // 0x10
		::System::String* _UIName_k__BackingField; // 0x18
		::System::Object* _UIParam_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_UILuaPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UILUAPATH_OFFSET))(this);
		}

		::System::Void set_UILuaPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UILUAPATH_OFFSET))(this, a1);
		}

		::System::String* get_UIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UINAME_OFFSET))(this);
		}

		::System::Void set_UIName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UINAME_OFFSET))(this, a1);
		}

		::System::Object* get_UIParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UIPARAM_OFFSET))(this);
		}

		::System::Void set_UIParam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UIPARAM_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
