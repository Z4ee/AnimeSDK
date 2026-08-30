#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StretchGlobalTimeSlowByKey; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_FE9EBB2A1BFDA2B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B42F030)
#define CLASS_2_FE9EBB2A1BFDA2B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B42F070)
#define CLASS_2_FE9EBB2A1BFDA2B3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B42F190)
#define CLASS_2_FE9EBB2A1BFDA2B3_TICK_OFFSET UNITYSDK_OFFSET(0x1B42F1E0)
#define CLASS_2_FE9EBB2A1BFDA2B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42F020)

inline static constexpr unsigned int Class_2_FE9EBB2A1BFDA2B3_TypeDefinitionIndex = 55861;

class Class_2_FE9EBB2A1BFDA2B3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::StretchGlobalTimeSlowByKey* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StretchGlobalTimeSlowByKey* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StretchGlobalTimeSlowByKey*))((::PBYTE)hIl2Cpp + CLASS_2_FE9EBB2A1BFDA2B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE9EBB2A1BFDA2B3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE9EBB2A1BFDA2B3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE9EBB2A1BFDA2B3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE9EBB2A1BFDA2B3_TICK_OFFSET))(this, a1);
	}
};
