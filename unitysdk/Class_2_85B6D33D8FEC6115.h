#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCheckpointRecover; }
namespace System { class Object; }

#define CLASS_2_85B6D33D8FEC6115_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173BE4B0)
#define CLASS_2_85B6D33D8FEC6115_METHOD_2_FC27F62E1756DC9B_OFFSET UNITYSDK_OFFSET(0x173BE5D0)
#define CLASS_2_85B6D33D8FEC6115_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173BE550)
#define CLASS_2_85B6D33D8FEC6115_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x173BE710)
#define CLASS_2_85B6D33D8FEC6115_TICK_OFFSET UNITYSDK_OFFSET(0x173BE4F0)
#define CLASS_2_85B6D33D8FEC6115__CTOR_OFFSET UNITYSDK_OFFSET(0x173BE4A0)

inline static constexpr unsigned int Class_2_85B6D33D8FEC6115_TypeDefinitionIndex = 56144;

class Class_2_85B6D33D8FEC6115 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerCheckpointRecover* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCheckpointRecover* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCheckpointRecover*))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_FC27F62E1756DC9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115_METHOD_2_FC27F62E1756DC9B_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115_ONTASKRESET_OFFSET))(this);
	}
};
