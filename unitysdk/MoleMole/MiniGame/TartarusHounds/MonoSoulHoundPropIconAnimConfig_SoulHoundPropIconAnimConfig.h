#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOSOULHOUNDPROPICONANIMCONFIG_SOULHOUNDPROPICONANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10E2AB40)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoSoulHoundPropIconAnimConfig_SoulHoundPropIconAnimConfig_TypeDefinitionIndex = 38520;

	class MonoSoulHoundPropIconAnimConfig_SoulHoundPropIconAnimConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 propIconOffset; // 0x10
		::System::Single scale1; // 0x18
		::System::Single scale1PlayTime; // 0x1C
		::System::String* scale1Curve; // 0x20
		::System::Single scale2; // 0x28
		::System::Single scale2PlayTime; // 0x2C
		::System::String* scale2Curve; // 0x30
		::System::Single stayTime; // 0x38
		::System::Single flashTime; // 0x3C
		::System::Single flashFrequency; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOSOULHOUNDPROPICONANIMCONFIG_SOULHOUNDPROPICONANIMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
