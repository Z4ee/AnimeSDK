#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3658EDFC90175F78;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_44_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1643C0)
#define CLASS_3_27518451A20BB161_44__CTOR_OFFSET UNITYSDK_OFFSET(0xD164390)

inline static constexpr unsigned int Class_3_27518451A20BB161_44_TypeDefinitionIndex = 42843;

class Class_3_27518451A20BB161_44 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3658EDFC90175F78*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3658EDFC90175F78* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3658EDFC90175F78*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_44_ONTASKBEGIN_OFFSET))(this);
	}
};
