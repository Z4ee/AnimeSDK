#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectList; }

#define CLASS_2_86255F20D04C1150_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A39850)
#define CLASS_2_86255F20D04C1150_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A39890)
#define CLASS_2_86255F20D04C1150_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A39FC0)
#define CLASS_2_86255F20D04C1150_TICK_OFFSET UNITYSDK_OFFSET(0x18A3A010)
#define CLASS_2_86255F20D04C1150__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39840)

inline static constexpr unsigned int Class_2_86255F20D04C1150_TypeDefinitionIndex = 55920;

class Class_2_86255F20D04C1150 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerEffectList* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean LEIGKHEMCGE; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_86255F20D04C1150__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86255F20D04C1150_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86255F20D04C1150_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86255F20D04C1150_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_86255F20D04C1150_TICK_OFFSET))(this, a1);
	}
};
