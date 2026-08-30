#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class SetLoopRewindSnapSection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6A8E5F663846E649_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D00B00)
#define CLASS_2_6A8E5F663846E649_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18D00FE0)
#define CLASS_2_6A8E5F663846E649_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18D00C70)
#define CLASS_2_6A8E5F663846E649_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18D00EB0)
#define CLASS_2_6A8E5F663846E649_TICK_OFFSET UNITYSDK_OFFSET(0x18D00F80)
#define CLASS_2_6A8E5F663846E649__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00A10)

inline static constexpr unsigned int Class_2_6A8E5F663846E649_TypeDefinitionIndex = 53647;

class Class_2_6A8E5F663846E649 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* GKEPNAPPHOG; // 0x18
	::RPG::GameCore::EntityTimeRewindComponent* GLBECKBELNK; // 0x20
	::Class_3_07C3C4D2990C49EE* EBOEKBPIJPI; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::RPG::GameCore::SetLoopRewindSnapSection* OFKGLJOAMLD; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLoopRewindSnapSection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLoopRewindSnapSection*))((::PBYTE)hIl2Cpp + CLASS_2_6A8E5F663846E649__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A8E5F663846E649_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A8E5F663846E649_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A8E5F663846E649_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6A8E5F663846E649_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A8E5F663846E649_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
