#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByNPCStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F28C160DD717D0A4_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD175250)
#define CLASS_3_F28C160DD717D0A4__CTOR_OFFSET UNITYSDK_OFFSET(0xD175220)

inline static constexpr unsigned int Class_3_F28C160DD717D0A4_TypeDefinitionIndex = 43773;

class Class_3_F28C160DD717D0A4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByNPCStatus*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByNPCStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + CLASS_3_F28C160DD717D0A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F28C160DD717D0A4_EVALUATE_OFFSET))(this);
	}
};
