#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReleaseCacheUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5DE1346E2169D1BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC387F0)
#define CLASS_2_5DE1346E2169D1BF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC38840)
#define CLASS_2_5DE1346E2169D1BF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC38AC0)
#define CLASS_2_5DE1346E2169D1BF_TICK_OFFSET UNITYSDK_OFFSET(0xBC38B10)
#define CLASS_2_5DE1346E2169D1BF__CTOR_OFFSET UNITYSDK_OFFSET(0xBC387E0)

inline static constexpr unsigned int Class_2_5DE1346E2169D1BF_TypeDefinitionIndex = 58378;

class Class_2_5DE1346E2169D1BF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ReleaseCacheUI* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseCacheUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseCacheUI*))((::PBYTE)hIl2Cpp + CLASS_2_5DE1346E2169D1BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DE1346E2169D1BF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DE1346E2169D1BF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DE1346E2169D1BF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DE1346E2169D1BF_TICK_OFFSET))(this, a1);
	}
};
