#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildGearsDetail; }
namespace RPG::Client { class EvolveBuildLevel; }
namespace RPG::Client { class EvolveBuildModule; }
namespace RPG::Client { class EvolveBuildSeasonData; }
namespace RPG::Client { class EvolveBuildStage; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDPAUSE_CREATE_OFFSET UNITYSDK_OFFSET(0xCEE8B90)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_CARDS_OFFSET UNITYSDK_OFFSET(0xCEE9810)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_COINICONPATH_OFFSET UNITYSDK_OFFSET(0xCEE8EF0)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xCEE8D90)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_GEARSDETAIL_OFFSET UNITYSDK_OFFSET(0xCEE9830)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_ISCARDUNLOCK_OFFSET UNITYSDK_OFFSET(0xCEE90A0)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0xCEE9850)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_LEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0xCEE9340)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_SEASONDATA_OFFSET UNITYSDK_OFFSET(0xCEE8F50)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0xCEE92F0)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0xCEE9640)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xCEE94B0)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET_TEAMLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE9190)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xCEE9420)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_SET_CARDS_OFFSET UNITYSDK_OFFSET(0xCEE9820)
#define RPG_CLIENT_EVOLVEBUILDPAUSE_SET_GEARSDETAIL_OFFSET UNITYSDK_OFFSET(0xCEE9840)
#define RPG_CLIENT_EVOLVEBUILDPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0xCEE8D80)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildPause_TypeDefinitionIndex = 63843;

	class EvolveBuildPause : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _Cards_k__BackingField; // 0x10
		::RPG::Client::EvolveBuildGearsDetail* _GearsDetail_k__BackingField; // 0x18
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildPause* Create()
		{
			return ((::RPG::Client::EvolveBuildPause*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_CREATE_OFFSET))();
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_COINNUM_OFFSET))(this);
		}

		::System::String* get_CoinIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_COINICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsCardUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_ISCARDUNLOCK_OFFSET))(this);
		}

		::System::Int32 get_TeamLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_TEAMLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_StageMergedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_STAGEMERGEDID_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildLevel* get_LevelInstance()
		{
			return ((::RPG::Client::EvolveBuildLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_LEVELINSTANCE_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildStage* get_Stage()
		{
			return ((::RPG::Client::EvolveBuildStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_STAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_Cards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_CARDS_OFFSET))(this);
		}

		::System::Void set_Cards(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_SET_CARDS_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildGearsDetail* get_GearsDetail()
		{
			return ((::RPG::Client::EvolveBuildGearsDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_GEARSDETAIL_OFFSET))(this);
		}

		::System::Void set_GearsDetail(::RPG::Client::EvolveBuildGearsDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearsDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_SET_GEARSDETAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInTutorialStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_ISINTUTORIALSTAGE_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildModule* get__Module()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET__MODULE_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildSeasonData* get_SeasonData()
		{
			return ((::RPG::Client::EvolveBuildSeasonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDPAUSE_GET_SEASONDATA_OFFSET))(this);
		}
	};
}
