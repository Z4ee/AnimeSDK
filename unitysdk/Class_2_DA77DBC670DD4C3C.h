#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BeginUseSharedSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DA77DBC670DD4C3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA759800)
#define CLASS_2_DA77DBC670DD4C3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA759840)
#define CLASS_2_DA77DBC670DD4C3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA759A30)
#define CLASS_2_DA77DBC670DD4C3C_TICK_OFFSET UNITYSDK_OFFSET(0xA759A80)
#define CLASS_2_DA77DBC670DD4C3C__CTOR_OFFSET UNITYSDK_OFFSET(0xA7597F0)

inline static constexpr unsigned int Class_2_DA77DBC670DD4C3C_TypeDefinitionIndex = 54156;

class Class_2_DA77DBC670DD4C3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::BeginUseSharedSummonUnit* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BeginUseSharedSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BeginUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_2_DA77DBC670DD4C3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA77DBC670DD4C3C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA77DBC670DD4C3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA77DBC670DD4C3C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DA77DBC670DD4C3C_TICK_OFFSET))(this, a1);
	}
};
