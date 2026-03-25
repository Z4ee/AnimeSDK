#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Sprite; }

#define MIHOYO_SDK_PS_PSBUTTONIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15F7E150)
#define MIHOYO_SDK_PS_PSBUTTONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7E2D0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSButtonImage_TypeDefinitionIndex = 7553;

	class PSButtonImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Sprite* PS4Sprite; // 0x18
		::UnityEngine::Sprite* PS5Sprite; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBUTTONIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBUTTONIMAGE_AWAKE_OFFSET))(this);
		}
	};
}
