#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_A406659BC3B2A585_6;
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BAC6872DC5FF0F49_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A37510)
#define CLASS_2_BAC6872DC5FF0F49_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A37710)
#define CLASS_2_BAC6872DC5FF0F49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A37550)
#define CLASS_2_BAC6872DC5FF0F49_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A37810)
#define CLASS_2_BAC6872DC5FF0F49_TICK_OFFSET UNITYSDK_OFFSET(0x18A37760)
#define CLASS_2_BAC6872DC5FF0F49__CTOR_OFFSET UNITYSDK_OFFSET(0x18A37500)

inline static constexpr unsigned int Class_2_BAC6872DC5FF0F49_TypeDefinitionIndex = 52801;

class Class_2_BAC6872DC5FF0F49 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AdventureSkillCharacterComponent* JLCCNPCBKCL; // 0x20
	::Class_3_A406659BC3B2A585_6* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_6*))((::PBYTE)hIl2Cpp + CLASS_2_BAC6872DC5FF0F49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC6872DC5FF0F49_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC6872DC5FF0F49_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAC6872DC5FF0F49_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC6872DC5FF0F49_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC6872DC5FF0F49_ONTASKRESET_OFFSET))(this);
	}
};
