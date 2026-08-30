#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIfGroupIsOccupied; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EA8932603DC4A0A7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A02C5B0)
#define CLASS_3_EA8932603DC4A0A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02C580)

inline static constexpr unsigned int Class_3_EA8932603DC4A0A7_TypeDefinitionIndex = 52873;

class Class_3_EA8932603DC4A0A7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIfGroupIsOccupied*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + CLASS_3_EA8932603DC4A0A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA8932603DC4A0A7_EVALUATE_OFFSET))(this);
	}
};
