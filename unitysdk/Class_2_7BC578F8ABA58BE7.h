#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvNpcPetSearchFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7BC578F8ABA58BE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EC3940)
#define CLASS_2_7BC578F8ABA58BE7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EC39E0)
#define CLASS_2_7BC578F8ABA58BE7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EC3A30)
#define CLASS_2_7BC578F8ABA58BE7_TICK_OFFSET UNITYSDK_OFFSET(0x16EC3980)
#define CLASS_2_7BC578F8ABA58BE7__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC3930)

inline static constexpr unsigned int Class_2_7BC578F8ABA58BE7_TypeDefinitionIndex = 52711;

class Class_2_7BC578F8ABA58BE7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcPetSearchFollow* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

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
