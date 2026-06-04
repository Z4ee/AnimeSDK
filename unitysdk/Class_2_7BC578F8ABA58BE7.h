#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvNpcPetSearchFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7BC578F8ABA58BE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137F9EB0)
#define CLASS_2_7BC578F8ABA58BE7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x137F9F50)
#define CLASS_2_7BC578F8ABA58BE7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x137F9FA0)
#define CLASS_2_7BC578F8ABA58BE7_TICK_OFFSET UNITYSDK_OFFSET(0x137F9EF0)
#define CLASS_2_7BC578F8ABA58BE7__CTOR_OFFSET UNITYSDK_OFFSET(0x137F9EA0)

inline static constexpr unsigned int Class_2_7BC578F8ABA58BE7_TypeDefinitionIndex = 49037;

class Class_2_7BC578F8ABA58BE7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcPetSearchFollow* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcPetSearchFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcPetSearchFollow*))((::PBYTE)hIl2Cpp + CLASS_2_7BC578F8ABA58BE7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BC578F8ABA58BE7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7BC578F8ABA58BE7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BC578F8ABA58BE7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BC578F8ABA58BE7_ONTASKRESET_OFFSET))(this);
	}
};
