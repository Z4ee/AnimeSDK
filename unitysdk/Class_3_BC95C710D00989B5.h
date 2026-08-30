#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByRandomChance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC95C710D00989B5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155CD7A0)
#define CLASS_3_BC95C710D00989B5__CTOR_OFFSET UNITYSDK_OFFSET(0x155CD770)

inline static constexpr unsigned int Class_3_BC95C710D00989B5_TypeDefinitionIndex = 54920;

class Class_3_BC95C710D00989B5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByRandomChance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRandomChance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + CLASS_3_BC95C710D00989B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC95C710D00989B5_EVALUATE_OFFSET))(this);
	}
};
