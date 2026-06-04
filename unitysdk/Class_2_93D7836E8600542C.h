#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseMove; }

#define CLASS_2_93D7836E8600542C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A9E6A0)
#define CLASS_2_93D7836E8600542C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A9E6E0)
#define CLASS_2_93D7836E8600542C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A9E780)
#define CLASS_2_93D7836E8600542C_TICK_OFFSET UNITYSDK_OFFSET(0x12A9E850)
#define CLASS_2_93D7836E8600542C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9E690)

inline static constexpr unsigned int Class_2_93D7836E8600542C_TypeDefinitionIndex = 55113;

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
