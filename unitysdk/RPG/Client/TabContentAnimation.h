#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_TABCONTENTANIMATION_GET_FROMBACKWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x1B401630)
#define RPG_CLIENT_TABCONTENTANIMATION_GET_FROMFORWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x1B401540)
#define RPG_CLIENT_TABCONTENTANIMATION_GET_TOBACKWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x1B401450)
#define RPG_CLIENT_TABCONTENTANIMATION_GET_TOFORWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x1B401360)
#define RPG_CLIENT_TABCONTENTANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B401310)
#define RPG_CLIENT_TABCONTENTANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B401720)

namespace RPG::Client
{
	inline static constexpr unsigned int TabContentAnimation_TypeDefinitionIndex = 72748;

	class TabContentAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* ToForwardAnimClip; // 0x18
		::UnityEngine::AnimationClip* ToBackwardAnimClip; // 0x20
		::UnityEngine::AnimationClip* FromForwardAnimClip; // 0x28
		::UnityEngine::AnimationClip* FromBackwardAnimClip; // 0x30
		::System::Boolean IsDifferentInMobile; // 0x38
		::UnityEngine::AnimationClip* ToForwardAnimClipMobile; // 0x40
		::UnityEngine::AnimationClip* ToBackwardAnimClipMobile; // 0x48
		::UnityEngine::AnimationClip* FromForwardAnimClipMobile; // 0x50
		::UnityEngine::AnimationClip* FromBackwardAnimClipMobile; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABCONTENTANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABCONTENTANIMATION_ONDESTROY_OFFSET))(this);
		}

		::System::String* get_ToForwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABCONTENTANIMATION_GET_TOFORWARDANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_ToBackwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABCONTENTANIMATION_GET_TOBACKWARDANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_FromForwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABCONTENTANIMATION_GET_FROMFORWARDANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_FromBackwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABCONTENTANIMATION_GET_FROMBACKWARDANIMCLIPNAME_OFFSET))(this);
		}
	};
}
