#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAnimStateLogicType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_39A44DB2FA36BBE0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x154A83A0)
#define CLASS_3_39A44DB2FA36BBE0__CTOR_OFFSET UNITYSDK_OFFSET(0x154A8370)

inline static constexpr unsigned int Class_3_39A44DB2FA36BBE0_TypeDefinitionIndex = 54694;

class Class_3_39A44DB2FA36BBE0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAnimStateLogicType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + CLASS_3_39A44DB2FA36BBE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39A44DB2FA36BBE0_EVALUATE_OFFSET))(this);
	}
};
