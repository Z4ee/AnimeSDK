#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterStopFreeStyle; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_225AC596BB64DD77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15069180)
#define CLASS_2_225AC596BB64DD77_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x150691D0)
#define CLASS_2_225AC596BB64DD77_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15069800)
#define CLASS_2_225AC596BB64DD77_ONSKIP_OFFSET UNITYSDK_OFFSET(0x150695E0)
#define CLASS_2_225AC596BB64DD77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15069230)
#define CLASS_2_225AC596BB64DD77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x150691E0)
#define CLASS_2_225AC596BB64DD77_TICK_OFFSET UNITYSDK_OFFSET(0x15069560)
#define CLASS_2_225AC596BB64DD77__CTOR_OFFSET UNITYSDK_OFFSET(0x15069170)

inline static constexpr unsigned int Class_2_225AC596BB64DD77_TypeDefinitionIndex = 55430;

class Class_2_225AC596BB64DD77 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterStopFreeStyle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::FreeStyleComponent* Field_2_2; // 0x28

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
