#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityColorAdjustment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x17533B50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityColorAdjustments_TypeDefinitionIndex = 76057;

	class ConfigEntityColorAdjustments : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultPostExposure; // 0x58
		::System::Single DefaultContrast; // 0x5C
		::UnityEngine::Color DefaultColorFilter; // 0x60
		::System::Single DefaultHueShift; // 0x70
		::System::Single DefaultSaturation; // 0x74
		::System::Single DefaultDesaturate; // 0x78
		::System::Boolean DefaultApplyLutToSkybox; // 0x7C
		::System::Single DefaultSkySaturation; // 0x80
		::System::Single DefaultSkyContrast; // 0x84
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>* Effects; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENTS__CTOR_OFFSET))(this);
		}
	};
}
