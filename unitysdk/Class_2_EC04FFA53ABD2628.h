#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorTimer; }

#define CLASS_2_EC04FFA53ABD2628_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF423990)
#define CLASS_2_EC04FFA53ABD2628_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xF4239D0)
#define CLASS_2_EC04FFA53ABD2628_ONSKIP_OFFSET UNITYSDK_OFFSET(0xF423B20)
#define CLASS_2_EC04FFA53ABD2628_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF4239E0)
#define CLASS_2_EC04FFA53ABD2628_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF423A70)
#define CLASS_2_EC04FFA53ABD2628_TICK_OFFSET UNITYSDK_OFFSET(0xF423AC0)
#define CLASS_2_EC04FFA53ABD2628__CTOR_OFFSET UNITYSDK_OFFSET(0xF423980)

inline static constexpr unsigned int Class_2_EC04FFA53ABD2628_TypeDefinitionIndex = 59038;

class Class_2_EC04FFA53ABD2628 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFloorTimer* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorTimer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorTimer*))((::PBYTE)hIl2Cpp + CLASS_2_EC04FFA53ABD2628__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC04FFA53ABD2628_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC04FFA53ABD2628_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC04FFA53ABD2628_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC04FFA53ABD2628_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC04FFA53ABD2628_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC04FFA53ABD2628_ONSKIP_OFFSET))(this);
	}
};
