#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsAllPuzzleStateMatchedClientOnly; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C8454945B77E0489_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12E87A30)
#define CLASS_3_C8454945B77E0489_METHOD_3_40DB3CE45BAD8166_OFFSET UNITYSDK_OFFSET(0x12E87CB0)
#define CLASS_3_C8454945B77E0489__CTOR_OFFSET UNITYSDK_OFFSET(0x12E87A00)

inline static constexpr unsigned int Class_3_C8454945B77E0489_TypeDefinitionIndex = 58133;

class Class_3_C8454945B77E0489 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_C8454945B77E0489__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8454945B77E0489_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_3_40DB3CE45BAD8166(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_C8454945B77E0489_METHOD_3_40DB3CE45BAD8166_OFFSET))(this, a1, a2, a3);
	}
};
