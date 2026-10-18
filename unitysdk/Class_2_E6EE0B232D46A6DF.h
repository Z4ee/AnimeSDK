#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClockParkStoryWaitPlayerClick; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E6EE0B232D46A6DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF83D70)
#define CLASS_2_E6EE0B232D46A6DF_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xCF83DB0)
#define CLASS_2_E6EE0B232D46A6DF_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xCF84190)
#define CLASS_2_E6EE0B232D46A6DF_ONSKIP_OFFSET UNITYSDK_OFFSET(0xCF83DC0)
#define CLASS_2_E6EE0B232D46A6DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF83F20)
#define CLASS_2_E6EE0B232D46A6DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF84080)
#define CLASS_2_E6EE0B232D46A6DF_TICK_OFFSET UNITYSDK_OFFSET(0xCF83EC0)
#define CLASS_2_E6EE0B232D46A6DF__CTOR_OFFSET UNITYSDK_OFFSET(0xCF83D60)

inline static constexpr unsigned int Class_2_E6EE0B232D46A6DF_TypeDefinitionIndex = 52695;

class Class_2_E6EE0B232D46A6DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::ClockParkStoryWaitPlayerClick* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryWaitPlayerClick* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryWaitPlayerClick*))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF_ONSKIP_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EE0B232D46A6DF_METHOD_2_0868EF727040C390_OFFSET))(this);
	}
};
