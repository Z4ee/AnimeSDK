#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameEngineScriptBase.h"

#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_METHOD_6_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1C4EB100)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_METHOD_6_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1C4EB060)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EB230)

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BRMonoEngine_TypeDefinitionIndex = 83928;

	class BRMonoEngine : public ::MoleMole::MiniGame::MiniGameEngineScriptBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_DF2A78D8DB25ED05()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_METHOD_6_DF2A78D8DB25ED05_OFFSET))(this);
		}

		::System::Void Method_6_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_METHOD_6_D3129FE8DF635B48_OFFSET))(this);
		}
	};
}
