#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OverrideFinishActionAutoTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_745F0B095837914B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117D1470)
#define CLASS_2_745F0B095837914B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117D14B0)
#define CLASS_2_745F0B095837914B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x117D1550)
#define CLASS_2_745F0B095837914B_TICK_OFFSET UNITYSDK_OFFSET(0x117D15A0)
#define CLASS_2_745F0B095837914B__CTOR_OFFSET UNITYSDK_OFFSET(0x117D1460)

inline static constexpr unsigned int Class_2_745F0B095837914B_TypeDefinitionIndex = 48923;

class Class_2_745F0B095837914B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::OverrideFinishActionAutoTransfer* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideFinishActionAutoTransfer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideFinishActionAutoTransfer*))((::PBYTE)hIl2Cpp + CLASS_2_745F0B095837914B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_745F0B095837914B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_745F0B095837914B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_745F0B095837914B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_745F0B095837914B_TICK_OFFSET))(this, a1);
	}
};
