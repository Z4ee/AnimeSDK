#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareGPwithGP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AC893CE2DB1C4515_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17FB4E80)
#define CLASS_3_AC893CE2DB1C4515__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB4E50)

inline static constexpr unsigned int Class_3_AC893CE2DB1C4515_TypeDefinitionIndex = 52838;

class Class_3_AC893CE2DB1C4515 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareGPwithGP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + CLASS_3_AC893CE2DB1C4515__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC893CE2DB1C4515_EVALUATE_OFFSET))(this);
	}
};
