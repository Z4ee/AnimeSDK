#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTurnActionEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B3FCA63D49C3DC5D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD9F9180)
#define CLASS_3_B3FCA63D49C3DC5D__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F9150)

inline static constexpr unsigned int Class_3_B3FCA63D49C3DC5D_TypeDefinitionIndex = 50468;

class Class_3_B3FCA63D49C3DC5D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTurnActionEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B3FCA63D49C3DC5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3FCA63D49C3DC5D_EVALUATE_OFFSET))(this);
	}
};
