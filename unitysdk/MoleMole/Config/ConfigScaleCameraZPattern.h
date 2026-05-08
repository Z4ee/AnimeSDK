#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class InteractionCommonData; }

#define MOLEMOLE_CONFIG_CONFIGSCALECAMERAZPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x159F4010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigScaleCameraZPattern_TypeDefinitionIndex = 77659;

	class ConfigScaleCameraZPattern : public ::System::Object
	{
	public:
		::System::Int32 PatternID; // 0x10
		::System::Int32 MaxScaleRatio; // 0x14
		::MoleMole::Config::InteractionCommonData* ScaleCommonData; // 0x18
		::System::Int32 SliderDivisionCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSCALECAMERAZPATTERN__CTOR_OFFSET))(this);
		}
	};
}
