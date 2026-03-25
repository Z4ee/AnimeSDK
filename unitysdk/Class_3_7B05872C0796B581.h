#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasExtraAvatarBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7B05872C0796B581_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10AB0280)
#define CLASS_3_7B05872C0796B581__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB0250)

inline static constexpr unsigned int Class_3_7B05872C0796B581_TypeDefinitionIndex = 43567;

class Class_3_7B05872C0796B581 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasExtraAvatarBaseType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasExtraAvatarBaseType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasExtraAvatarBaseType*))((::PBYTE)hIl2Cpp + CLASS_3_7B05872C0796B581__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B05872C0796B581_EVALUATE_OFFSET))(this);
	}
};
