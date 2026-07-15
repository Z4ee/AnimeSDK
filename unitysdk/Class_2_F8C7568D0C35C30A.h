#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_F8C7568D0C35C30A_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x18F86560)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_1B80EE1C517B1E05_OFFSET UNITYSDK_OFFSET(0x18F86450)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_88616CED425F4077_OFFSET UNITYSDK_OFFSET(0x18F863D0)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x18F86380)
#define CLASS_2_F8C7568D0C35C30A__CTOR_OFFSET UNITYSDK_OFFSET(0x18F86330)

inline static constexpr unsigned int Class_2_F8C7568D0C35C30A_TypeDefinitionIndex = 54469;

class Class_2_F8C7568D0C35C30A : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_2_0; // 0x68
	::Class_2_F67FF7EB526BF85C* Field_2_1; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_88616CED425F4077()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_METHOD_2_88616CED425F4077_OFFSET))(this);
	}

	::System::Void Method_2_1B80EE1C517B1E05(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_METHOD_2_1B80EE1C517B1E05_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_GET_FLAG_OFFSET))(this);
	}
};
