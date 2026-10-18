#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForWithDuration; }

#define CLASS_2_09A7D85E22AF0CAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E98560)
#define CLASS_2_09A7D85E22AF0CAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E98630)
#define CLASS_2_09A7D85E22AF0CAB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E98730)
#define CLASS_2_09A7D85E22AF0CAB_TICK_OFFSET UNITYSDK_OFFSET(0x15E98780)
#define CLASS_2_09A7D85E22AF0CAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15E984A0)

inline static constexpr unsigned int Class_2_09A7D85E22AF0CAB_TypeDefinitionIndex = 58893;

class Class_2_09A7D85E22AF0CAB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x20
	::RPG::GameCore::WaitForWithDuration* OFKGLJOAMLD; // 0x28
	::System::Single AMOPAIHIACL; // 0x30
	::System::Single EFKCJMFANEB; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForWithDuration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForWithDuration*))((::PBYTE)hIl2Cpp + CLASS_2_09A7D85E22AF0CAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A7D85E22AF0CAB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A7D85E22AF0CAB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A7D85E22AF0CAB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_09A7D85E22AF0CAB_TICK_OFFSET))(this, a1);
	}
};
