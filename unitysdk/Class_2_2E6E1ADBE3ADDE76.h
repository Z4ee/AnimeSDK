#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackWeakResistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2E6E1ADBE3ADDE76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1360BBD0)
#define CLASS_2_2E6E1ADBE3ADDE76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1360BC70)
#define CLASS_2_2E6E1ADBE3ADDE76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1360C030)
#define CLASS_2_2E6E1ADBE3ADDE76_TICK_OFFSET UNITYSDK_OFFSET(0x1360BC10)
#define CLASS_2_2E6E1ADBE3ADDE76__CTOR_OFFSET UNITYSDK_OFFSET(0x1360BBA0)

inline static constexpr unsigned int Class_2_2E6E1ADBE3ADDE76_TypeDefinitionIndex = 51982;

class Class_2_2E6E1ADBE3ADDE76 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StackWeakResistance* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackWeakResistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackWeakResistance*))((::PBYTE)hIl2Cpp + CLASS_2_2E6E1ADBE3ADDE76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E6E1ADBE3ADDE76_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E6E1ADBE3ADDE76_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E6E1ADBE3ADDE76_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E6E1ADBE3ADDE76_ONTASKRESET_OFFSET))(this);
	}
};
