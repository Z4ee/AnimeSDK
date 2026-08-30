#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowMainPageHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2E49551FDF3C7C14_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1835AC90)
#define CLASS_2_2E49551FDF3C7C14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1835ACD0)
#define CLASS_2_2E49551FDF3C7C14_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1835AD30)
#define CLASS_2_2E49551FDF3C7C14_TICK_OFFSET UNITYSDK_OFFSET(0x1835AD80)
#define CLASS_2_2E49551FDF3C7C14__CTOR_OFFSET UNITYSDK_OFFSET(0x1835AC80)

inline static constexpr unsigned int Class_2_2E49551FDF3C7C14_TypeDefinitionIndex = 58817;

class Class_2_2E49551FDF3C7C14 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowMainPageHint* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMainPageHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMainPageHint*))((::PBYTE)hIl2Cpp + CLASS_2_2E49551FDF3C7C14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E49551FDF3C7C14_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E49551FDF3C7C14_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E49551FDF3C7C14_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E49551FDF3C7C14_TICK_OFFSET))(this, a1);
	}
};
