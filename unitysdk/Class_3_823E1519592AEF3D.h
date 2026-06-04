#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasInsertActionByTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_823E1519592AEF3D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1460FB70)
#define CLASS_3_823E1519592AEF3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1460FB40)

inline static constexpr unsigned int Class_3_823E1519592AEF3D_TypeDefinitionIndex = 51055;

class Class_3_823E1519592AEF3D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasInsertActionByTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + CLASS_3_823E1519592AEF3D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_823E1519592AEF3D_EVALUATE_OFFSET))(this);
	}
};
