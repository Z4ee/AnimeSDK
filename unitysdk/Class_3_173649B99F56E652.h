#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareParamValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_173649B99F56E652_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB782920)
#define CLASS_3_173649B99F56E652__CTOR_OFFSET UNITYSDK_OFFSET(0xB7828F0)

inline static constexpr unsigned int Class_3_173649B99F56E652_TypeDefinitionIndex = 50997;

class Class_3_173649B99F56E652 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareParamValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareParamValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + CLASS_3_173649B99F56E652__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_173649B99F56E652_EVALUATE_OFFSET))(this);
	}
};
