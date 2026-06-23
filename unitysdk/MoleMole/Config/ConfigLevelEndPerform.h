#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole::Config { class ConfigLevelEndCameraEffect; }
namespace MoleMole::Config { class ConfigLevelEndTimeSlow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLEVELENDPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18F36340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelEndPerform_TypeDefinitionIndex = 39660;

	class ConfigLevelEndPerform : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::LevelEndType, ::System::Single>* DelayExitTime; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::LevelEndType, ::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*>* CameraShots; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::LevelEndType, ::MoleMole::Config::ConfigLevelEndTimeSlow*>* TimeSlows; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>* MuteMaterialProperties; // 0x28
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::LevelEndType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*>* CameraVolumeEffect; // 0x30
		::System::Single CloseMainPageDelayTime; // 0x38
		::System::Single LoseLevelResultPageDelayShowTime; // 0x3C
		::System::Single LevelResultPageDelayShowTime; // 0x40
		::System::Boolean GroundIKForbidden; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELENDPERFORM__CTOR_OFFSET))(this);
		}
	};
}
