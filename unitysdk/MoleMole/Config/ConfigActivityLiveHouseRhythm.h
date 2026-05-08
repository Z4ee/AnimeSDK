#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseSpineEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseTrackHeadEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSettingData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSpineEmojiData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseTrackHeadEmojiData.h"

namespace MoleMole::Config { class ActivityLiveHouseConstValue; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CHECKEMOJIDATACHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x12D32780)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CHECKEMOJIDATAEMOJITYPEDATA_OFFSET UNITYSDK_OFFSET(0x12D328D0)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CHECKEMOJIDATAEMOJITYPEPATHCOUNT_OFFSET UNITYSDK_OFFSET(0x12D32B90)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D32E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseRhythm_TypeDefinitionIndex = 51944;

	class ConfigActivityLiveHouseRhythm : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ActivityLiveHouseConstValue* ConstValue; // 0x58
		::MoleMole::MusicGame::FLiveHouseSettingData SettingData; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>* EmojiData; // 0xC8
		::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* SpineEmojiData; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckEmojiDataCharacterData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CHECKEMOJIDATACHARACTERDATA_OFFSET))(this);
		}

		::System::Boolean CheckEmojiDataEmojiTypeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CHECKEMOJIDATAEMOJITYPEDATA_OFFSET))(this);
		}

		::System::Boolean CheckEmojiDataEmojiTypePathCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CHECKEMOJIDATAEMOJITYPEPATHCOUNT_OFFSET))(this);
		}
	};
}
