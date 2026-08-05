#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOSOULHOUNDGAMEENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x144DD480)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoSoulHoundGameEndConfig_TypeDefinitionIndex = 42679;

	class MonoSoulHoundGameEndConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single dogClickAnimTime; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOSOULHOUNDGAMEENDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
