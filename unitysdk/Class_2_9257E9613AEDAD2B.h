#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetAsRogueDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9257E9613AEDAD2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7DDD20)
#define CLASS_2_9257E9613AEDAD2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7DDD60)
#define CLASS_2_9257E9613AEDAD2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7DDF10)
#define CLASS_2_9257E9613AEDAD2B_TICK_OFFSET UNITYSDK_OFFSET(0xA7DDF60)
#define CLASS_2_9257E9613AEDAD2B__CTOR_OFFSET UNITYSDK_OFFSET(0xA7DDD10)

inline static constexpr unsigned int Class_2_9257E9613AEDAD2B_TypeDefinitionIndex = 54661;

class Class_2_9257E9613AEDAD2B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetAsRogueDialogue* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAsRogueDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAsRogueDialogue*))((::PBYTE)hIl2Cpp + CLASS_2_9257E9613AEDAD2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9257E9613AEDAD2B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9257E9613AEDAD2B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9257E9613AEDAD2B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9257E9613AEDAD2B_TICK_OFFSET))(this, a1);
	}
};
