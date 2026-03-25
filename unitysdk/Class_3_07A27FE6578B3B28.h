#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPamOnlineFirst; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_07A27FE6578B3B28_EVALUATE_OFFSET UNITYSDK_OFFSET(0x117A3EA0)
#define CLASS_3_07A27FE6578B3B28__CTOR_OFFSET UNITYSDK_OFFSET(0x117A3E70)

inline static constexpr unsigned int Class_3_07A27FE6578B3B28_TypeDefinitionIndex = 43030;

class Class_3_07A27FE6578B3B28 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPamOnlineFirst*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + CLASS_3_07A27FE6578B3B28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07A27FE6578B3B28_EVALUATE_OFFSET))(this);
	}
};
