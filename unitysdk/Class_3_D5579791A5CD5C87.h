#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ST_ByAIHangUp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D5579791A5CD5C87_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16466C70)
#define CLASS_3_D5579791A5CD5C87__CTOR_OFFSET UNITYSDK_OFFSET(0x16466BB0)

inline static constexpr unsigned int Class_3_D5579791A5CD5C87_TypeDefinitionIndex = 49806;

class Class_3_D5579791A5CD5C87 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByAIHangUp*>
{
public:
	::Class_2_21055A9FA74B791E* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + CLASS_3_D5579791A5CD5C87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5579791A5CD5C87_EVALUATE_OFFSET))(this);
	}
};
