#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FinishFirstPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_75BE1C9CBBDB2079_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1592F6A0)
#define CLASS_2_75BE1C9CBBDB2079_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1592F6E0)
#define CLASS_2_75BE1C9CBBDB2079_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1592F790)
#define CLASS_2_75BE1C9CBBDB2079_TICK_OFFSET UNITYSDK_OFFSET(0x1592F7E0)
#define CLASS_2_75BE1C9CBBDB2079__CTOR_OFFSET UNITYSDK_OFFSET(0x1592F690)

inline static constexpr unsigned int Class_2_75BE1C9CBBDB2079_TypeDefinitionIndex = 59123;

class Class_2_75BE1C9CBBDB2079 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::FinishFirstPerformance* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishFirstPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishFirstPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_75BE1C9CBBDB2079__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75BE1C9CBBDB2079_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75BE1C9CBBDB2079_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75BE1C9CBBDB2079_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_75BE1C9CBBDB2079_TICK_OFFSET))(this, a1);
	}
};
