#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifySkillPropertyByType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_580AEE2A5F7FC29A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AAEAA0)
#define CLASS_2_580AEE2A5F7FC29A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AAEAE0)
#define CLASS_2_580AEE2A5F7FC29A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AAEEF0)
#define CLASS_2_580AEE2A5F7FC29A_TICK_OFFSET UNITYSDK_OFFSET(0x12AAEF40)
#define CLASS_2_580AEE2A5F7FC29A__CTOR_OFFSET UNITYSDK_OFFSET(0x12AAEA90)

inline static constexpr unsigned int Class_2_580AEE2A5F7FC29A_TypeDefinitionIndex = 50906;

class Class_2_580AEE2A5F7FC29A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifySkillPropertyByType* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySkillPropertyByType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySkillPropertyByType*))((::PBYTE)hIl2Cpp + CLASS_2_580AEE2A5F7FC29A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_580AEE2A5F7FC29A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_580AEE2A5F7FC29A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_580AEE2A5F7FC29A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_580AEE2A5F7FC29A_TICK_OFFSET))(this, a1);
	}
};
