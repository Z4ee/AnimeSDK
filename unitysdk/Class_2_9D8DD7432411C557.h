#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StartBattleQTE; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9D8DD7432411C557_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF76C60)
#define CLASS_2_9D8DD7432411C557_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF76B50)
#define CLASS_2_9D8DD7432411C557_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF76C10)
#define CLASS_2_9D8DD7432411C557_TICK_OFFSET UNITYSDK_OFFSET(0xBF76CA0)
#define CLASS_2_9D8DD7432411C557__CTOR_OFFSET UNITYSDK_OFFSET(0xBF76B40)

inline static constexpr unsigned int Class_2_9D8DD7432411C557_TypeDefinitionIndex = 58867;

class Class_2_9D8DD7432411C557 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StartBattleQTE* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattleQTE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattleQTE*))((::PBYTE)hIl2Cpp + CLASS_2_9D8DD7432411C557__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D8DD7432411C557_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D8DD7432411C557_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D8DD7432411C557_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9D8DD7432411C557_TICK_OFFSET))(this, a1);
	}
};
