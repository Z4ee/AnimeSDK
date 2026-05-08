#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigCameraPitchPolar; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLARS__CTOR_OFFSET UNITYSDK_OFFSET(0x1752AB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraPitchPolars_TypeDefinitionIndex = 69984;

	class ConfigCameraPitchPolars : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*>* cameraPitchPolars; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLARS__CTOR_OFFSET))(this);
		}
	};
}
