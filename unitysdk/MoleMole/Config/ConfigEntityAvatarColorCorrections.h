#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityAvatarColorCorrection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EA000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAvatarColorCorrections_TypeDefinitionIndex = 46133;

	class ConfigEntityAvatarColorCorrections : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultPostExposure; // 0x58
		::System::Single DefaultContrast; // 0x5C
		::System::Single DefaultSaturation; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>* Effects; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTIONS__CTOR_OFFSET))(this);
		}
	};
}
