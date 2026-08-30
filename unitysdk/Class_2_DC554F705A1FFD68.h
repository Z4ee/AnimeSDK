#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveShield; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DC554F705A1FFD68_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC7DAD0)
#define CLASS_2_DC554F705A1FFD68_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC7DB10)
#define CLASS_2_DC554F705A1FFD68_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC7E000)
#define CLASS_2_DC554F705A1FFD68_TICK_OFFSET UNITYSDK_OFFSET(0xBC7E050)
#define CLASS_2_DC554F705A1FFD68__CTOR_OFFSET UNITYSDK_OFFSET(0xBC7DAC0)

inline static constexpr unsigned int Class_2_DC554F705A1FFD68_TypeDefinitionIndex = 55513;

class Class_2_DC554F705A1FFD68 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveShield* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_TICK_OFFSET))(this, a1);
	}
};
