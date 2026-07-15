#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFloorCustomFloatV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AE0F0F91BB45678E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1752B6A0)
#define CLASS_3_AE0F0F91BB45678E__CTOR_OFFSET UNITYSDK_OFFSET(0x1752B670)

inline static constexpr unsigned int Class_3_AE0F0F91BB45678E_TypeDefinitionIndex = 50170;

class Class_3_AE0F0F91BB45678E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFloorCustomFloatV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + CLASS_3_AE0F0F91BB45678E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE0F0F91BB45678E_EVALUATE_OFFSET))(this);
	}
};
