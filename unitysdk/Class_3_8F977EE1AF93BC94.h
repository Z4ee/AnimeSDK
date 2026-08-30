#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareIsWolfBroPuzzleAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8F977EE1AF93BC94_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD237AA0)
#define CLASS_3_8F977EE1AF93BC94__CTOR_OFFSET UNITYSDK_OFFSET(0xD237A70)

inline static constexpr unsigned int Class_3_8F977EE1AF93BC94_TypeDefinitionIndex = 52849;

class Class_3_8F977EE1AF93BC94 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_8F977EE1AF93BC94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F977EE1AF93BC94_EVALUATE_OFFSET))(this);
	}
};
