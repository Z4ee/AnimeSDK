#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStringValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_732A271C540B972F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13660310)
#define CLASS_3_732A271C540B972F__CTOR_OFFSET UNITYSDK_OFFSET(0x136602E0)

inline static constexpr unsigned int Class_3_732A271C540B972F_TypeDefinitionIndex = 51017;

class Class_3_732A271C540B972F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareStringValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStringValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStringValue*))((::PBYTE)hIl2Cpp + CLASS_3_732A271C540B972F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_732A271C540B972F_EVALUATE_OFFSET))(this);
	}
};
