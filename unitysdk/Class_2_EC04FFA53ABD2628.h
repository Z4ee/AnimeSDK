#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorTimer; }

#define CLASS_2_EC04FFA53ABD2628_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE293C0)
#define CLASS_2_EC04FFA53ABD2628_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xDE29400)
#define CLASS_2_EC04FFA53ABD2628_ONSKIP_OFFSET UNITYSDK_OFFSET(0xDE29550)
#define CLASS_2_EC04FFA53ABD2628_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE29410)
#define CLASS_2_EC04FFA53ABD2628_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE294A0)
#define CLASS_2_EC04FFA53ABD2628_TICK_OFFSET UNITYSDK_OFFSET(0xDE294F0)
#define CLASS_2_EC04FFA53ABD2628__CTOR_OFFSET UNITYSDK_OFFSET(0xDE293B0)

inline static constexpr unsigned int Class_2_EC04FFA53ABD2628_TypeDefinitionIndex = 55023;

class Class_2_EC04FFA53ABD2628 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFloorTimer* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
