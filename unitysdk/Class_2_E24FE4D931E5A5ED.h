#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadLevelGroup; }

#define CLASS_2_E24FE4D931E5A5ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC965730)
#define CLASS_2_E24FE4D931E5A5ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC965770)
#define CLASS_2_E24FE4D931E5A5ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC9658C0)
#define CLASS_2_E24FE4D931E5A5ED_TICK_OFFSET UNITYSDK_OFFSET(0xC965910)
#define CLASS_2_E24FE4D931E5A5ED__CTOR_OFFSET UNITYSDK_OFFSET(0xC965720)

inline static constexpr unsigned int Class_2_E24FE4D931E5A5ED_TypeDefinitionIndex = 49956;

class Class_2_E24FE4D931E5A5ED : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::UnloadLevelGroup* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnloadLevelGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnloadLevelGroup*))((::PBYTE)hIl2Cpp + CLASS_2_E24FE4D931E5A5ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24FE4D931E5A5ED_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24FE4D931E5A5ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24FE4D931E5A5ED_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E24FE4D931E5A5ED_TICK_OFFSET))(this, a1);
	}
};
