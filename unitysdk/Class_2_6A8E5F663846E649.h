#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class SetLoopRewindSnapSection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6A8E5F663846E649_DISPOSE_OFFSET UNITYSDK_OFFSET(0x972B910)
#define CLASS_2_6A8E5F663846E649_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x972BD10)
#define CLASS_2_6A8E5F663846E649_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x972B9B0)
#define CLASS_2_6A8E5F663846E649_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x972BBE0)
#define CLASS_2_6A8E5F663846E649_TICK_OFFSET UNITYSDK_OFFSET(0x972BCB0)
#define CLASS_2_6A8E5F663846E649__CTOR_OFFSET UNITYSDK_OFFSET(0x972B820)

inline static constexpr unsigned int Class_2_6A8E5F663846E649_TypeDefinitionIndex = 49219;

class Class_2_6A8E5F663846E649 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x18
	::RPG::GameCore::SetLoopRewindSnapSection* Field_2_0; // 0x20
	::RPG::GameCore::EntityTimeRewindComponent* Field_2_4; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

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
