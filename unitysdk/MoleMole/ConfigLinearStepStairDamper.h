#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigSingleAxisDamper.h"

#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D316E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearStepStairDamper_TypeDefinitionIndex = 46977;

	class ConfigLinearStepStairDamper : public ::MoleMole::ConfigSingleAxisDamper
	{
	public:
		::System::Boolean BaselineOffsetPlane; // 0x38
		::System::Boolean UseFirstStepHeightAsRelativeRatio; // 0x39
		::System::Single StepRatio; // 0x3C
		::System::Single AbsoluteOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER__CTOR_OFFSET))(this);
		}
	};
}
