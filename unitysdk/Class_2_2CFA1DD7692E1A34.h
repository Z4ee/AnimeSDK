#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchUIMenuBGM; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2CFA1DD7692E1A34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BA4A90)
#define CLASS_2_2CFA1DD7692E1A34_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BA4AD0)
#define CLASS_2_2CFA1DD7692E1A34_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BA4CA0)
#define CLASS_2_2CFA1DD7692E1A34_TICK_OFFSET UNITYSDK_OFFSET(0x18BA4CF0)
#define CLASS_2_2CFA1DD7692E1A34__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA4A80)

inline static constexpr unsigned int Class_2_2CFA1DD7692E1A34_TypeDefinitionIndex = 58902;

class Class_2_2CFA1DD7692E1A34 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SwitchUIMenuBGM* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchUIMenuBGM* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchUIMenuBGM*))((::PBYTE)hIl2Cpp + CLASS_2_2CFA1DD7692E1A34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CFA1DD7692E1A34_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CFA1DD7692E1A34_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CFA1DD7692E1A34_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2CFA1DD7692E1A34_TICK_OFFSET))(this, a1);
	}
};
