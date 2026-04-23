#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareProjectileLifetime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9B29954161D50D08_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11975F30)
#define CLASS_3_9B29954161D50D08__CTOR_OFFSET UNITYSDK_OFFSET(0x11975F00)

inline static constexpr unsigned int Class_3_9B29954161D50D08_TypeDefinitionIndex = 50333;

class Class_3_9B29954161D50D08 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareProjectileLifetime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + CLASS_3_9B29954161D50D08__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B29954161D50D08_EVALUATE_OFFSET))(this);
	}
};
