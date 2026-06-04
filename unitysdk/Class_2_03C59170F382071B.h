#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CloseAllTopPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_03C59170F382071B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC72EF00)
#define CLASS_2_03C59170F382071B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC72EF40)
#define CLASS_2_03C59170F382071B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC72F1A0)
#define CLASS_2_03C59170F382071B_TICK_OFFSET UNITYSDK_OFFSET(0xC72F1F0)
#define CLASS_2_03C59170F382071B__CTOR_OFFSET UNITYSDK_OFFSET(0xC72EEF0)

inline static constexpr unsigned int Class_2_03C59170F382071B_TypeDefinitionIndex = 52614;

class Class_2_03C59170F382071B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CloseAllTopPage* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseAllTopPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseAllTopPage*))((::PBYTE)hIl2Cpp + CLASS_2_03C59170F382071B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03C59170F382071B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03C59170F382071B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03C59170F382071B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03C59170F382071B_TICK_OFFSET))(this, a1);
	}
};
