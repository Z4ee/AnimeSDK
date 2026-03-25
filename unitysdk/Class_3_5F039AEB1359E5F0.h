#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A41300C729BF3C51.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/RPG/GameCore/FreezeMovementReason.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_5F039AEB1359E5F0_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1110BF20)
#define CLASS_3_5F039AEB1359E5F0_GET__PAUSEMOVEMENTREASON_OFFSET UNITYSDK_OFFSET(0x1110BF30)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_1B44EB64C3224E4D_OFFSET UNITYSDK_OFFSET(0x1110BD70)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_3A60F729BCD2D5C6_OFFSET UNITYSDK_OFFSET(0x1110BF40)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_65A8C1B579AAAE11_OFFSET UNITYSDK_OFFSET(0x1110BE80)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_A957C08C2E904AE3_OFFSET UNITYSDK_OFFSET(0x1110BE30)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_C059A8AD92ECC6C2_OFFSET UNITYSDK_OFFSET(0x1110BF60)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_F6EA0C48C8320224_OFFSET UNITYSDK_OFFSET(0x1110BF70)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_F8582760D7ADEF4C_OFFSET UNITYSDK_OFFSET(0x1110BF50)
#define CLASS_3_5F039AEB1359E5F0_METHOD_3_FAF19B947CCA348B_OFFSET UNITYSDK_OFFSET(0x1110BED0)
#define CLASS_3_5F039AEB1359E5F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1110BD00)

inline static constexpr unsigned int Class_3_5F039AEB1359E5F0_TypeDefinitionIndex = 45904;

class Class_3_5F039AEB1359E5F0 : public ::Class_2_A41300C729BF3C51
{
public:
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x80
	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason __PauseMovementReason_k__BackingField; // 0x84

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B44EB64C3224E4D(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_1B44EB64C3224E4D_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AnimatorSpeedMultiplyReason Method_3_A957C08C2E904AE3()
	{
		return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_A957C08C2E904AE3_OFFSET))(this);
	}

	::RPG::GameCore::PauseAbilityReason Method_3_65A8C1B579AAAE11()
	{
		return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_65A8C1B579AAAE11_OFFSET))(this);
	}

	::RPG::GameCore::FreezeMovementReason Method_3_FAF19B947CCA348B()
	{
		return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_FAF19B947CCA348B_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_GET_FLAG_OFFSET))(this);
	}

	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason get__PauseMovementReason()
	{
		return ((::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_GET__PAUSEMOVEMENTREASON_OFFSET))(this);
	}

	::System::Void Method_3_3A60F729BCD2D5C6(::System::Boolean P0, ::System::Boolean P1, ::RPG::GameCore::AdventureFeatureNormalActiveReason P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_3A60F729BCD2D5C6_OFFSET))(this, P0, P1, P2);
	}

	::RPG::GameCore::AnimatorSpeedMultiplyReason Method_3_F8582760D7ADEF4C()
	{
		return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_F8582760D7ADEF4C_OFFSET))(this);
	}

	::RPG::GameCore::PauseAbilityReason Method_3_C059A8AD92ECC6C2()
	{
		return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_C059A8AD92ECC6C2_OFFSET))(this);
	}

	::RPG::GameCore::FreezeMovementReason Method_3_F6EA0C48C8320224()
	{
		return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F039AEB1359E5F0_METHOD_3_F6EA0C48C8320224_OFFSET))(this);
	}
};
