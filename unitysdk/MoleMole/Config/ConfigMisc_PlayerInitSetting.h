#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGMISC_PLAYERINITSETTING_GETALLAVATARIDS_OFFSET UNITYSDK_OFFSET(0xF97F500)
#define MOLEMOLE_CONFIG_CONFIGMISC_PLAYERINITSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xF97F560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_PlayerInitSetting_TypeDefinitionIndex = 63730;

	class ConfigMisc_PlayerInitSetting : public ::System::Object
	{
	public:
		::System::Int32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_PLAYERINITSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetAllAvatarIDs()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_PLAYERINITSETTING_GETALLAVATARIDS_OFFSET))();
		}
	};
}
