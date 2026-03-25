#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ClockParkStoryTriggerAsideDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_64EBCC631FDE953D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE480880)
#define CLASS_2_64EBCC631FDE953D_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE480670)
#define CLASS_2_64EBCC631FDE953D_METHOD_2_BD83D9A311EA4A81_OFFSET UNITYSDK_OFFSET(0xE4807C0)
#define CLASS_2_64EBCC631FDE953D_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE480680)
#define CLASS_2_64EBCC631FDE953D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE480920)
#define CLASS_2_64EBCC631FDE953D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE480A90)
#define CLASS_2_64EBCC631FDE953D_TICK_OFFSET UNITYSDK_OFFSET(0xE4808C0)
#define CLASS_2_64EBCC631FDE953D__CTOR_OFFSET UNITYSDK_OFFSET(0xE480660)

inline static constexpr unsigned int Class_2_64EBCC631FDE953D_TypeDefinitionIndex = 42646;

class Class_2_64EBCC631FDE953D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ClockParkStoryTriggerAsideDialog* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog*))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D_ONSKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D_ONTASKRESET_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_BD83D9A311EA4A81()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EBCC631FDE953D_METHOD_2_BD83D9A311EA4A81_OFFSET))(this);
	}
};
