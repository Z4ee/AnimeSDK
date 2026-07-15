#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class SetLoopRewindSnapSection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6A8E5F663846E649_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1761C030)
#define CLASS_2_6A8E5F663846E649_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1761C510)
#define CLASS_2_6A8E5F663846E649_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1761C1A0)
#define CLASS_2_6A8E5F663846E649_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1761C3E0)
#define CLASS_2_6A8E5F663846E649_TICK_OFFSET UNITYSDK_OFFSET(0x1761C4B0)
#define CLASS_2_6A8E5F663846E649__CTOR_OFFSET UNITYSDK_OFFSET(0x1761BF40)

inline static constexpr unsigned int Class_2_6A8E5F663846E649_TypeDefinitionIndex = 50963;

class Class_2_6A8E5F663846E649 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EntityTimeRewindComponent* Field_2_0; // 0x18
	::RPG::GameCore::SetLoopRewindSnapSection* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38

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
