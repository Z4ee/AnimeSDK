#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A5E1D3E43C4E8BE1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CD1C90)
#define CLASS_3_27518451A20BB161_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD1C60)

inline static constexpr unsigned int Class_3_27518451A20BB161_4_TypeDefinitionIndex = 52802;

class Class_3_27518451A20BB161_4 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A5E1D3E43C4E8BE1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A5E1D3E43C4E8BE1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A5E1D3E43C4E8BE1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_4_ONTASKBEGIN_OFFSET))(this);
	}
};
