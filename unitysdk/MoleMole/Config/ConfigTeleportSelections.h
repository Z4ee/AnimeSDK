#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigTeleportSelection3C; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1753E450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeleportSelections_TypeDefinitionIndex = 78116;

	class ConfigTeleportSelections : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* ButtonIconPath; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeleportSelectionType, ::MoleMole::Config::ConfigTeleportSelection3C*>* TeleportSelections3C; // 0x60
		::UnityEngine::Vector3 UIOffset; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONS__CTOR_OFFSET))(this);
		}
	};
}
