#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfDspBusLinkType_TypeDefinitionIndex = 37872;

	enum class CriAtomExAcf_AcfDspBusLinkType : ::System::UInt32
	{
		preVolume = 0x0,
		postVolume = 0x1,
		postPan = 0x2,
	};
}
