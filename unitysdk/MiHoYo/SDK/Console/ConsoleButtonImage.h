#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Sprite; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C69340)
#define MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C69A30)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleButtonImage_TypeDefinitionIndex = 19587;

	class ConsoleButtonImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Sprite* PS4Sprite; // 0x18
		::UnityEngine::Sprite* PS5Sprite; // 0x20
		::UnityEngine::Sprite* CXSprite; // 0x28
		::UnityEngine::Sprite* XCloudSprite; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE_AWAKE_OFFSET))(this);
		}
	};
}
