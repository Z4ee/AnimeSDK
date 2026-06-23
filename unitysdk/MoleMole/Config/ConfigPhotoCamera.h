#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class CharacterConfigPhotoCamera; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERA_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1AA568E0)
#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA56A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCamera_TypeDefinitionIndex = 68539;

	class ConfigPhotoCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::UIConfigPhotoCamera* UIConfigPhotoCamera; // 0x58
		::Il2CppArray<::MoleMole::Config::CharacterConfigPhotoCamera*>* CharacterConfigPhotoCamera; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void ReloadConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERA_RELOADCONFIG_OFFSET))(this);
		}
	};
}
