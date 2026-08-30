#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_21055A9FA74B791E;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class AdvRunStateTree; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4436360A3A829112_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8BBFC0)
#define CLASS_2_4436360A3A829112_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8BC0A0)
#define CLASS_2_4436360A3A829112_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A8BC180)
#define CLASS_2_4436360A3A829112_TICK_OFFSET UNITYSDK_OFFSET(0x1A8BC260)
#define CLASS_2_4436360A3A829112__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BBC00)

inline static constexpr unsigned int Class_2_4436360A3A829112_TypeDefinitionIndex = 52759;

class Class_2_4436360A3A829112 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_E2910CE9CBBA0DE5* HDMEPPFFIDK; // 0x18
	::RPG::GameCore::AdvRunStateTree* OFKGLJOAMLD; // 0x20
	::Class_2_21055A9FA74B791E* PJLGDHFHFLO; // 0x28
	::Class_1_5F51D4049EA87B7B* LHJBPEBMKDN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRunStateTree* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRunStateTree*))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_TICK_OFFSET))(this, a1);
	}
};
