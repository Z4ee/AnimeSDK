#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MainQuestDifficultyLevel.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_MAINQUESTDIFFICULTYSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFA9E0)

namespace MoleMole
{
	inline static constexpr unsigned int MainQuestDifficultySettingContext_TypeDefinitionIndex = 47420;

	class MainQuestDifficultySettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::MainQuestDifficultyLevel DifficultyLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINQUESTDIFFICULTYSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
