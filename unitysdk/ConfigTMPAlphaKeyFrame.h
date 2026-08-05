#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigTMPKeyFrameBase.h"

#define CONFIGTMPALPHAKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD9390)

inline static constexpr unsigned int ConfigTMPAlphaKeyFrame_TypeDefinitionIndex = 87872;

class ConfigTMPAlphaKeyFrame : public ::ConfigTMPKeyFrameBase
{
public:
	::System::Byte Alpha; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTMPALPHAKEYFRAME__CTOR_OFFSET))(this);
	}
};
