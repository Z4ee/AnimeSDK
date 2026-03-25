#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIControllerClose; }

#define CLASS_2_2ADE29555ED16959_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87FE9A0)
#define CLASS_2_2ADE29555ED16959_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x87FE7E0)
#define CLASS_2_2ADE29555ED16959_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87FE790)
#define CLASS_2_2ADE29555ED16959_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87FE8E0)
#define CLASS_2_2ADE29555ED16959_TICK_OFFSET UNITYSDK_OFFSET(0x87FE930)
#define CLASS_2_2ADE29555ED16959__CTOR_OFFSET UNITYSDK_OFFSET(0x87FE780)

inline static constexpr unsigned int Class_2_2ADE29555ED16959_TypeDefinitionIndex = 47609;

class Class_2_2ADE29555ED16959 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::WaitUIControllerClose* Field_2_0; // 0x20

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
