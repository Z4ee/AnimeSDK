#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E04EA714F2B36785.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ST_EnchantTargetDistanceType.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_D0A85D81E6A62D1A_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x992E5C0)
#define CLASS_3_D0A85D81E6A62D1A_METHOD_3_0409D4086F4E24CC_OFFSET UNITYSDK_OFFSET(0x992E230)
#define CLASS_3_D0A85D81E6A62D1A_METHOD_3_1881374A62156605_OFFSET UNITYSDK_OFFSET(0x992E550)
#define CLASS_3_D0A85D81E6A62D1A_METHOD_3_270D9B90CE21AF4A_OFFSET UNITYSDK_OFFSET(0x992E5D0)
#define CLASS_3_D0A85D81E6A62D1A_METHOD_3_5E2DF54AC78F9E1B_OFFSET UNITYSDK_OFFSET(0x992E3D0)
#define CLASS_3_D0A85D81E6A62D1A_METHOD_3_DFADA95062DD17FE_OFFSET UNITYSDK_OFFSET(0x992E5E0)
#define CLASS_3_D0A85D81E6A62D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x992E1E0)

inline static constexpr unsigned int Class_3_D0A85D81E6A62D1A_TypeDefinitionIndex = 52559;

class Class_3_D0A85D81E6A62D1A : public ::Class_2_E04EA714F2B36785
{
public:
	::System::Nullable_1<::System::Single> Field_3_2; // 0x90
	::System::Nullable_1<::System::Single> Field_3_1; // 0x98
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D0A85D81E6A62D1A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_0409D4086F4E24CC(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D0A85D81E6A62D1A_METHOD_3_0409D4086F4E24CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5E2DF54AC78F9E1B(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D0A85D81E6A62D1A_METHOD_3_5E2DF54AC78F9E1B_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_3_1881374A62156605(::RPG::GameCore::ST_EnchantTargetDistanceType a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::ST_EnchantTargetDistanceType))((::PBYTE)hIl2Cpp + CLASS_3_D0A85D81E6A62D1A_METHOD_3_1881374A62156605_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0A85D81E6A62D1A_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_3_270D9B90CE21AF4A(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D0A85D81E6A62D1A_METHOD_3_270D9B90CE21AF4A_OFFSET))(this, P0, P1);
	}

	::System::Void Method_3_DFADA95062DD17FE(::RPG::GameCore::AdventureModifierInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D0A85D81E6A62D1A_METHOD_3_DFADA95062DD17FE_OFFSET))(this, P0);
	}
};
