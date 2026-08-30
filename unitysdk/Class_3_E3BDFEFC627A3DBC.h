#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHeroGender; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E3BDFEFC627A3DBC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB78CD20)
#define CLASS_3_E3BDFEFC627A3DBC__CTOR_OFFSET UNITYSDK_OFFSET(0xB78CCF0)

inline static constexpr unsigned int Class_3_E3BDFEFC627A3DBC_TypeDefinitionIndex = 53401;

class Class_3_E3BDFEFC627A3DBC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHeroGender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHeroGender* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + CLASS_3_E3BDFEFC627A3DBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3BDFEFC627A3DBC_EVALUATE_OFFSET))(this);
	}
};
