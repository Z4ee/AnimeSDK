#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/BigSceneCommonSkillConfig.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENECOMMONSKILL_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x12AF8030)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENECOMMONSKILL_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x12AF8170)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENECOMMONSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF82B0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_BigSceneCommonSkill_TypeDefinitionIndex = 57043;

	class BigSceneMiscLogicSubSystem_BigSceneCommonSkill : public ::System::Object
	{
	public:
		::MoleMole::BigSceneCommonSkillConfig Config; // 0x10
		::Foundation::Unreal::FGameplayTag Tag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENECOMMONSKILL__CTOR_OFFSET))(this);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENECOMMONSKILL_ACTIVATE_OFFSET))(this);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENECOMMONSKILL_DEACTIVATE_OFFSET))(this);
		}
	};
}
