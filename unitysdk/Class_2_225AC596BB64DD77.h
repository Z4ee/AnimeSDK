#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterStopFreeStyle; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_225AC596BB64DD77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188FBAD0)
#define CLASS_2_225AC596BB64DD77_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x188FBB20)
#define CLASS_2_225AC596BB64DD77_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x188FC150)
#define CLASS_2_225AC596BB64DD77_ONSKIP_OFFSET UNITYSDK_OFFSET(0x188FBF30)
#define CLASS_2_225AC596BB64DD77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188FBB80)
#define CLASS_2_225AC596BB64DD77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x188FBB30)
#define CLASS_2_225AC596BB64DD77_TICK_OFFSET UNITYSDK_OFFSET(0x188FBEB0)
#define CLASS_2_225AC596BB64DD77__CTOR_OFFSET UNITYSDK_OFFSET(0x188FBAC0)

inline static constexpr unsigned int Class_2_225AC596BB64DD77_TypeDefinitionIndex = 58161;

class Class_2_225AC596BB64DD77 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterStopFreeStyle* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::FreeStyleComponent* KADINPKIGIB; // 0x20
	::RPG::GameCore::TaskContext* LANHALCJKIM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterStopFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterStopFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_225AC596BB64DD77_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
