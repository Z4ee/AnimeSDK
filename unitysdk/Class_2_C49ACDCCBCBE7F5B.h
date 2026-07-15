#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_C4BCD569548B7F3E;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMagicUnitOnScepter; }

#define CLASS_2_C49ACDCCBCBE7F5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F190B0)
#define CLASS_2_C49ACDCCBCBE7F5B_METHOD_2_3E026EECBE9972D0_OFFSET UNITYSDK_OFFSET(0x18F19260)
#define CLASS_2_C49ACDCCBCBE7F5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F19100)
#define CLASS_2_C49ACDCCBCBE7F5B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F19300)
#define CLASS_2_C49ACDCCBCBE7F5B_TICK_OFFSET UNITYSDK_OFFSET(0x18F19350)
#define CLASS_2_C49ACDCCBCBE7F5B__CTOR_OFFSET UNITYSDK_OFFSET(0x18F190A0)

inline static constexpr unsigned int Class_2_C49ACDCCBCBE7F5B_TypeDefinitionIndex = 53215;

class Class_2_C49ACDCCBCBE7F5B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerMagicUnitOnScepter* Field_2_0; // 0x18
	::Class_2_C4BCD569548B7F3E* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

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
