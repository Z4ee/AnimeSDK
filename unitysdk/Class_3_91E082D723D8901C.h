#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckLineupAvatarBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_91E082D723D8901C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18A38AE0)
#define CLASS_3_91E082D723D8901C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A38AB0)

inline static constexpr unsigned int Class_3_91E082D723D8901C_TypeDefinitionIndex = 52371;

class Class_3_91E082D723D8901C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckLineupAvatarBaseType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + CLASS_3_91E082D723D8901C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91E082D723D8901C_EVALUATE_OFFSET))(this);
	}
};
