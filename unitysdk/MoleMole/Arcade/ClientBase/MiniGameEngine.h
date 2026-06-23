#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_391;

#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E848590)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E848770)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E8488A0)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E848640)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E848940)

namespace MoleMole::Arcade::ClientBase
{
	inline static constexpr unsigned int MiniGameEngine_TypeDefinitionIndex = 90984;

	class MiniGameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_F80BFD5B986D5503 miniGameType; // 0x18
		::Class_0_16E4307DCC419505_391* gameLogic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_ONDESTROY_OFFSET))(this);
		}
	};
}
