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

#define CLASS_2_6CCF0FA73FEFDF0F_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xC443580)
#define CLASS_2_6CCF0FA73FEFDF0F_GET__PAUSEMOVEMENTREASON_OFFSET UNITYSDK_OFFSET(0xC443570)
#define CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_1269AF86FE25AECE_OFFSET UNITYSDK_OFFSET(0xC4435A0)
#define CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_26425164249B8282_OFFSET UNITYSDK_OFFSET(0xC442DE0)
#define CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_35EC8651325C3E17_OFFSET UNITYSDK_OFFSET(0xC443450)
#define CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_388E2FFEE65B2EED_OFFSET UNITYSDK_OFFSET(0xC4433C0)
#define CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xC443590)
#define CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_A94F8C6A6FE5DDA5_OFFSET UNITYSDK_OFFSET(0xC4434E0)
#define CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xC442D90)
#define CLASS_2_6CCF0FA73FEFDF0F__CTOR_OFFSET UNITYSDK_OFFSET(0xC442D30)

inline static constexpr unsigned int Class_2_6CCF0FA73FEFDF0F_TypeDefinitionIndex = 53261;

class Class_2_6CCF0FA73FEFDF0F : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x68
	::RPG::GameCore::AdventureAbilityComponent* Field_2_3; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78
	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason __PauseMovementReason_k__BackingField; // 0x7C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_26425164249B8282(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_26425164249B8282_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AnimatorSpeedMultiplyReason Method_2_388E2FFEE65B2EED()
	{
		return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_388E2FFEE65B2EED_OFFSET))(this);
	}

	::RPG::GameCore::PauseAbilityReason Method_2_35EC8651325C3E17()
	{
		return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_35EC8651325C3E17_OFFSET))(this);
	}

	::RPG::GameCore::FreezeMovementReason Method_2_A94F8C6A6FE5DDA5()
	{
		return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_A94F8C6A6FE5DDA5_OFFSET))(this);
	}

	::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason get__PauseMovementReason()
	{
		return ((::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_GET__PAUSEMOVEMENTREASON_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_1269AF86FE25AECE(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_6CCF0FA73FEFDF0F_METHOD_2_1269AF86FE25AECE_OFFSET))(this, a1, a2, a3);
	}
};
