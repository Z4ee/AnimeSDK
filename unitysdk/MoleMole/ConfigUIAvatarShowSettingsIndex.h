#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ConfigBuddyAvatarShowSettingsIndexEntry.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowSettingsIndexEntry.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGUIAVATARSHOWSETTINGSINDEX_GET_INDEXASSETPATH_OFFSET UNITYSDK_OFFSET(0x1B5775F0)
#define MOLEMOLE_CONFIGUIAVATARSHOWSETTINGSINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B577640)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowSettingsIndex_TypeDefinitionIndex = 43480;

	class ConfigUIAvatarShowSettingsIndex : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* ASSET_PATH; // 0x0
		::Il2CppArray<::MoleMole::ConfigUIAvatarShowSettingsIndexEntry>* AvatarEntries; // 0x58
		::Il2CppArray<::MoleMole::ConfigBuddyAvatarShowSettingsIndexEntry>* BuddyEntries; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWSETTINGSINDEX__CTOR_OFFSET))(this);
		}

		static ::Foundation::AssetPath get_IndexAssetPath()
		{
			return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWSETTINGSINDEX_GET_INDEXASSETPATH_OFFSET))();
		}
	};
}
