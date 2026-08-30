#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HeartDialEmoBlackList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_96317446D0C1A131_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC50E9B0)
#define CLASS_2_96317446D0C1A131_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC50E750)
#define CLASS_2_96317446D0C1A131_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC50E960)
#define CLASS_2_96317446D0C1A131_TICK_OFFSET UNITYSDK_OFFSET(0xC50E9F0)
#define CLASS_2_96317446D0C1A131__CTOR_OFFSET UNITYSDK_OFFSET(0xC50E740)

inline static constexpr unsigned int Class_2_96317446D0C1A131_TypeDefinitionIndex = 58301;

class Class_2_96317446D0C1A131 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GameEntity* FEECCONDBLP; // 0x20
	::RPG::GameCore::HeartDialEmoBlackList* OFKGLJOAMLD; // 0x28

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
