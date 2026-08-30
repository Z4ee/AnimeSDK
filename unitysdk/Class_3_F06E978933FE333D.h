#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSPChangeTag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F06E978933FE333D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1997CCF0)
#define CLASS_3_F06E978933FE333D__CTOR_OFFSET UNITYSDK_OFFSET(0x1997CCC0)

inline static constexpr unsigned int Class_3_F06E978933FE333D_TypeDefinitionIndex = 55096;

class Class_3_F06E978933FE333D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSPChangeTag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + CLASS_3_F06E978933FE333D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F06E978933FE333D_EVALUATE_OFFSET))(this);
	}
};
