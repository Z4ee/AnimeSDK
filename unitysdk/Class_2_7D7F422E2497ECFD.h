#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwordTrainingNotifySelectStory; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7D7F422E2497ECFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DBD400)
#define CLASS_2_7D7F422E2497ECFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8DBD440)
#define CLASS_2_7D7F422E2497ECFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8DBD4C0)
#define CLASS_2_7D7F422E2497ECFD_TICK_OFFSET UNITYSDK_OFFSET(0x8DBD510)
#define CLASS_2_7D7F422E2497ECFD__CTOR_OFFSET UNITYSDK_OFFSET(0x8DBD3F0)

inline static constexpr unsigned int Class_2_7D7F422E2497ECFD_TypeDefinitionIndex = 47435;

class Class_2_7D7F422E2497ECFD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwordTrainingNotifySelectStory* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingNotifySelectStory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingNotifySelectStory*))((::PBYTE)hIl2Cpp + CLASS_2_7D7F422E2497ECFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D7F422E2497ECFD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D7F422E2497ECFD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D7F422E2497ECFD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D7F422E2497ECFD_TICK_OFFSET))(this, a1);
	}
};
