#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsDirectKillBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C534F50A658BE3B2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17BCA730)
#define CLASS_3_C534F50A658BE3B2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCA700)

inline static constexpr unsigned int Class_3_C534F50A658BE3B2_TypeDefinitionIndex = 54862;

class Class_3_C534F50A658BE3B2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsDirectKillBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + CLASS_3_C534F50A658BE3B2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C534F50A658BE3B2_EVALUATE_OFFSET))(this);
	}
};
