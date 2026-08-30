#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_591C4F10BE62ACB4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168673F0)
#define CLASS_2_591C4F10BE62ACB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16867430)
#define CLASS_2_591C4F10BE62ACB4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16867C10)
#define CLASS_2_591C4F10BE62ACB4_TICK_OFFSET UNITYSDK_OFFSET(0x16867C60)
#define CLASS_2_591C4F10BE62ACB4__CTOR_OFFSET UNITYSDK_OFFSET(0x168673E0)

inline static constexpr unsigned int Class_2_591C4F10BE62ACB4_TypeDefinitionIndex = 55704;

class Class_2_591C4F10BE62ACB4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetHP* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHP*))((::PBYTE)hIl2Cpp + CLASS_2_591C4F10BE62ACB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C4F10BE62ACB4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C4F10BE62ACB4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C4F10BE62ACB4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_591C4F10BE62ACB4_TICK_OFFSET))(this, a1);
	}
};
