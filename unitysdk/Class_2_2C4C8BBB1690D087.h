#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeleportToRotatableRegion; }

#define CLASS_2_2C4C8BBB1690D087_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18721B40)
#define CLASS_2_2C4C8BBB1690D087_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18721C10)
#define CLASS_2_2C4C8BBB1690D087_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18721BC0)
#define CLASS_2_2C4C8BBB1690D087_TICK_OFFSET UNITYSDK_OFFSET(0x18721EC0)
#define CLASS_2_2C4C8BBB1690D087__CTOR_OFFSET UNITYSDK_OFFSET(0x18721B30)

inline static constexpr unsigned int Class_2_2C4C8BBB1690D087_TypeDefinitionIndex = 50928;

class Class_2_2C4C8BBB1690D087 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TeleportToRotatableRegion* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeleportToRotatableRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeleportToRotatableRegion*))((::PBYTE)hIl2Cpp + CLASS_2_2C4C8BBB1690D087__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C4C8BBB1690D087_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C4C8BBB1690D087_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C4C8BBB1690D087_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C4C8BBB1690D087_TICK_OFFSET))(this, a1);
	}
};
