#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_45875617D4370C0D_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x18AF3160)
#define CLASS_2_45875617D4370C0D_METHOD_2_74B53E9267CE3010_OFFSET UNITYSDK_OFFSET(0x18AF3060)
#define CLASS_2_45875617D4370C0D_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x18AF2FB0)
#define CLASS_2_45875617D4370C0D_METHOD_2_F6EEA5546296EDDD_OFFSET UNITYSDK_OFFSET(0x18AF3000)
#define CLASS_2_45875617D4370C0D__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF2F70)

inline static constexpr unsigned int Class_2_45875617D4370C0D_TypeDefinitionIndex = 54492;

class Class_2_45875617D4370C0D : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x68
	::RPG::GameCore::AdventureAbilityComponent* Field_2_1; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_45875617D4370C0D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45875617D4370C0D_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_F6EEA5546296EDDD()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45875617D4370C0D_METHOD_2_F6EEA5546296EDDD_OFFSET))(this);
	}

	::System::Void Method_2_74B53E9267CE3010(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_45875617D4370C0D_METHOD_2_74B53E9267CE3010_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45875617D4370C0D_GET_FLAG_OFFSET))(this);
	}
};
