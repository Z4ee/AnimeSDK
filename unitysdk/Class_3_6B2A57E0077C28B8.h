#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareGraphDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B2A57E0077C28B8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18DC5070)
#define CLASS_3_6B2A57E0077C28B8__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC5040)

inline static constexpr unsigned int Class_3_6B2A57E0077C28B8_TypeDefinitionIndex = 50177;

class Class_3_6B2A57E0077C28B8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareGraphDynamicString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + CLASS_3_6B2A57E0077C28B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B2A57E0077C28B8_EVALUATE_OFFSET))(this);
	}
};
