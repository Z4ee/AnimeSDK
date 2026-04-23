#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareEntityAuthoritySide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C94C06E13E027F48_EVALUATE_OFFSET UNITYSDK_OFFSET(0x117C72D0)
#define CLASS_3_C94C06E13E027F48__CTOR_OFFSET UNITYSDK_OFFSET(0x117C72A0)

inline static constexpr unsigned int Class_3_C94C06E13E027F48_TypeDefinitionIndex = 48524;

class Class_3_C94C06E13E027F48 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareEntityAuthoritySide*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + CLASS_3_C94C06E13E027F48__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C94C06E13E027F48_EVALUATE_OFFSET))(this);
	}
};
