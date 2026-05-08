#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CHAPTERGRIDNOISECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFB00770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChapterGridNoiseConfig_TypeDefinitionIndex = 45286;

	class ChapterGridNoiseConfig : public ::System::Object
	{
	public:
		::System::Single noiseIntensity; // 0x10
		::UnityEngine::Vector2 noiseTexTiling; // 0x14
		::UnityEngine::Vector2 noiseUVSpeed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHAPTERGRIDNOISECONFIG__CTOR_OFFSET))(this);
		}
	};
}
