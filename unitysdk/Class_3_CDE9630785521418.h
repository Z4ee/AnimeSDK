#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Timer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CDE9630785521418_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18009FC0)
#define CLASS_3_CDE9630785521418_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1800A010)
#define CLASS_3_CDE9630785521418_TICK_OFFSET UNITYSDK_OFFSET(0x1800A060)
#define CLASS_3_CDE9630785521418__CTOR_OFFSET UNITYSDK_OFFSET(0x18009F90)

inline static constexpr unsigned int Class_3_CDE9630785521418_TypeDefinitionIndex = 52537;

class Class_3_CDE9630785521418 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Timer*>
{
public:
	::System::Single PGMIOKKLHIE; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Timer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Timer*))((::PBYTE)hIl2Cpp + CLASS_3_CDE9630785521418__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDE9630785521418_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDE9630785521418_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CDE9630785521418_TICK_OFFSET))(this, a1);
	}
};
