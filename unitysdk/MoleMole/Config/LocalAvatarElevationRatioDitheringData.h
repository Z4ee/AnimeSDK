#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int LocalAvatarElevationRatioDitheringData_TypeDefinitionIndex = 48712;

	struct alignas(8) LocalAvatarElevationRatioDitheringData
	{
		static ::MoleMole::Config::LocalAvatarElevationRatioDitheringData* StaticGet_Default()
		{
			return (::MoleMole::Config::LocalAvatarElevationRatioDitheringData*)Il2CppClass::FromTypeDefinitionIndex(LocalAvatarElevationRatioDitheringData_TypeDefinitionIndex)->GetStaticField(0x46180);
		}
		::System::Boolean IsUseCamElevationRatio; // 0x10
		::System::Boolean IsOnlyMainCityAvatar; // 0x11
		::UnityEngine::AnimationCurve* CamElevationRatioCurve; // 0x18
		::UnityEngine::AnimationCurve* CamRotationRatioCurve; // 0x20
		::System::Single DitherMaxRoatationX; // 0x28
		::System::Single DitherMinRoatationX; // 0x2C
		::System::Single defaultClampDis; // 0x30
	};
}
