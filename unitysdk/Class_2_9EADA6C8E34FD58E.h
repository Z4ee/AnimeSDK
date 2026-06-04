#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RetrySwordTrainingFinalBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9EADA6C8E34FD58E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1060BA40)
#define CLASS_2_9EADA6C8E34FD58E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1060BA80)
#define CLASS_2_9EADA6C8E34FD58E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1060BB00)
#define CLASS_2_9EADA6C8E34FD58E_TICK_OFFSET UNITYSDK_OFFSET(0x1060BB50)
#define CLASS_2_9EADA6C8E34FD58E__CTOR_OFFSET UNITYSDK_OFFSET(0x1060BA30)

inline static constexpr unsigned int Class_2_9EADA6C8E34FD58E_TypeDefinitionIndex = 54595;

class Class_2_9EADA6C8E34FD58E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RetrySwordTrainingFinalBattle* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*))((::PBYTE)hIl2Cpp + CLASS_2_9EADA6C8E34FD58E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EADA6C8E34FD58E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EADA6C8E34FD58E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EADA6C8E34FD58E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9EADA6C8E34FD58E_TICK_OFFSET))(this, a1);
	}
};
