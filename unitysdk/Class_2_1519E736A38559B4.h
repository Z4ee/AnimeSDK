#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1519E736A38559B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1587E320)
#define CLASS_2_1519E736A38559B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1587E360)
#define CLASS_2_1519E736A38559B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1587E720)
#define CLASS_2_1519E736A38559B4_TICK_OFFSET UNITYSDK_OFFSET(0x1587E770)
#define CLASS_2_1519E736A38559B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1587E310)

inline static constexpr unsigned int Class_2_1519E736A38559B4_TypeDefinitionIndex = 58016;

class Class_2_1519E736A38559B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AddMenuItem* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMenuItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + CLASS_2_1519E736A38559B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1519E736A38559B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1519E736A38559B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1519E736A38559B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1519E736A38559B4_TICK_OFFSET))(this, a1);
	}
};
