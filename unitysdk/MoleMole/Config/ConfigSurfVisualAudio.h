#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfAttachedEffect.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfVisualAudio_TypeDefinitionIndex = 48154;

	struct alignas(8) ConfigSurfVisualAudio
	{
		::System::String* BoardAttachPoint; // 0x10
		::System::String* BoardAssetPath; // 0x18
		::System::Single SteerBlendSpeed; // 0x20
		::System::Single DriftMaxAngleAnimator; // 0x24
		::UnityEngine::AnimationCurve* AnimLayerOverrideAngularCurve; // 0x28
		::UnityEngine::AnimationCurve* AnimLayerOverrideCurve; // 0x30
		::System::Single AnimLayerOverrideMinInDrift; // 0x38
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* NormalEffects; // 0x40
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* BrakeEffects; // 0x48
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* LeftDriftEffects; // 0x50
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* RightDriftEffects; // 0x58
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* BoostEffects; // 0x60
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* LandingEffects; // 0x68
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* PickItemEffects; // 0x70
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* MagnetEffects; // 0x78
		::Il2CppArray<::MoleMole::Config::SurfAttachedEffect>* SuperStarEffects; // 0x80
		::System::String* BoostScreenEffect; // 0x88
		::System::String* DriftMaterial; // 0x90
		::System::String* MagnetMaterial; // 0x98
		::System::String* SuperStarMaterial; // 0xA0
	};
}
