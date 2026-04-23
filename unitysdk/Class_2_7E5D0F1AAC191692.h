#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OwnerEntityRemoveAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7E5D0F1AAC191692_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124D5C20)
#define CLASS_2_7E5D0F1AAC191692_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124D5C60)
#define CLASS_2_7E5D0F1AAC191692_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124D5D40)
#define CLASS_2_7E5D0F1AAC191692_TICK_OFFSET UNITYSDK_OFFSET(0x124D5D90)
#define CLASS_2_7E5D0F1AAC191692__CTOR_OFFSET UNITYSDK_OFFSET(0x124D5C10)

inline static constexpr unsigned int Class_2_7E5D0F1AAC191692_TypeDefinitionIndex = 50938;

class Class_2_7E5D0F1AAC191692 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::OwnerEntityRemoveAbility* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OwnerEntityRemoveAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OwnerEntityRemoveAbility*))((::PBYTE)hIl2Cpp + CLASS_2_7E5D0F1AAC191692__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E5D0F1AAC191692_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E5D0F1AAC191692_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E5D0F1AAC191692_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7E5D0F1AAC191692_TICK_OFFSET))(this, a1);
	}
};
