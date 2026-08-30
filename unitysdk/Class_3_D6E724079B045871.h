#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSkillPerformAbilityFinish; }

#define CLASS_3_D6E724079B045871_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189FE230)
#define CLASS_3_D6E724079B045871_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x189FDF60)
#define CLASS_3_D6E724079B045871_TICK_OFFSET UNITYSDK_OFFSET(0x189FE0C0)
#define CLASS_3_D6E724079B045871__CTOR_OFFSET UNITYSDK_OFFSET(0x189FDF30)

inline static constexpr unsigned int Class_3_D6E724079B045871_TypeDefinitionIndex = 56001;

class Class_3_D6E724079B045871 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WaitSkillPerformAbilityFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSkillPerformAbilityFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSkillPerformAbilityFinish*))((::PBYTE)hIl2Cpp + CLASS_3_D6E724079B045871__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E724079B045871_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6E724079B045871_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E724079B045871_DISPOSE_OFFSET))(this);
	}
};
