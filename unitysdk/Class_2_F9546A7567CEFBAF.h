#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetEntityActionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F9546A7567CEFBAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCC21F0)
#define CLASS_2_F9546A7567CEFBAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCC2230)
#define CLASS_2_F9546A7567CEFBAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCC2520)
#define CLASS_2_F9546A7567CEFBAF_TICK_OFFSET UNITYSDK_OFFSET(0xBCC2570)
#define CLASS_2_F9546A7567CEFBAF__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC21E0)

inline static constexpr unsigned int Class_2_F9546A7567CEFBAF_TypeDefinitionIndex = 55691;

class Class_2_F9546A7567CEFBAF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetEntityActionState* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityActionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityActionState*))((::PBYTE)hIl2Cpp + CLASS_2_F9546A7567CEFBAF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9546A7567CEFBAF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9546A7567CEFBAF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9546A7567CEFBAF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F9546A7567CEFBAF_TICK_OFFSET))(this, a1);
	}
};
