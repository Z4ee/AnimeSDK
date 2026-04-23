#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_SetAnimatorParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8FDBB7E7CDB508E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12426CF0)
#define CLASS_3_8FDBB7E7CDB508E1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12426EF0)
#define CLASS_3_8FDBB7E7CDB508E1_TICK_OFFSET UNITYSDK_OFFSET(0x12426E90)
#define CLASS_3_8FDBB7E7CDB508E1__CTOR_OFFSET UNITYSDK_OFFSET(0x12426CC0)
#define CLASS_3_8FDBB7E7CDB508E1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12426F40)

inline static constexpr unsigned int Class_3_8FDBB7E7CDB508E1_TypeDefinitionIndex = 48273;

class Class_3_8FDBB7E7CDB508E1 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*))((::PBYTE)hIl2Cpp + CLASS_3_8FDBB7E7CDB508E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDBB7E7CDB508E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FDBB7E7CDB508E1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDBB7E7CDB508E1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FDBB7E7CDB508E1___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
