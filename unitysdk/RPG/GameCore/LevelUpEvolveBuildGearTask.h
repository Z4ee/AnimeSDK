#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LevelUpEvolveBuildGear; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1978A4C0)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1978A490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUpEvolveBuildGearTask_TypeDefinitionIndex = 52642;

	class LevelUpEvolveBuildGearTask : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LevelUpEvolveBuildGear*>
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelUpEvolveBuildGear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelUpEvolveBuildGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_ONTASKBEGIN_OFFSET))(this);
		}
	};
}
