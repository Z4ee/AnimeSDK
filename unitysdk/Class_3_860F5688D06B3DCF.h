#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D27C6C1969655A0D.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/RPG/GameCore/FreezeMovementReason.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_860F5688D06B3DCF_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xC038860)
#define CLASS_3_860F5688D06B3DCF_GET__PAUSEMOVEMENTREASON_OFFSET UNITYSDK_OFFSET(0xC038870)
#define CLASS_3_860F5688D06B3DCF_METHOD_3_65A8C1B579AAAE11_OFFSET UNITYSDK_OFFSET(0xC0387C0)
#define CLASS_3_860F5688D06B3DCF_METHOD_3_7CF566C924618D71_OFFSET UNITYSDK_OFFSET(0xC0386A0)
#define CLASS_3_860F5688D06B3DCF_METHOD_3_A957C08C2E904AE3_OFFSET UNITYSDK_OFFSET(0xC038770)
#define CLASS_3_860F5688D06B3DCF_METHOD_3_FAF19B947CCA348B_OFFSET UNITYSDK_OFFSET(0xC038810)
#define CLASS_3_860F5688D06B3DCF__CTOR_OFFSET UNITYSDK_OFFSET(0xC038630)

inline static constexpr unsigned int Class_3_860F5688D06B3DCF_TypeDefinitionIndex = 57198;

class Class_3_860F5688D06B3DCF : public ::Class_2_D27C6C1969655A0D
{
public:
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x80
	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason __PauseMovementReason_k__BackingField; // 0x84

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_860F5688D06B3DCF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_7CF566C924618D71(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_3_860F5688D06B3DCF_METHOD_3_7CF566C924618D71_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AnimatorSpeedMultiplyReason Method_3_A957C08C2E904AE3()
	{
		return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_860F5688D06B3DCF_METHOD_3_A957C08C2E904AE3_OFFSET))(this);
	}

	::RPG::GameCore::PauseAbilityReason Method_3_65A8C1B579AAAE11()
	{
		return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_860F5688D06B3DCF_METHOD_3_65A8C1B579AAAE11_OFFSET))(this);
	}

	::RPG::GameCore::FreezeMovementReason Method_3_FAF19B947CCA348B()
	{
		return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_860F5688D06B3DCF_METHOD_3_FAF19B947CCA348B_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_860F5688D06B3DCF_GET_FLAG_OFFSET))(this);
	}

	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason get__PauseMovementReason()
	{
		return ((::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_860F5688D06B3DCF_GET__PAUSEMOVEMENTREASON_OFFSET))(this);
	}
};
