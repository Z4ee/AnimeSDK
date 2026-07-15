#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChangeMechanismBarValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7488E49298ED108D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16045840)
#define CLASS_2_7488E49298ED108D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16045880)
#define CLASS_2_7488E49298ED108D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x160458D0)
#define CLASS_2_7488E49298ED108D_TICK_OFFSET UNITYSDK_OFFSET(0x16045920)
#define CLASS_2_7488E49298ED108D__CTOR_OFFSET UNITYSDK_OFFSET(0x16045830)

inline static constexpr unsigned int Class_2_7488E49298ED108D_TypeDefinitionIndex = 52434;

class Class_2_7488E49298ED108D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ChangeMechanismBarValue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMechanismBarValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMechanismBarValue*))((::PBYTE)hIl2Cpp + CLASS_2_7488E49298ED108D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7488E49298ED108D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7488E49298ED108D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7488E49298ED108D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7488E49298ED108D_TICK_OFFSET))(this, a1);
	}
};
