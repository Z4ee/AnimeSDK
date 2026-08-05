#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameEngineScriptBase.h"

#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_METHOD_6_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x1F3E8320)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_METHOD_6_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1F3E8280)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E8450)

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BRMonoEngine_TypeDefinitionIndex = 93310;

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

		::System::Void Method_6_8F537CE539CF0103()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_METHOD_6_8F537CE539CF0103_OFFSET))(this);
		}
	};
}
