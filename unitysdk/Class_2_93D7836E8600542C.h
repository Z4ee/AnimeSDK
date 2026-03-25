#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseMove; }

#define CLASS_2_93D7836E8600542C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D0A910)
#define CLASS_2_93D7836E8600542C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D0A950)
#define CLASS_2_93D7836E8600542C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D0A9F0)
#define CLASS_2_93D7836E8600542C_TICK_OFFSET UNITYSDK_OFFSET(0x8D0AAC0)
#define CLASS_2_93D7836E8600542C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0A900)

inline static constexpr unsigned int Class_2_93D7836E8600542C_TypeDefinitionIndex = 47648;

class Class_2_93D7836E8600542C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseMove*))((::PBYTE)hIl2Cpp + CLASS_2_93D7836E8600542C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93D7836E8600542C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93D7836E8600542C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93D7836E8600542C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_93D7836E8600542C_TICK_OFFSET))(this, a1);
	}
};
