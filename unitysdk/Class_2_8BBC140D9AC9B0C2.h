#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowMissionInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8BBC140D9AC9B0C2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A5D20)
#define CLASS_2_8BBC140D9AC9B0C2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8A5D60)
#define CLASS_2_8BBC140D9AC9B0C2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8A5E10)
#define CLASS_2_8BBC140D9AC9B0C2_TICK_OFFSET UNITYSDK_OFFSET(0xB8A5E60)
#define CLASS_2_8BBC140D9AC9B0C2__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A5D10)

inline static constexpr unsigned int Class_2_8BBC140D9AC9B0C2_TypeDefinitionIndex = 53537;

class Class_2_8BBC140D9AC9B0C2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowMissionInfo* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMissionInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMissionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8BBC140D9AC9B0C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BBC140D9AC9B0C2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BBC140D9AC9B0C2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BBC140D9AC9B0C2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8BBC140D9AC9B0C2_TICK_OFFSET))(this, a1);
	}
};
