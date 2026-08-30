#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Sprite; }

#define MIHOYO_SDK_UI_CHANNELICONIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B9C9C90)
#define MIHOYO_SDK_UI_CHANNELICONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C9E40)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int ChannelIconImage_TypeDefinitionIndex = 8348;

	class ChannelIconImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Sprite* SteamSprite; // 0x18
		::UnityEngine::Sprite* CXSprite; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELICONIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELICONIMAGE_AWAKE_OFFSET))(this);
		}
	};
}
