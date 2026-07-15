#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_306CBF67F25314F9.h"

namespace RPG::GameCore { class SetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_F685AC6B3D43789F__CTOR_OFFSET UNITYSDK_OFFSET(0x17659610)

inline static constexpr unsigned int Class_4_F685AC6B3D43789F_TypeDefinitionIndex = 52947;

class Class_4_F685AC6B3D43789F : public ::Class_3_306CBF67F25314F9
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + CLASS_4_F685AC6B3D43789F__CTOR_OFFSET))(this, a1, a2);
	}
};
