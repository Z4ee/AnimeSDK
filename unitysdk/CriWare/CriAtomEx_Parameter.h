#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Parameter_TypeDefinitionIndex = 37800;

	enum class CriAtomEx_Parameter : ::System::Int32
	{
		Volume = 0,
		Pitch = 1,
		Pan3dAngle = 2,
		Pan3dDistance = 3,
		Pan3dVolume = 4,
		BusSendLevel0 = 9,
		BusSendLevel1 = 10,
		BusSendLevel2 = 11,
		BusSendLevel3 = 12,
		BusSendLevel4 = 13,
		BusSendLevel5 = 14,
		BusSendLevel6 = 15,
		BusSendLevel7 = 16,
		BandPassFilterCofLow = 17,
		BandPassFilterCofHigh = 18,
		BiquadFilterType = 19,
		BiquadFilterFreq = 20,
		BiquadFIlterQ = 21,
		BiquadFilterGain = 22,
		EnvelopeAttackTime = 23,
		EnvelopeHoldTime = 24,
		EnvelopeDecayTime = 25,
		EnvelopeReleaseTime = 26,
		EnvelopeSustainLevel = 27,
		StartTime = 28,
		Priority = 31,
	};
}
