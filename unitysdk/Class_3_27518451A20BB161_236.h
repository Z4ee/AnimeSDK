#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_35557ECC3FEF8EBD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_236_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A3C640)
#define CLASS_3_27518451A20BB161_236__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3C610)

inline static constexpr unsigned int Class_3_27518451A20BB161_236_TypeDefinitionIndex = 53190;

class Class_3_27518451A20BB161_236 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_35557ECC3FEF8EBD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_35557ECC3FEF8EBD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_35557ECC3FEF8EBD*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_236__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_236_ONTASKBEGIN_OFFSET))(this);
	}
};
