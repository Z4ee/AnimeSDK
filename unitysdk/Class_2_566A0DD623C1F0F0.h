#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetLastKillFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_566A0DD623C1F0F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EA2F50)
#define CLASS_2_566A0DD623C1F0F0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8EA2F90)
#define CLASS_2_566A0DD623C1F0F0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8EA3010)
#define CLASS_2_566A0DD623C1F0F0_TICK_OFFSET UNITYSDK_OFFSET(0x8EA3060)
#define CLASS_2_566A0DD623C1F0F0__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA2F40)

inline static constexpr unsigned int Class_2_566A0DD623C1F0F0_TypeDefinitionIndex = 47244;

class Class_2_566A0DD623C1F0F0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetLastKillFinish* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLastKillFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLastKillFinish*))((::PBYTE)hIl2Cpp + CLASS_2_566A0DD623C1F0F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566A0DD623C1F0F0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566A0DD623C1F0F0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566A0DD623C1F0F0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_566A0DD623C1F0F0_TICK_OFFSET))(this, a1);
	}
};
