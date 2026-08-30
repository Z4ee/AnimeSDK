#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetHpBreakHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9E0FA28ECCFB1F50_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6E1FB0)
#define CLASS_2_9E0FA28ECCFB1F50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6E1FF0)
#define CLASS_2_9E0FA28ECCFB1F50_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6E2190)
#define CLASS_2_9E0FA28ECCFB1F50_TICK_OFFSET UNITYSDK_OFFSET(0xB6E21E0)
#define CLASS_2_9E0FA28ECCFB1F50__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E1FA0)

inline static constexpr unsigned int Class_2_9E0FA28ECCFB1F50_TypeDefinitionIndex = 55712;

class Class_2_9E0FA28ECCFB1F50 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetHpBreakHint* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHpBreakHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHpBreakHint*))((::PBYTE)hIl2Cpp + CLASS_2_9E0FA28ECCFB1F50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0FA28ECCFB1F50_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0FA28ECCFB1F50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0FA28ECCFB1F50_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9E0FA28ECCFB1F50_TICK_OFFSET))(this, a1);
	}
};
