#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByCanPlanetFesLevelUp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA8B9AD6F954A45E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10968E40)
#define CLASS_3_FA8B9AD6F954A45E__CTOR_OFFSET UNITYSDK_OFFSET(0x10968E10)

inline static constexpr unsigned int Class_3_FA8B9AD6F954A45E_TypeDefinitionIndex = 46741;

class Class_3_FA8B9AD6F954A45E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByCanPlanetFesLevelUp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + CLASS_3_FA8B9AD6F954A45E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA8B9AD6F954A45E_EVALUATE_OFFSET))(this);
	}
};
