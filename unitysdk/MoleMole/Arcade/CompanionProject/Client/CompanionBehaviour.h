#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameEngineScriptBase.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_METHOD_6_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x1B1B8670)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_METHOD_6_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1B1B85C0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B8700)

namespace MoleMole::Arcade::CompanionProject::Client
{
	inline static constexpr unsigned int CompanionBehaviour_TypeDefinitionIndex = 85292;

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
