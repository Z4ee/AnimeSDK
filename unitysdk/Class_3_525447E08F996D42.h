#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_525447E08F996D42_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A46820)
#define CLASS_3_525447E08F996D42__CTOR_OFFSET UNITYSDK_OFFSET(0x13A467F0)

inline static constexpr unsigned int Class_3_525447E08F996D42_TypeDefinitionIndex = 52224;

class Class_3_525447E08F996D42 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTurnOwnerEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_3_525447E08F996D42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_525447E08F996D42_EVALUATE_OFFSET))(this);
	}
};
