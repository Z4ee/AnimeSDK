#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_FROMBACKWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA419400)
#define RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_FROMFORWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA4193A0)
#define RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_TOBACKWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA419340)
#define RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_TOFORWARDANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA4192E0)
#define RPG_CLIENT_GACHASUBTABCONTENTANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA419290)
#define RPG_CLIENT_GACHASUBTABCONTENTANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xA419460)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaSubTabContentAnimation_TypeDefinitionIndex = 67065;

	class GachaSubTabContentAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* ToForwardAnimClip; // 0x18
		::UnityEngine::AnimationClip* ToBackwardAnimClip; // 0x20
		::UnityEngine::AnimationClip* FromForwardAnimClip; // 0x28
		::UnityEngine::AnimationClip* FromBackwardAnimClip; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHASUBTABCONTENTANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHASUBTABCONTENTANIMATION_ONDESTROY_OFFSET))(this);
		}

		::System::String* get_ToForwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_TOFORWARDANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_ToBackwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_TOBACKWARDANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_FromForwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_FROMFORWARDANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_FromBackwardAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHASUBTABCONTENTANIMATION_GET_FROMBACKWARDANIMCLIPNAME_OFFSET))(this);
		}
	};
}
