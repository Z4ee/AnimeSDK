#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_490;

#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x10BC9380)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10BC9500)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10BC9630)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10BC93D0)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC9690)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameEngineScriptBase_TypeDefinitionIndex = 61830;

	class MiniGameEngineScriptBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_71AA90D596A09AC8 Field_5_0; // 0x18
		::Class_0_16E4307DCC419505_490* Field_5_1; // 0x20

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
