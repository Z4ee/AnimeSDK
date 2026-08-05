#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_7C08F9DD9D0C115D;

#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F1FC170)
#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_START_OFFSET UNITYSDK_OFFSET(0x1F1FBF00)
#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F1FC110)
#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1FC1D0)

namespace MoleMole::Arcade::RabGame
{
	inline static constexpr unsigned int RabGameEngine_TypeDefinitionIndex = 93421;

	class RabGameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_7C08F9DD9D0C115D* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_ONDESTROY_OFFSET))(this);
		}
	};
}
