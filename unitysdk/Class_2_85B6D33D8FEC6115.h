#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCheckpointRecover; }
namespace System { class Object; }

#define CLASS_2_85B6D33D8FEC6115_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC073760)
#define CLASS_2_85B6D33D8FEC6115_METHOD_2_FC27F62E1756DC9B_OFFSET UNITYSDK_OFFSET(0xC073880)
#define CLASS_2_85B6D33D8FEC6115_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC073800)
#define CLASS_2_85B6D33D8FEC6115_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0739C0)
#define CLASS_2_85B6D33D8FEC6115_TICK_OFFSET UNITYSDK_OFFSET(0xC0737A0)
#define CLASS_2_85B6D33D8FEC6115__CTOR_OFFSET UNITYSDK_OFFSET(0xC073750)

inline static constexpr unsigned int Class_2_85B6D33D8FEC6115_TypeDefinitionIndex = 58921;

class Class_2_85B6D33D8FEC6115 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerCheckpointRecover* OFKGLJOAMLD; // 0x20

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
