#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class ByAnimatorParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_516640CA67D94E6A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x129DDC30)
#define CLASS_3_516640CA67D94E6A_METHOD_3_70AFEAC66C0AFCDE_OFFSET UNITYSDK_OFFSET(0x129DDFB0)
#define CLASS_3_516640CA67D94E6A__CTOR_OFFSET UNITYSDK_OFFSET(0x129DDC00)

inline static constexpr unsigned int Class_3_516640CA67D94E6A_TypeDefinitionIndex = 50259;

class Class_3_516640CA67D94E6A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAnimatorParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnimatorParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + CLASS_3_516640CA67D94E6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_516640CA67D94E6A_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_70AFEAC66C0AFCDE(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_3_516640CA67D94E6A_METHOD_3_70AFEAC66C0AFCDE_OFFSET))(this, a1);
	}
};
