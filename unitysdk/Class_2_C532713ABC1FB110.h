#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_503;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitParallelTimeStamp; }

#define CLASS_2_C532713ABC1FB110_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA8CF50)
#define CLASS_2_C532713ABC1FB110_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAA8CFA0)
#define CLASS_2_C532713ABC1FB110_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAA8D890)
#define CLASS_2_C532713ABC1FB110_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA8CFB0)
#define CLASS_2_C532713ABC1FB110_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA8D4E0)
#define CLASS_2_C532713ABC1FB110_TICK_OFFSET UNITYSDK_OFFSET(0xAA8D530)
#define CLASS_2_C532713ABC1FB110__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8CF30)

inline static constexpr unsigned int Class_2_C532713ABC1FB110_TypeDefinitionIndex = 55040;

class Class_2_C532713ABC1FB110 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_0_16E4307DCC419505_503* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::WaitParallelTimeStamp* Field_2_2; // 0x28
	::RPG::GameCore::FixPoint Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitParallelTimeStamp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitParallelTimeStamp*))((::PBYTE)hIl2Cpp + CLASS_2_C532713ABC1FB110__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C532713ABC1FB110_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C532713ABC1FB110_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C532713ABC1FB110_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C532713ABC1FB110_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C532713ABC1FB110_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C532713ABC1FB110_ONSKIP_OFFSET))(this);
	}
};
