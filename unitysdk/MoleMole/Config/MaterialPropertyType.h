#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyType_TypeDefinitionIndex = 71624;

	enum class MaterialPropertyType : ::System::Int32
	{
		Transition = 0,
		AbnormalPropertyElectro = 20,
		AbnormalPropertyBurn = 21,
		IgnisFatuusMask = 24,
		GhostMask = 23,
		Other = 19,
		NoiseLerp = 27,
		Glitch = 1,
		Fresnel = 12,
		Diffuse = 11,
		Override = 2,
		RimGlow = 17,
		AbnormalPropertyFreeze = 22,
		WeaponBallMainMaps = 25,
		OverrideOutline = 9,
		Override2Tone = 5,
		ClipPlane = 7,
		MatCap = 14,
		VertexStretch = 6,
		AbnormalProperty = 18,
		Blush = 28,
		OverrideRimGlow = 13,
		ScreenImage = 4,
		Outline = 16,
		SceneEmission = 29,
		Unknown = -1,
		MainMaps = 10,
		Dither = 15,
		SecondaryEmission = 3,
		SecondaryAlbedo = 30,
		SpecialWeaponEmission = 26,
	};
}
