#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_261_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E8A2F0)
#define CLASS_3_27518451A20BB161_261__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8A2C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_261_TypeDefinitionIndex = 55807;

class Class_3_27518451A20BB161_261 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_261__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_261_ONTASKBEGIN_OFFSET))(this);
	}
};
