#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CHARACTERCAMERADITHERINGDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x134796B0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterCameraDitheringData_TypeDefinitionIndex = 68160;

	struct alignas(8) CharacterCameraDitheringData
	{
		static ::MoleMole::CharacterCameraDitheringData* StaticGet_Default()
		{
			return (::MoleMole::CharacterCameraDitheringData*)Il2CppClass::FromTypeDefinitionIndex(CharacterCameraDitheringData_TypeDefinitionIndex)->GetStaticField(0x40B30);
		}
		::System::Single fadeInTime; // 0x10
		::System::Single fadeOutTime; // 0x14
		::System::UInt32 MaxDitherHeightStepTimes; // 0x18
		::UnityEngine::Vector2 DitherFadeDistance; // 0x1C
		::UnityEngine::Vector2 DitherAlphaMinMaxValues; // 0x24
		::UnityEngine::AnimationCurve* DistanceCurve; // 0x30
		::System::Boolean IsUseCamElevationRatio; // 0x38
		::System::Single CamClampDistance; // 0x3C
		::UnityEngine::AnimationCurve* CamElevationRatioCurve; // 0x40
		::UnityEngine::AnimationCurve* overrieCamRotationRatioCurve; // 0x48
		::System::Boolean isDefault; // 0x50

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERCAMERADITHERINGDATA__CCTOR_OFFSET))();
		}
	};
}
