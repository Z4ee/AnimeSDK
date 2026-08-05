#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigComicShake; }
namespace MoleMole { class ConfigGalgameEffectDictionary; }
namespace MoleMole { class ConfigGalgameShake; }
namespace MoleMole { class ConfigHideMenuCutSceneVideoList; }
namespace MoleMole { class ConfigHideMenuGalgameList; }
namespace MoleMole { class ConfigUIGachaPage; }
namespace MoleMole { class ConfigUIHackerGame; }
namespace MoleMole { class ConfigUIIconMount; }
namespace MoleMole { class ConfigUIMainCity; }
namespace MoleMole { class ConfigUIMainStory; }
namespace MoleMole::Config { class ConfigOverlordFeast; }

#define MOLEMOLE_CONFIGUISCRIPTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD80CC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIScripts_TypeDefinitionIndex = 69413;

	class ConfigUIScripts : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::ConfigUIMainCity* MainCityConfig; // 0x58
		::MoleMole::ConfigUIMainStory* MainStoryConfig; // 0x60
		::MoleMole::ConfigUIIconMount* UIIconMountConfig; // 0x68
		::MoleMole::ConfigUIGachaPage* GachaPageConfig; // 0x70
		::MoleMole::ConfigGalgameShake* GalgameShakeConfig; // 0x78
		::MoleMole::ConfigGalgameEffectDictionary* GalgameEffectDictionary; // 0x80
		::MoleMole::ConfigComicShake* ComicShakeConfig; // 0x88
		::MoleMole::ConfigHideMenuGalgameList* HideMenuGalgameListConfig; // 0x90
		::MoleMole::ConfigHideMenuCutSceneVideoList* HideMenuCutSceneVideoListConfig; // 0x98
		::MoleMole::Config::ConfigOverlordFeast* OverlordFeastConfig; // 0xA0
		::MoleMole::ConfigUIHackerGame* HackerGameConfig; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISCRIPTS__CTOR_OFFSET))(this);
		}
	};
}
