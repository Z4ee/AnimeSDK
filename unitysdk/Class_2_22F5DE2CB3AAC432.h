#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class AdventureShowReading; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_22F5DE2CB3AAC432_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7172F0)
#define CLASS_2_22F5DE2CB3AAC432_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB717840)
#define CLASS_2_22F5DE2CB3AAC432_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB7177C0)
#define CLASS_2_22F5DE2CB3AAC432_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB717330)
#define CLASS_2_22F5DE2CB3AAC432_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB717710)
#define CLASS_2_22F5DE2CB3AAC432_TICK_OFFSET UNITYSDK_OFFSET(0xB717760)
#define CLASS_2_22F5DE2CB3AAC432__CTOR_OFFSET UNITYSDK_OFFSET(0xB7172E0)

inline static constexpr unsigned int Class_2_22F5DE2CB3AAC432_TypeDefinitionIndex = 58066;

class Class_2_22F5DE2CB3AAC432 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::AdventureShowReading* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureShowReading* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureShowReading*))((::PBYTE)hIl2Cpp + CLASS_2_22F5DE2CB3AAC432__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22F5DE2CB3AAC432_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22F5DE2CB3AAC432_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22F5DE2CB3AAC432_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_22F5DE2CB3AAC432_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_22F5DE2CB3AAC432_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22F5DE2CB3AAC432_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
