#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFearCharacterCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_371E0DB37CF4374C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17C98E10)
#define CLASS_3_371E0DB37CF4374C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C98DE0)

inline static constexpr unsigned int Class_3_371E0DB37CF4374C_TypeDefinitionIndex = 52061;

class Class_3_371E0DB37CF4374C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFearCharacterCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + CLASS_3_371E0DB37CF4374C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_371E0DB37CF4374C_EVALUATE_OFFSET))(this);
	}
};
