#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchHandItemSetBreathingLight; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_360F583D5E10EAC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18464EC0)
#define CLASS_2_360F583D5E10EAC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184650B0)
#define CLASS_2_360F583D5E10EAC4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18465130)
#define CLASS_2_360F583D5E10EAC4_TICK_OFFSET UNITYSDK_OFFSET(0x18464F10)
#define CLASS_2_360F583D5E10EAC4__CTOR_OFFSET UNITYSDK_OFFSET(0x18464EB0)

inline static constexpr unsigned int Class_2_360F583D5E10EAC4_TypeDefinitionIndex = 50887;

class Class_2_360F583D5E10EAC4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchHandItemSetBreathingLight* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*))((::PBYTE)hIl2Cpp + CLASS_2_360F583D5E10EAC4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360F583D5E10EAC4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_360F583D5E10EAC4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360F583D5E10EAC4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360F583D5E10EAC4_ONTASKRESET_OFFSET))(this);
	}
};
