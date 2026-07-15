#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetDynamicValueByAddValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8F982D74D4824493_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A50910)
#define CLASS_2_8F982D74D4824493_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A50950)
#define CLASS_2_8F982D74D4824493_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A50DA0)
#define CLASS_2_8F982D74D4824493_TICK_OFFSET UNITYSDK_OFFSET(0x13A50DF0)
#define CLASS_2_8F982D74D4824493__CTOR_OFFSET UNITYSDK_OFFSET(0x13A50900)

inline static constexpr unsigned int Class_2_8F982D74D4824493_TypeDefinitionIndex = 52894;

class Class_2_8F982D74D4824493 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetDynamicValueByAddValue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAddValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAddValue*))((::PBYTE)hIl2Cpp + CLASS_2_8F982D74D4824493__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F982D74D4824493_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F982D74D4824493_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F982D74D4824493_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F982D74D4824493_TICK_OFFSET))(this, a1);
	}
};
