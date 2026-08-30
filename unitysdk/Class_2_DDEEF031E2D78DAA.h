#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureModifyMazeMP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DDEEF031E2D78DAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDAE3F0)
#define CLASS_2_DDEEF031E2D78DAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDAE430)
#define CLASS_2_DDEEF031E2D78DAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDAE570)
#define CLASS_2_DDEEF031E2D78DAA_TICK_OFFSET UNITYSDK_OFFSET(0xBDAE5C0)
#define CLASS_2_DDEEF031E2D78DAA__CTOR_OFFSET UNITYSDK_OFFSET(0xBDAE3E0)

inline static constexpr unsigned int Class_2_DDEEF031E2D78DAA_TypeDefinitionIndex = 58056;

class Class_2_DDEEF031E2D78DAA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureModifyMazeMP* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureModifyMazeMP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureModifyMazeMP*))((::PBYTE)hIl2Cpp + CLASS_2_DDEEF031E2D78DAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDEEF031E2D78DAA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDEEF031E2D78DAA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDEEF031E2D78DAA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DDEEF031E2D78DAA_TICK_OFFSET))(this, a1);
	}
};
