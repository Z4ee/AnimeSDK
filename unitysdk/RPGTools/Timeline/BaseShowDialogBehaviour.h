#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UILUAPATH_OFFSET UNITYSDK_OFFSET(0xB898920)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UINAME_OFFSET UNITYSDK_OFFSET(0xB898940)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UIPARAM_OFFSET UNITYSDK_OFFSET(0xB898960)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB898980)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UILUAPATH_OFFSET UNITYSDK_OFFSET(0xB898930)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UINAME_OFFSET UNITYSDK_OFFSET(0xB898950)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UIPARAM_OFFSET UNITYSDK_OFFSET(0xB898970)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB898B20)
#define RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB898B30)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BaseShowDialogBehaviour_TypeDefinitionIndex = 45026;

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

		::System::Void set_UILuaPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UILUAPATH_OFFSET))(this, value);
		}

		::System::String* get_UIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UINAME_OFFSET))(this);
		}

		::System::Void set_UIName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UINAME_OFFSET))(this, value);
		}

		::System::Object* get_UIParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_GET_UIPARAM_OFFSET))(this);
		}

		::System::Void set_UIParam(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_SET_UIPARAM_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASESHOWDIALOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
