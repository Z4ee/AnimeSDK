#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCurrentTurnActionEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A494C7292016B18E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12850F60)
#define CLASS_2_A494C7292016B18E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12850FA0)
#define CLASS_2_A494C7292016B18E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12851070)
#define CLASS_2_A494C7292016B18E_TICK_OFFSET UNITYSDK_OFFSET(0x128510C0)
#define CLASS_2_A494C7292016B18E__CTOR_OFFSET UNITYSDK_OFFSET(0x12850F50)

inline static constexpr unsigned int Class_2_A494C7292016B18E_TypeDefinitionIndex = 55580;

class Class_2_A494C7292016B18E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetCurrentTurnActionEntity* OFKGLJOAMLD; // 0x20

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
