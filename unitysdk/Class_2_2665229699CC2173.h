#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DOFEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2665229699CC2173_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DC7A20)
#define CLASS_2_2665229699CC2173_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DC7A60)
#define CLASS_2_2665229699CC2173_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16DC7ED0)
#define CLASS_2_2665229699CC2173_TICK_OFFSET UNITYSDK_OFFSET(0x16DC7F20)
#define CLASS_2_2665229699CC2173__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC7A10)

inline static constexpr unsigned int Class_2_2665229699CC2173_TypeDefinitionIndex = 55185;

class Class_2_2665229699CC2173 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::DOFEffect* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DOFEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DOFEffect*))((::PBYTE)hIl2Cpp + CLASS_2_2665229699CC2173__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2665229699CC2173_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2665229699CC2173_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2665229699CC2173_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2665229699CC2173_TICK_OFFSET))(this, a1);
	}
};
