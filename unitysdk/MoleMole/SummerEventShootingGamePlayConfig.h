#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SummerPlayerWeaponInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x126568E0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventShootingGamePlayConfig_TypeDefinitionIndex = 47794;

	class SummerEventShootingGamePlayConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerPlayerWeaponInfo*>* WeaponConfig; // 0x58
		::System::String* AimTargetSavePointKey; // 0x60
		::System::Single MaxAimDistance; // 0x68
		::System::Single IKDistance; // 0x6C
		::System::String* IKForwardAngleParamName; // 0x70
		::System::String* RotationToTargetPointParamName; // 0x78
		::System::Single IKRotateToTargetPointUpdateAngleDelta; // 0x80
		::UnityEngine::LayerMask HitLayers; // 0x84
		::UnityEngine::LayerMask AimAssisColliderLayers; // 0x88
		::System::String* AimAssisColliderTag; // 0x90
		::System::Single MouseBaseMoveRatio; // 0x98
		::System::Single KeyboardBaseMoveRatio; // 0x9C
		::System::Single GamePadBaseMoveRatio; // 0xA0
		::System::Single TouchScreenBaseMoveRatio; // 0xA4
		::System::String* ChargingSkillValueKey; // 0xA8
		::System::String* ChargingMaxSkillValueKey; // 0xB0
		::System::String* ReloadStartAbilityEventName; // 0xB8
		::System::String* ReloadInterruptAbilityEventName; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ShootCrossHairRange; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemMouseSensitivityLevelXDic; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemMouseSensitivityLevelYDic; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemKeyboardSensitivityLevelXDic; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemKeyboardSensitivityLevelYDic; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemGamePadSensitivityLevelXDic; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemGamePadSensitivityLevelYDic; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemTouchScreenSensitivityLevelXDic; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SystemTouchScreenSensitivityLevelYDic; // 0x108
		::System::Single remainWarningTime; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
