#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/RPG/GameCore/FreezeMovementReason.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_A41300C729BF3C51_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x12568250)
#define CLASS_2_A41300C729BF3C51_GET__PAUSEMOVEMENTREASON_OFFSET UNITYSDK_OFFSET(0x12568240)
#define CLASS_2_A41300C729BF3C51_METHOD_2_26425164249B8282_OFFSET UNITYSDK_OFFSET(0x12567AA0)
#define CLASS_2_A41300C729BF3C51_METHOD_2_35EC8651325C3E17_OFFSET UNITYSDK_OFFSET(0x12568120)
#define CLASS_2_A41300C729BF3C51_METHOD_2_388E2FFEE65B2EED_OFFSET UNITYSDK_OFFSET(0x12568090)
#define CLASS_2_A41300C729BF3C51_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x12567A50)
#define CLASS_2_A41300C729BF3C51_METHOD_2_A94F8C6A6FE5DDA5_OFFSET UNITYSDK_OFFSET(0x125681B0)
#define CLASS_2_A41300C729BF3C51_METHOD_2_CE4CE294A670DA1B_OFFSET UNITYSDK_OFFSET(0x12568270)
#define CLASS_2_A41300C729BF3C51_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x12568260)
#define CLASS_2_A41300C729BF3C51__CTOR_OFFSET UNITYSDK_OFFSET(0x125679F0)

inline static constexpr unsigned int Class_2_A41300C729BF3C51_TypeDefinitionIndex = 52561;

class Class_2_A41300C729BF3C51 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::RPG::GameCore::AdventureAbilityComponent* Field_2_2; // 0x68
	::RPG::GameCore::AdventureCharacterController* Field_2_3; // 0x70
	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason __PauseMovementReason_k__BackingField; // 0x78
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x7C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_26425164249B8282(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_METHOD_2_26425164249B8282_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AnimatorSpeedMultiplyReason Method_2_388E2FFEE65B2EED()
	{
		return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_METHOD_2_388E2FFEE65B2EED_OFFSET))(this);
	}

	::RPG::GameCore::PauseAbilityReason Method_2_35EC8651325C3E17()
	{
		return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_METHOD_2_35EC8651325C3E17_OFFSET))(this);
	}

	::RPG::GameCore::FreezeMovementReason Method_2_A94F8C6A6FE5DDA5()
	{
		return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_METHOD_2_A94F8C6A6FE5DDA5_OFFSET))(this);
	}

	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason get__PauseMovementReason()
	{
		return ((::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_GET__PAUSEMOVEMENTREASON_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_CE4CE294A670DA1B(::System::Boolean P0, ::System::Boolean P1, ::RPG::GameCore::AdventureFeatureNormalActiveReason P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_A41300C729BF3C51_METHOD_2_CE4CE294A670DA1B_OFFSET))(this, P0, P1, P2);
	}
};
