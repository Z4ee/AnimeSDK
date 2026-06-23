#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_391;

#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15136B70)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15136CF0)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15136E20)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15136BC0)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15136E80)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameEngineScriptBase_TypeDefinitionIndex = 81153;

	class MiniGameEngineScriptBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_F80BFD5B986D5503 Field_5_0; // 0x18
		::Class_0_16E4307DCC419505_391* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_ONDESTROY_OFFSET))(this);
		}
	};
}
