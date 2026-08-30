#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveInsertUltraWait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3350E9A285E8D3FE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCE5500)
#define CLASS_3_3350E9A285E8D3FE__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE54D0)

inline static constexpr unsigned int Class_3_3350E9A285E8D3FE_TypeDefinitionIndex = 55110;

class Class_3_3350E9A285E8D3FE : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveInsertUltraWait*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + CLASS_3_3350E9A285E8D3FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3350E9A285E8D3FE_EVALUATE_OFFSET))(this);
	}
};
