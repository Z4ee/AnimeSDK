#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ST_ByAIHangUp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F6F91B142FA30B50_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAF3BBE0)
#define CLASS_3_F6F91B142FA30B50__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3BB80)

inline static constexpr unsigned int Class_3_F6F91B142FA30B50_TypeDefinitionIndex = 48793;

class Class_3_F6F91B142FA30B50 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByAIHangUp*>
{
public:
	::Class_2_9D4DD2F4235F8658* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + CLASS_3_F6F91B142FA30B50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6F91B142FA30B50_EVALUATE_OFFSET))(this);
	}
};
