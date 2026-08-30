#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetBossPluralityHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_66E3C7A1F4FF63E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169AB6E0)
#define CLASS_2_66E3C7A1F4FF63E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169AB720)
#define CLASS_2_66E3C7A1F4FF63E5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x169AB800)
#define CLASS_2_66E3C7A1F4FF63E5_TICK_OFFSET UNITYSDK_OFFSET(0x169AB850)
#define CLASS_2_66E3C7A1F4FF63E5__CTOR_OFFSET UNITYSDK_OFFSET(0x169AB6D0)

inline static constexpr unsigned int Class_2_66E3C7A1F4FF63E5_TypeDefinitionIndex = 56582;

class Class_2_66E3C7A1F4FF63E5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Int32 PAEKJECBJHC = 0x1; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetBossPluralityHP* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + CLASS_2_66E3C7A1F4FF63E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66E3C7A1F4FF63E5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66E3C7A1F4FF63E5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66E3C7A1F4FF63E5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_66E3C7A1F4FF63E5_TICK_OFFSET))(this, a1);
	}
};
