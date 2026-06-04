#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HeartDialEmoBlackList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_96317446D0C1A131_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB04CED0)
#define CLASS_2_96317446D0C1A131_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB04CC70)
#define CLASS_2_96317446D0C1A131_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB04CE80)
#define CLASS_2_96317446D0C1A131_TICK_OFFSET UNITYSDK_OFFSET(0xB04CF10)
#define CLASS_2_96317446D0C1A131__CTOR_OFFSET UNITYSDK_OFFSET(0xB04CC60)

inline static constexpr unsigned int Class_2_96317446D0C1A131_TypeDefinitionIndex = 54347;

class Class_2_96317446D0C1A131 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::HeartDialEmoBlackList* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeartDialEmoBlackList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeartDialEmoBlackList*))((::PBYTE)hIl2Cpp + CLASS_2_96317446D0C1A131__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96317446D0C1A131_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96317446D0C1A131_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96317446D0C1A131_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96317446D0C1A131_TICK_OFFSET))(this, a1);
	}
};
