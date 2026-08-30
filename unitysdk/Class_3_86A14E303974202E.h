#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByComparePropertyRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_86A14E303974202E_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFA8AAA0)
#define CLASS_3_86A14E303974202E__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8AA70)

inline static constexpr unsigned int Class_3_86A14E303974202E_TypeDefinitionIndex = 54128;

class Class_3_86A14E303974202E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByComparePropertyRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByComparePropertyRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByComparePropertyRatio*))((::PBYTE)hIl2Cpp + CLASS_3_86A14E303974202E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86A14E303974202E_EVALUATE_OFFSET))(this);
	}
};
