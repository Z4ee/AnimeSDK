#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsBodyPartOwner; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8FFF82BDF4E52681_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB274430)
#define CLASS_3_8FFF82BDF4E52681__CTOR_OFFSET UNITYSDK_OFFSET(0xB274400)

inline static constexpr unsigned int Class_3_8FFF82BDF4E52681_TypeDefinitionIndex = 54637;

class Class_3_8FFF82BDF4E52681 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsBodyPartOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + CLASS_3_8FFF82BDF4E52681__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FFF82BDF4E52681_EVALUATE_OFFSET))(this);
	}
};
