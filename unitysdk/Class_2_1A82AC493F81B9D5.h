#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReleaseEnvProfileForStory; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1A82AC493F81B9D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A95D50)
#define CLASS_2_1A82AC493F81B9D5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A95D90)
#define CLASS_2_1A82AC493F81B9D5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A96000)
#define CLASS_2_1A82AC493F81B9D5_TICK_OFFSET UNITYSDK_OFFSET(0x17A96050)
#define CLASS_2_1A82AC493F81B9D5__CTOR_OFFSET UNITYSDK_OFFSET(0x17A95D40)

inline static constexpr unsigned int Class_2_1A82AC493F81B9D5_TypeDefinitionIndex = 58530;

class Class_2_1A82AC493F81B9D5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ReleaseEnvProfileForStory* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseEnvProfileForStory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseEnvProfileForStory*))((::PBYTE)hIl2Cpp + CLASS_2_1A82AC493F81B9D5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A82AC493F81B9D5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A82AC493F81B9D5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A82AC493F81B9D5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1A82AC493F81B9D5_TICK_OFFSET))(this, a1);
	}
};
