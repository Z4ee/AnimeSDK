#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetLastKillFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_566A0DD623C1F0F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12871350)
#define CLASS_2_566A0DD623C1F0F0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12871390)
#define CLASS_2_566A0DD623C1F0F0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12871410)
#define CLASS_2_566A0DD623C1F0F0_TICK_OFFSET UNITYSDK_OFFSET(0x12871460)
#define CLASS_2_566A0DD623C1F0F0__CTOR_OFFSET UNITYSDK_OFFSET(0x12871340)

inline static constexpr unsigned int Class_2_566A0DD623C1F0F0_TypeDefinitionIndex = 58698;

class Class_2_566A0DD623C1F0F0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetLastKillFinish* OFKGLJOAMLD; // 0x20

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
