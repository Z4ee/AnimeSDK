#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_86255F20D04C1150.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectListForUI; }

#define CLASS_3_F4DCF16BE33D8615__CTOR_OFFSET UNITYSDK_OFFSET(0x149E4560)

inline static constexpr unsigned int Class_3_F4DCF16BE33D8615_TypeDefinitionIndex = 53205;

class Class_3_F4DCF16BE33D8615 : public ::Class_2_86255F20D04C1150
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + CLASS_3_F4DCF16BE33D8615__CTOR_OFFSET))(this, a1, a2);
	}
};
