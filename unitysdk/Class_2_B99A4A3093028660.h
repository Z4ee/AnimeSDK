#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DisableCharacterVO; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B99A4A3093028660_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18979FC0)
#define CLASS_2_B99A4A3093028660_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1897A000)
#define CLASS_2_B99A4A3093028660_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1897A360)
#define CLASS_2_B99A4A3093028660_TICK_OFFSET UNITYSDK_OFFSET(0x1897A3B0)
#define CLASS_2_B99A4A3093028660__CTOR_OFFSET UNITYSDK_OFFSET(0x18979FB0)

inline static constexpr unsigned int Class_2_B99A4A3093028660_TypeDefinitionIndex = 55209;

class Class_2_B99A4A3093028660 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DisableCharacterVO* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableCharacterVO* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableCharacterVO*))((::PBYTE)hIl2Cpp + CLASS_2_B99A4A3093028660__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99A4A3093028660_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99A4A3093028660_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99A4A3093028660_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B99A4A3093028660_TICK_OFFSET))(this, a1);
	}
};
