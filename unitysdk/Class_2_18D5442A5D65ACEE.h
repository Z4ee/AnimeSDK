#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackExtraStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_18D5442A5D65ACEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BCA2E0)
#define CLASS_2_18D5442A5D65ACEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19BCA320)
#define CLASS_2_18D5442A5D65ACEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19BCA4A0)
#define CLASS_2_18D5442A5D65ACEE_TICK_OFFSET UNITYSDK_OFFSET(0x19BCA4F0)
#define CLASS_2_18D5442A5D65ACEE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCA2D0)

inline static constexpr unsigned int Class_2_18D5442A5D65ACEE_TypeDefinitionIndex = 55837;

class Class_2_18D5442A5D65ACEE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::StackExtraStance* OFKGLJOAMLD; // 0x20

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
