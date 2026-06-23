#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyType_TypeDefinitionIndex = 71578;

	enum class MaterialPropertyType : ::System::Int32
	{
		NoiseLerp = 27,
		Override = 2,
		AbnormalPropertyElectro = 20,
		Blush = 28,
		GhostMask = 23,
		Unknown = -1,
		ScreenImage = 4,
		Outline = 16,
		SpecialWeaponEmission = 26,
		AbnormalProperty = 18,
		AbnormalPropertyFreeze = 22,
		AbnormalPropertyBurn = 21,
		OverrideOutline = 9,
		IgnisFatuusMask = 24,
		Dither = 15,
		WeaponBallMainMaps = 25,
		Override2Tone = 5,
		Glitch = 1,
		VertexStretch = 6,
		Diffuse = 11,
		MainMaps = 10,
		ClipPlane = 7,
		SecondaryEmission = 3,
		MatCap = 14,
		RimGlow = 17,
		Other = 19,
		OverrideRimGlow = 13,
		Fresnel = 12,
		Transition = 0,
	};
}
