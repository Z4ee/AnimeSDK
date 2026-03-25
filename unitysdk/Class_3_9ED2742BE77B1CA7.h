#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareBaseTypeCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9ED2742BE77B1CA7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD19B7B0)
#define CLASS_3_9ED2742BE77B1CA7__CTOR_OFFSET UNITYSDK_OFFSET(0xD19B780)

inline static constexpr unsigned int Class_3_9ED2742BE77B1CA7_TypeDefinitionIndex = 44369;

class Class_3_9ED2742BE77B1CA7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareBaseTypeCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + CLASS_3_9ED2742BE77B1CA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9ED2742BE77B1CA7_EVALUATE_OFFSET))(this);
	}
};
