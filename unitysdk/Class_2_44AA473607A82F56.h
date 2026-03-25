#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaveMonsterMaxCount; }

#define CLASS_2_44AA473607A82F56_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BE65C0)
#define CLASS_2_44AA473607A82F56_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BE6600)
#define CLASS_2_44AA473607A82F56_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BE6980)
#define CLASS_2_44AA473607A82F56_TICK_OFFSET UNITYSDK_OFFSET(0x10BE69D0)
#define CLASS_2_44AA473607A82F56__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE6510)

inline static constexpr unsigned int Class_2_44AA473607A82F56_TypeDefinitionIndex = 47616;

class Class_2_44AA473607A82F56 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaveMonsterMaxCount* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::StringHash Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaveMonsterMaxCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaveMonsterMaxCount*))((::PBYTE)hIl2Cpp + CLASS_2_44AA473607A82F56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44AA473607A82F56_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44AA473607A82F56_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44AA473607A82F56_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44AA473607A82F56_TICK_OFFSET))(this, a1);
	}
};
