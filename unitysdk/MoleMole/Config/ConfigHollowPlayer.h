#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigAutoMoveMode.h"
#include "unitysdk/MoleMole/Config/ConfigMedalGuide.h"
#include "unitysdk/Share/EItemType.h"

namespace MoleMole::Config { class ConfigHollowPlayerMove; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C43340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayer_TypeDefinitionIndex = 71112;

	class ConfigHollowPlayer : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigHollowPlayerMove* configMove; // 0x58
		::System::String* canTriggerEventSheetAnimKey; // 0x60
		::System::Int32 canTriggerEventVideoId; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* ItemCollectItemIdForbiddenList; // 0x70
		::System::Collections::Generic::List_1<::Share::EItemType>* ItemCollectItemTypeForbiddenList; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* ItemCollectItemTypeWhiteList; // 0x80
		::MoleMole::Config::ConfigAutoMoveMode ConfigAutoMoveMode; // 0x88
		::MoleMole::Config::ConfigMedalGuide ConfigMedalGuide; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER__CTOR_OFFSET))(this);
		}
	};
}
