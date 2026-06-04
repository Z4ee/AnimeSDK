#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareItemNum; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ED1619E4598CF9C9_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF6A450)
#define CLASS_3_ED1619E4598CF9C9__CTOR_OFFSET UNITYSDK_OFFSET(0xBF6A420)

inline static constexpr unsigned int Class_3_ED1619E4598CF9C9_TypeDefinitionIndex = 49172;

class Class_3_ED1619E4598CF9C9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareItemNum*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareItemNum* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + CLASS_3_ED1619E4598CF9C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED1619E4598CF9C9_EVALUATE_OFFSET))(this);
	}
};
