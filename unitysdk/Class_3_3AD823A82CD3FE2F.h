#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_21055A9FA74B791E;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class ST_ByEnterCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3AD823A82CD3FE2F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18E5D2D0)
#define CLASS_3_3AD823A82CD3FE2F__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5D0B0)

inline static constexpr unsigned int Class_3_3AD823A82CD3FE2F_TypeDefinitionIndex = 52475;

class Class_3_3AD823A82CD3FE2F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByEnterCombat*>
{
public:
	::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x28
	::Class_2_F67FF7EB526BF85C* CDOLLHKGMEL; // 0x30
	::Class_2_21055A9FA74B791E* PJLGDHFHFLO; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + CLASS_3_3AD823A82CD3FE2F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AD823A82CD3FE2F_EVALUATE_OFFSET))(this);
	}
};
