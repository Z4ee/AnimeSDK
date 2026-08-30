#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class HideMissionInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_496B9C806BFFADE6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3C8280)
#define CLASS_2_496B9C806BFFADE6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3C82C0)
#define CLASS_2_496B9C806BFFADE6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3C8370)
#define CLASS_2_496B9C806BFFADE6_TICK_OFFSET UNITYSDK_OFFSET(0xF3C83C0)
#define CLASS_2_496B9C806BFFADE6__CTOR_OFFSET UNITYSDK_OFFSET(0xF3C8270)

inline static constexpr unsigned int Class_2_496B9C806BFFADE6_TypeDefinitionIndex = 53199;

class Class_2_496B9C806BFFADE6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::HideMissionInfo* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideMissionInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideMissionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_496B9C806BFFADE6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_496B9C806BFFADE6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_496B9C806BFFADE6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_496B9C806BFFADE6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_496B9C806BFFADE6_TICK_OFFSET))(this, a1);
	}
};
