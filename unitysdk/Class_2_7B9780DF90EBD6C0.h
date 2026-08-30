#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopEffectFollowPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7B9780DF90EBD6C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCFA5310)
#define CLASS_2_7B9780DF90EBD6C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCFA5350)
#define CLASS_2_7B9780DF90EBD6C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCFA55D0)
#define CLASS_2_7B9780DF90EBD6C0_TICK_OFFSET UNITYSDK_OFFSET(0xCFA5620)
#define CLASS_2_7B9780DF90EBD6C0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA5300)

inline static constexpr unsigned int Class_2_7B9780DF90EBD6C0_TypeDefinitionIndex = 55858;

class Class_2_7B9780DF90EBD6C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StopEffectFollowPoint* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopEffectFollowPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopEffectFollowPoint*))((::PBYTE)hIl2Cpp + CLASS_2_7B9780DF90EBD6C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B9780DF90EBD6C0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B9780DF90EBD6C0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B9780DF90EBD6C0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B9780DF90EBD6C0_TICK_OFFSET))(this, a1);
	}
};
