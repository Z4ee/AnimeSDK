#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckFloorCustomBool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CDAEB5EB2EDD176D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9995B90)
#define CLASS_3_CDAEB5EB2EDD176D__CTOR_OFFSET UNITYSDK_OFFSET(0x9995B60)

inline static constexpr unsigned int Class_3_CDAEB5EB2EDD176D_TypeDefinitionIndex = 48519;

class Class_3_CDAEB5EB2EDD176D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckFloorCustomBool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + CLASS_3_CDAEB5EB2EDD176D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDAEB5EB2EDD176D_EVALUATE_OFFSET))(this);
	}
};
