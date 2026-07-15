#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialSetMonopolyToastPauseState; }

#define CLASS_2_3800DBF7216E9883_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1870C740)
#define CLASS_2_3800DBF7216E9883_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1870C670)
#define CLASS_2_3800DBF7216E9883_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1870C6F0)
#define CLASS_2_3800DBF7216E9883_TICK_OFFSET UNITYSDK_OFFSET(0x1870C7B0)
#define CLASS_2_3800DBF7216E9883__CTOR_OFFSET UNITYSDK_OFFSET(0x1870C660)

inline static constexpr unsigned int Class_2_3800DBF7216E9883_TypeDefinitionIndex = 56196;

class Class_2_3800DBF7216E9883 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TutorialSetMonopolyToastPauseState* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialSetMonopolyToastPauseState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialSetMonopolyToastPauseState*))((::PBYTE)hIl2Cpp + CLASS_2_3800DBF7216E9883__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3800DBF7216E9883_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3800DBF7216E9883_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3800DBF7216E9883_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3800DBF7216E9883_TICK_OFFSET))(this, a1);
	}
};
