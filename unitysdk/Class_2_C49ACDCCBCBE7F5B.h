#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_C4BCD569548B7F3E;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMagicUnitOnScepter; }

#define CLASS_2_C49ACDCCBCBE7F5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB911870)
#define CLASS_2_C49ACDCCBCBE7F5B_METHOD_2_3E026EECBE9972D0_OFFSET UNITYSDK_OFFSET(0xB911A20)
#define CLASS_2_C49ACDCCBCBE7F5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9118C0)
#define CLASS_2_C49ACDCCBCBE7F5B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB911AC0)
#define CLASS_2_C49ACDCCBCBE7F5B_TICK_OFFSET UNITYSDK_OFFSET(0xB911B10)
#define CLASS_2_C49ACDCCBCBE7F5B__CTOR_OFFSET UNITYSDK_OFFSET(0xB911860)

inline static constexpr unsigned int Class_2_C49ACDCCBCBE7F5B_TypeDefinitionIndex = 55929;

class Class_2_C49ACDCCBCBE7F5B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_C4BCD569548B7F3E* NIGNPDNNKJO; // 0x18
	::RPG::GameCore::TriggerMagicUnitOnScepter* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMagicUnitOnScepter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMagicUnitOnScepter*))((::PBYTE)hIl2Cpp + CLASS_2_C49ACDCCBCBE7F5B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49ACDCCBCBE7F5B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49ACDCCBCBE7F5B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49ACDCCBCBE7F5B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49ACDCCBCBE7F5B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E026EECBE9972D0(::Class_2_C4BCD569548B7F3E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C4BCD569548B7F3E*))((::PBYTE)hIl2Cpp + CLASS_2_C49ACDCCBCBE7F5B_METHOD_2_3E026EECBE9972D0_OFFSET))(this, a1);
	}
};
