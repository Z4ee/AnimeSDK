#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareHeartDialScriptEmo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_52118C1D53E27AC3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x128BC980)
#define CLASS_3_52118C1D53E27AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x128BC950)

inline static constexpr unsigned int Class_3_52118C1D53E27AC3_TypeDefinitionIndex = 48538;

class Class_3_52118C1D53E27AC3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareHeartDialScriptEmo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*))((::PBYTE)hIl2Cpp + CLASS_3_52118C1D53E27AC3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52118C1D53E27AC3_EVALUATE_OFFSET))(this);
	}
};
