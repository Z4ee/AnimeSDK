#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareParamString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3183B892826A8387_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16F3E000)
#define CLASS_3_3183B892826A8387__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3DFD0)

inline static constexpr unsigned int Class_3_3183B892826A8387_TypeDefinitionIndex = 52081;

class Class_3_3183B892826A8387 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareParamString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareParamString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + CLASS_3_3183B892826A8387__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3183B892826A8387_EVALUATE_OFFSET))(this);
	}
};
