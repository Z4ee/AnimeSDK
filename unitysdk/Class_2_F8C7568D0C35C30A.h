#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_F8C7568D0C35C30A_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x10BAC4D0)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_1B80EE1C517B1E05_OFFSET UNITYSDK_OFFSET(0x10BAC3C0)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x10BAC4F0)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x10BAC2F0)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_88616CED425F4077_OFFSET UNITYSDK_OFFSET(0x10BAC340)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_CE4CE294A670DA1B_OFFSET UNITYSDK_OFFSET(0x10BAC560)
#define CLASS_2_F8C7568D0C35C30A_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x10BAC4E0)
#define CLASS_2_F8C7568D0C35C30A__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAC2A0)

inline static constexpr unsigned int Class_2_F8C7568D0C35C30A_TypeDefinitionIndex = 45896;

class Class_2_F8C7568D0C35C30A : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_2_2; // 0x68
	::Class_2_F67FF7EB526BF85C* Field_2_1; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
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

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_CE4CE294A670DA1B(::System::Boolean P0, ::System::Boolean P1, ::RPG::GameCore::AdventureFeatureNormalActiveReason P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_F8C7568D0C35C30A_METHOD_2_CE4CE294A670DA1B_OFFSET))(this, P0, P1, P2);
	}
};
