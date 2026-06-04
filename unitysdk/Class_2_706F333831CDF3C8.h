#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class OpenMusicRhythmReadyPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_706F333831CDF3C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABD87A0)
#define CLASS_2_706F333831CDF3C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABD87E0)
#define CLASS_2_706F333831CDF3C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xABD8B80)
#define CLASS_2_706F333831CDF3C8_TICK_OFFSET UNITYSDK_OFFSET(0xABD8BD0)
#define CLASS_2_706F333831CDF3C8__CTOR_OFFSET UNITYSDK_OFFSET(0xABD8790)

inline static constexpr unsigned int Class_2_706F333831CDF3C8_TypeDefinitionIndex = 49577;

class Class_2_706F333831CDF3C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::OpenMusicRhythmReadyPage* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Boolean Field_2_5; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenMusicRhythmReadyPage*))((::PBYTE)hIl2Cpp + CLASS_2_706F333831CDF3C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706F333831CDF3C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706F333831CDF3C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706F333831CDF3C8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_706F333831CDF3C8_TICK_OFFSET))(this, a1);
	}
};
