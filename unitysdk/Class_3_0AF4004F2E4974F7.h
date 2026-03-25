#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_Chess_ByInAlertRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0AF4004F2E4974F7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x88C0480)
#define CLASS_3_0AF4004F2E4974F7__CTOR_OFFSET UNITYSDK_OFFSET(0x88C0450)

inline static constexpr unsigned int Class_3_0AF4004F2E4974F7_TypeDefinitionIndex = 45178;

class Class_3_0AF4004F2E4974F7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_Chess_ByInAlertRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Chess_ByInAlertRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Chess_ByInAlertRange*))((::PBYTE)hIl2Cpp + CLASS_3_0AF4004F2E4974F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AF4004F2E4974F7_EVALUATE_OFFSET))(this);
	}
};
