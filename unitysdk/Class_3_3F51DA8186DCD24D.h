#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsEraFlipperEntityShow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3F51DA8186DCD24D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16B52A30)
#define CLASS_3_3F51DA8186DCD24D__CTOR_OFFSET UNITYSDK_OFFSET(0x16B52A00)

inline static constexpr unsigned int Class_3_3F51DA8186DCD24D_TypeDefinitionIndex = 50367;

class Class_3_3F51DA8186DCD24D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsEraFlipperEntityShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + CLASS_3_3F51DA8186DCD24D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F51DA8186DCD24D_EVALUATE_OFFSET))(this);
	}
};
