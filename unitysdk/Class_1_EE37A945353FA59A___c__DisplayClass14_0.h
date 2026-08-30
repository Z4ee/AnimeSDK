#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_EE37A945353FA59A___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A88B70)
#define CLASS_1_EE37A945353FA59A___C__DISPLAYCLASS14_0__EVALUATE_COMPLEXSKILLAISOURCEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x17A8F5E0)

inline static constexpr unsigned int Class_1_EE37A945353FA59A___c__DisplayClass14_0_TypeDefinitionIndex = 54569;

class Class_1_EE37A945353FA59A___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* pFromEntity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Evaluate_ComplexSkillAISourceValue_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EE37A945353FA59A___C__DISPLAYCLASS14_0__EVALUATE_COMPLEXSKILLAISOURCEVALUE_B__0_OFFSET))(this, a1);
	}
};
