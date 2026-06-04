#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_827373C1CEDFE355;
namespace RPG::GameCore { class RandomSelectInTargetList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_473C73321ACADA74_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB02B550)
#define CLASS_2_473C73321ACADA74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB02B590)
#define CLASS_2_473C73321ACADA74_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB02B700)
#define CLASS_2_473C73321ACADA74_TICK_OFFSET UNITYSDK_OFFSET(0xB02B750)
#define CLASS_2_473C73321ACADA74__CTOR_OFFSET UNITYSDK_OFFSET(0xB02B510)

inline static constexpr unsigned int Class_2_473C73321ACADA74_TypeDefinitionIndex = 51631;

class Class_2_473C73321ACADA74 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_827373C1CEDFE355* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::RandomSelectInTargetList* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectInTargetList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectInTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_473C73321ACADA74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_473C73321ACADA74_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_473C73321ACADA74_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_473C73321ACADA74_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_473C73321ACADA74_TICK_OFFSET))(this, a1);
	}
};
