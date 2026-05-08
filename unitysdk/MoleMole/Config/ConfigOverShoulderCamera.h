#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xF980030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOverShoulderCamera_TypeDefinitionIndex = 64822;

	class ConfigOverShoulderCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>* OverShoulderCameraConfigDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>* OverrideOverShoulderCameraConfigDict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA__CTOR_OFFSET))(this);
		}
	};
}
