#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackExtraStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_18D5442A5D65ACEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CB4B10)
#define CLASS_2_18D5442A5D65ACEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CB4B50)
#define CLASS_2_18D5442A5D65ACEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CB4CD0)
#define CLASS_2_18D5442A5D65ACEE_TICK_OFFSET UNITYSDK_OFFSET(0x12CB4D20)
#define CLASS_2_18D5442A5D65ACEE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CB4B00)

inline static constexpr unsigned int Class_2_18D5442A5D65ACEE_TypeDefinitionIndex = 55645;

class Class_2_18D5442A5D65ACEE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StackExtraStance* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackExtraStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackExtraStance*))((::PBYTE)hIl2Cpp + CLASS_2_18D5442A5D65ACEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18D5442A5D65ACEE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18D5442A5D65ACEE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18D5442A5D65ACEE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18D5442A5D65ACEE_TICK_OFFSET))(this, a1);
	}
};
