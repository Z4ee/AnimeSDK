#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByHasTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B4E71922EA1C1AB2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A02A920)
#define CLASS_3_B4E71922EA1C1AB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02A8F0)

inline static constexpr unsigned int Class_3_B4E71922EA1C1AB2_TypeDefinitionIndex = 52483;

class Class_3_B4E71922EA1C1AB2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + CLASS_3_B4E71922EA1C1AB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4E71922EA1C1AB2_EVALUATE_OFFSET))(this);
	}
};
