#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCheckpointRecover; }
namespace System { class Object; }

#define CLASS_2_85B6D33D8FEC6115_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACAC320)
#define CLASS_2_85B6D33D8FEC6115_METHOD_2_015EED32BD477392_OFFSET UNITYSDK_OFFSET(0xACAC440)
#define CLASS_2_85B6D33D8FEC6115_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACAC3C0)
#define CLASS_2_85B6D33D8FEC6115_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xACAC580)
#define CLASS_2_85B6D33D8FEC6115_TICK_OFFSET UNITYSDK_OFFSET(0xACAC360)
#define CLASS_2_85B6D33D8FEC6115__CTOR_OFFSET UNITYSDK_OFFSET(0xACAC310)

inline static constexpr unsigned int Class_2_85B6D33D8FEC6115_TypeDefinitionIndex = 54912;

class Class_2_85B6D33D8FEC6115 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerCheckpointRecover* Field_2_1; // 0x20

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

	::System::Void Method_2_015EED32BD477392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115_METHOD_2_015EED32BD477392_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85B6D33D8FEC6115_ONTASKRESET_OFFSET))(this);
	}
};
