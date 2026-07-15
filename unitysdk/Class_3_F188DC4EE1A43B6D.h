#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsElfRestaurantRecipeCooked; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F188DC4EE1A43B6D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17F26380)
#define CLASS_3_F188DC4EE1A43B6D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F26340)

inline static constexpr unsigned int Class_3_F188DC4EE1A43B6D_TypeDefinitionIndex = 52179;

class Class_3_F188DC4EE1A43B6D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsElfRestaurantRecipeCooked*>
{
public:
	::System::UInt32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + CLASS_3_F188DC4EE1A43B6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F188DC4EE1A43B6D_EVALUATE_OFFSET))(this);
	}
};
