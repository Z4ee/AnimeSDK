#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x186B8340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXColorCorrections_TypeDefinitionIndex = 45462;

	class ConfigEntityFXColorCorrections : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultWeatherConfigWeight; // 0x58
		::System::Single DefaultPostExposure; // 0x5C
		::System::Single DefaultContrast; // 0x60
		::System::Single DefaultSaturation; // 0x64
		::System::Single DefaultGamma; // 0x68
		::System::Boolean DefaultLutInvert; // 0x6C
		::System::Boolean DefaultLutToneColors; // 0x6D
		::UnityEngine::Color DefaultLutToneA; // 0x70
		::UnityEngine::Color DefaultLutToneB; // 0x80
		::System::Single DefaultLutMiddlePoint; // 0x90
		::System::Single DefaultLutSoftness; // 0x94
		::System::Single DefaultDesaturate; // 0x98
		::System::Boolean DefaultInvert; // 0x9C
		::System::Boolean DefaultToneColors; // 0x9D
		::UnityEngine::Color DefaultToneA; // 0xA0
		::UnityEngine::Color DefaultToneB; // 0xB0
		::System::Single DefaultMiddlePoint; // 0xC0
		::System::Single DefaultSoftness; // 0xC4
		::System::Boolean DefaultFxFogMaskPassOn; // 0xC8
		::System::Single DefaultFxColorSaturation; // 0xCC
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>* Effects; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTIONS__CTOR_OFFSET))(this);
		}
	};
}
