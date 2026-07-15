#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_260_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186E7F20)
#define CLASS_3_27518451A20BB161_260__CTOR_OFFSET UNITYSDK_OFFSET(0x186E7EF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_260_TypeDefinitionIndex = 55792;

class Class_3_27518451A20BB161_260 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_260__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_260_ONTASKBEGIN_OFFSET))(this);
	}
};
