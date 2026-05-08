#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::MiniGame::TartarusHounds { class MonoSoulHoundPropIconAnimConfig_SoulHoundPropIconAnimConfig; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOSOULHOUNDPROPICONANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B317D0)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoSoulHoundPropIconAnimConfig_TypeDefinitionIndex = 38519;

	class MonoSoulHoundPropIconAnimConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::MiniGame::TartarusHounds::MonoSoulHoundPropIconAnimConfig_SoulHoundPropIconAnimConfig* config; // 0x58
		::System::Single lowHpFlashFreq; // 0x60
		::UnityEngine::Color lowHpTweenColor; // 0x64
		::System::Single followIconEffectPlayTime; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOSOULHOUNDPROPICONANIMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
