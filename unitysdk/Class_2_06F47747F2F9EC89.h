#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialSave; }

#define CLASS_2_06F47747F2F9EC89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184D9430)
#define CLASS_2_06F47747F2F9EC89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184D9470)
#define CLASS_2_06F47747F2F9EC89_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x184D94F0)
#define CLASS_2_06F47747F2F9EC89_TICK_OFFSET UNITYSDK_OFFSET(0x184D9540)
#define CLASS_2_06F47747F2F9EC89__CTOR_OFFSET UNITYSDK_OFFSET(0x184D9420)

inline static constexpr unsigned int Class_2_06F47747F2F9EC89_TypeDefinitionIndex = 58976;

class Class_2_06F47747F2F9EC89 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TutorialSave* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialSave* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialSave*))((::PBYTE)hIl2Cpp + CLASS_2_06F47747F2F9EC89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F47747F2F9EC89_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F47747F2F9EC89_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F47747F2F9EC89_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06F47747F2F9EC89_TICK_OFFSET))(this, a1);
	}
};
