#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_370441A47031978D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_263_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AB13F0)
#define CLASS_3_27518451A20BB161_263__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB13C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_263_TypeDefinitionIndex = 55687;

class Class_3_27518451A20BB161_263 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_370441A47031978D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_370441A47031978D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_370441A47031978D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_263__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_263_ONTASKBEGIN_OFFSET))(this);
	}
};
