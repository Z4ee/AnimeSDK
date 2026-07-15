#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTurnOwnerHasPendingOneMore; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0605CF0C9A0E8B48_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18192920)
#define CLASS_3_0605CF0C9A0E8B48__CTOR_OFFSET UNITYSDK_OFFSET(0x181928F0)

inline static constexpr unsigned int Class_3_0605CF0C9A0E8B48_TypeDefinitionIndex = 52253;

class Class_3_0605CF0C9A0E8B48 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTurnOwnerHasPendingOneMore*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + CLASS_3_0605CF0C9A0E8B48__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0605CF0C9A0E8B48_EVALUATE_OFFSET))(this);
	}
};
