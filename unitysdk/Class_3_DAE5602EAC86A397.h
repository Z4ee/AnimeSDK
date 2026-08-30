#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsConvertDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DAE5602EAC86A397_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157ED550)
#define CLASS_3_DAE5602EAC86A397__CTOR_OFFSET UNITYSDK_OFFSET(0x157ED520)

inline static constexpr unsigned int Class_3_DAE5602EAC86A397_TypeDefinitionIndex = 54856;

class Class_3_DAE5602EAC86A397 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsConvertDamage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + CLASS_3_DAE5602EAC86A397__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAE5602EAC86A397_EVALUATE_OFFSET))(this);
	}
};
