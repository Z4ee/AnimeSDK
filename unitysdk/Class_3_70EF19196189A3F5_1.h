#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_514F769FE6FD8DD1.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitEnvProfile; }

#define CLASS_3_70EF19196189A3F5_1_METHOD_3_5C4548BA617DD291_OFFSET UNITYSDK_OFFSET(0x176EB8C0)
#define CLASS_3_70EF19196189A3F5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x176EB8B0)

inline static constexpr unsigned int Class_3_70EF19196189A3F5_1_TypeDefinitionIndex = 58914;

class Class_3_70EF19196189A3F5_1 : public ::Class_2_514F769FE6FD8DD1
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TransitEnvProfile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + CLASS_3_70EF19196189A3F5_1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EnviromentControlPriority Method_3_5C4548BA617DD291()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EF19196189A3F5_1_METHOD_3_5C4548BA617DD291_OFFSET))(this);
	}
};
