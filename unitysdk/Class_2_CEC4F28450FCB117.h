#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLastKillFinish; }

#define CLASS_2_CEC4F28450FCB117_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BBE3C0)
#define CLASS_2_CEC4F28450FCB117_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8BBE400)
#define CLASS_2_CEC4F28450FCB117_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8BBE490)
#define CLASS_2_CEC4F28450FCB117_TICK_OFFSET UNITYSDK_OFFSET(0x8BBE4E0)
#define CLASS_2_CEC4F28450FCB117__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBE3B0)

inline static constexpr unsigned int Class_2_CEC4F28450FCB117_TypeDefinitionIndex = 47569;

class Class_2_CEC4F28450FCB117 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitLastKillFinish* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLastKillFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLastKillFinish*))((::PBYTE)hIl2Cpp + CLASS_2_CEC4F28450FCB117__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC4F28450FCB117_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC4F28450FCB117_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC4F28450FCB117_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CEC4F28450FCB117_TICK_OFFSET))(this, a1);
	}
};
