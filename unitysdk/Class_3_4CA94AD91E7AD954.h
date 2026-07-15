#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCountOfBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4CA94AD91E7AD954_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1845D1E0)
#define CLASS_3_4CA94AD91E7AD954__CTOR_OFFSET UNITYSDK_OFFSET(0x1845D1B0)

inline static constexpr unsigned int Class_3_4CA94AD91E7AD954_TypeDefinitionIndex = 52902;

class Class_3_4CA94AD91E7AD954 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCountOfBaseType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + CLASS_3_4CA94AD91E7AD954__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CA94AD91E7AD954_EVALUATE_OFFSET))(this);
	}
};
