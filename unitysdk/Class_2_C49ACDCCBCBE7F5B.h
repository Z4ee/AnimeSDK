#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_82C79E778619E94D;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMagicUnitOnScepter; }

#define CLASS_2_C49ACDCCBCBE7F5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87AE7B0)
#define CLASS_2_C49ACDCCBCBE7F5B_METHOD_2_3E026EECBE9972D0_OFFSET UNITYSDK_OFFSET(0x87AE8F0)
#define CLASS_2_C49ACDCCBCBE7F5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87AE800)
#define CLASS_2_C49ACDCCBCBE7F5B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87AE990)
#define CLASS_2_C49ACDCCBCBE7F5B_TICK_OFFSET UNITYSDK_OFFSET(0x87AE9E0)
#define CLASS_2_C49ACDCCBCBE7F5B__CTOR_OFFSET UNITYSDK_OFFSET(0x87AE7A0)

inline static constexpr unsigned int Class_2_C49ACDCCBCBE7F5B_TypeDefinitionIndex = 44648;

class Class_2_C49ACDCCBCBE7F5B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerMagicUnitOnScepter* Field_2_1; // 0x18
	::Class_2_82C79E778619E94D* Field_2_0; // 0x20
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

	::System::Void Method_2_3E026EECBE9972D0(::Class_2_82C79E778619E94D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82C79E778619E94D*))((::PBYTE)hIl2Cpp + CLASS_2_C49ACDCCBCBE7F5B_METHOD_2_3E026EECBE9972D0_OFFSET))(this, a1);
	}
};
