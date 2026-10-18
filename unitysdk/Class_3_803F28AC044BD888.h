#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFloorCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_803F28AC044BD888_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA592D0)
#define CLASS_3_803F28AC044BD888__CTOR_OFFSET UNITYSDK_OFFSET(0xDA592A0)

inline static constexpr unsigned int Class_3_803F28AC044BD888_TypeDefinitionIndex = 52560;

class Class_3_803F28AC044BD888 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFloorCustomString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_803F28AC044BD888__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_803F28AC044BD888_EVALUATE_OFFSET))(this);
	}
};
