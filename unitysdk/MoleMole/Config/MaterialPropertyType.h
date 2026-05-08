#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyType_TypeDefinitionIndex = 81961;

	enum class MaterialPropertyType : ::System::Int32
	{
		IgnisFatuusMask = 24,
		AbnormalPropertyBurn = 21,
		VertexStretch = 6,
		ClipPlane = 7,
		NoiseLerp = 27,
		AbnormalPropertyFreeze = 22,
		Override2Tone = 5,
		ScreenImage = 4,
		SpecialWeaponEmission = 26,
		Transition = 0,
		Override = 2,
		SecondaryEmission = 3,
		OverrideRimGlow = 13,
		OverrideOutline = 9,
		Blush = 28,
		Outline = 16,
		MatCap = 14,
		Unknown = -1,
		GhostMask = 23,
		Other = 19,
		RimGlow = 17,
		Diffuse = 11,
		Dither = 15,
		MainMaps = 10,
		Glitch = 1,
		AbnormalProperty = 18,
		AbnormalPropertyElectro = 20,
		Fresnel = 12,
		WeaponBallMainMaps = 25,
	};
}
