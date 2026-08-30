#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIControllerClose; }

#define CLASS_2_2ADE29555ED16959_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0FFAC0)
#define CLASS_2_2ADE29555ED16959_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xC0FF900)
#define CLASS_2_2ADE29555ED16959_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0FF8B0)
#define CLASS_2_2ADE29555ED16959_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0FFA00)
#define CLASS_2_2ADE29555ED16959_TICK_OFFSET UNITYSDK_OFFSET(0xC0FFA50)
#define CLASS_2_2ADE29555ED16959__CTOR_OFFSET UNITYSDK_OFFSET(0xC0FF8A0)

inline static constexpr unsigned int Class_2_2ADE29555ED16959_TypeDefinitionIndex = 59089;

class Class_2_2ADE29555ED16959 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitUIControllerClose* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIControllerClose* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIControllerClose*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE29555ED16959__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE29555ED16959_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE29555ED16959_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ADE29555ED16959_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE29555ED16959_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE29555ED16959_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
