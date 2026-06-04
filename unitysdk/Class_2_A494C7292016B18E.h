#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCurrentTurnActionEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A494C7292016B18E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C8D760)
#define CLASS_2_A494C7292016B18E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C8D7A0)
#define CLASS_2_A494C7292016B18E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C8D870)
#define CLASS_2_A494C7292016B18E_TICK_OFFSET UNITYSDK_OFFSET(0x10C8D8C0)
#define CLASS_2_A494C7292016B18E__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8D750)

inline static constexpr unsigned int Class_2_A494C7292016B18E_TypeDefinitionIndex = 51731;

class Class_2_A494C7292016B18E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetCurrentTurnActionEntity* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCurrentTurnActionEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCurrentTurnActionEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A494C7292016B18E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A494C7292016B18E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A494C7292016B18E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A494C7292016B18E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A494C7292016B18E_TICK_OFFSET))(this, a1);
	}
};
