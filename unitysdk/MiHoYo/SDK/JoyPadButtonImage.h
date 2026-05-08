#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define MIHOYO_SDK_JOYPADBUTTONIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C7BDE0)
#define MIHOYO_SDK_JOYPADBUTTONIMAGE_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x19C7BD00)
#define MIHOYO_SDK_JOYPADBUTTONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7BF80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JoyPadButtonImage_TypeDefinitionIndex = 18870;

	class JoyPadButtonImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Sprite* PS4Sprite; // 0x18
		::UnityEngine::Sprite* XBoxSprite; // 0x20
		::UnityEngine::Sprite* PS5Sprite; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JOYPADBUTTONIMAGE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Sprite* GetSprite(::System::String* strJoyPadType)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JOYPADBUTTONIMAGE_GETSPRITE_OFFSET))(this, strJoyPadType);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JOYPADBUTTONIMAGE_AWAKE_OFFSET))(this);
		}
	};
}
