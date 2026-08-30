#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByFuncUnlockCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FCA1092D7AAED868_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159D6410)
#define CLASS_3_FCA1092D7AAED868__CTOR_OFFSET UNITYSDK_OFFSET(0x159D63E0)

inline static constexpr unsigned int Class_3_FCA1092D7AAED868_TypeDefinitionIndex = 52375;

class Class_3_FCA1092D7AAED868 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByFuncUnlockCheck*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + CLASS_3_FCA1092D7AAED868__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCA1092D7AAED868_EVALUATE_OFFSET))(this);
	}
};
