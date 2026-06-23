#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CHAPTERGRIDNOISECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE965C10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChapterGridNoiseConfig_TypeDefinitionIndex = 67251;

	class ChapterGridNoiseConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 noiseUVSpeed; // 0x10
		::UnityEngine::Vector2 noiseTexTiling; // 0x18
		::System::Single noiseIntensity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHAPTERGRIDNOISECONFIG__CTOR_OFFSET))(this);
		}
	};
}
