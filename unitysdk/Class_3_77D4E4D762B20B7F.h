#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByInAttackAngle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_77D4E4D762B20B7F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8DB17B0)
#define CLASS_3_77D4E4D762B20B7F__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB1720)

inline static constexpr unsigned int Class_3_77D4E4D762B20B7F_TypeDefinitionIndex = 42215;

class Class_3_77D4E4D762B20B7F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByInAttackAngle*>
{
public:
	::System::Single Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + CLASS_3_77D4E4D762B20B7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77D4E4D762B20B7F_EVALUATE_OFFSET))(this);
	}
};
