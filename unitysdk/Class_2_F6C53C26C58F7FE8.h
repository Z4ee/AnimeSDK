#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MatchThreeCreateLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F6C53C26C58F7FE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8859D70)
#define CLASS_2_F6C53C26C58F7FE8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8859DB0)
#define CLASS_2_F6C53C26C58F7FE8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8859EB0)
#define CLASS_2_F6C53C26C58F7FE8_TICK_OFFSET UNITYSDK_OFFSET(0x8859F00)
#define CLASS_2_F6C53C26C58F7FE8__CTOR_OFFSET UNITYSDK_OFFSET(0x8859D60)

inline static constexpr unsigned int Class_2_F6C53C26C58F7FE8_TypeDefinitionIndex = 44160;

class Class_2_F6C53C26C58F7FE8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MatchThreeCreateLevel* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MatchThreeCreateLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MatchThreeCreateLevel*))((::PBYTE)hIl2Cpp + CLASS_2_F6C53C26C58F7FE8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6C53C26C58F7FE8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6C53C26C58F7FE8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6C53C26C58F7FE8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F6C53C26C58F7FE8_TICK_OFFSET))(this, a1);
	}
};
