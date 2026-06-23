#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameEngineScriptBase.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_METHOD_6_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x1B856810)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_METHOD_6_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1B856760)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8568A0)

namespace MoleMole::Arcade::CompanionProject::Client
{
	inline static constexpr unsigned int CompanionBehaviour_TypeDefinitionIndex = 90811;

	class CompanionBehaviour : public ::MoleMole::MiniGame::MiniGameEngineScriptBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_DF2A78D8DB25ED05()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_METHOD_6_DF2A78D8DB25ED05_OFFSET))(this);
		}

		::System::Void Method_6_2340068C22DFE332()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_METHOD_6_2340068C22DFE332_OFFSET))(this);
		}
	};
}
