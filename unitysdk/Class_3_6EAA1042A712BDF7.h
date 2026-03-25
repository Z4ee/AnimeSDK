#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsAllPuzzleStateMatchedClientOnly; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6EAA1042A712BDF7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11451E90)
#define CLASS_3_6EAA1042A712BDF7_METHOD_3_FC6E258A03E9EF7C_OFFSET UNITYSDK_OFFSET(0x114520E0)
#define CLASS_3_6EAA1042A712BDF7__CTOR_OFFSET UNITYSDK_OFFSET(0x11451E60)

inline static constexpr unsigned int Class_3_6EAA1042A712BDF7_TypeDefinitionIndex = 46757;

class Class_3_6EAA1042A712BDF7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_6EAA1042A712BDF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6EAA1042A712BDF7_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_3_FC6E258A03E9EF7C(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_6EAA1042A712BDF7_METHOD_3_FC6E258A03E9EF7C_OFFSET))(this, a1, a2, a3);
	}
};
