#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteData; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteDataGroup; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteMatchCalculator; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteNewGuideData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETCURRENTVALIDGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xBDF8DB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETFLUTEDATA_OFFSET UNITYSDK_OFFSET(0xBDF9250)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETFLUTEMATCHCALCULATOR_OFFSET UNITYSDK_OFFSET(0xBDF8C50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETFLUTENEWGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xBDF8F80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETUNLOCKFIVEDIMFLUTEDATA_OFFSET UNITYSDK_OFFSET(0xBDF92A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xBDF8C10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF9920)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteDataManager_TypeDefinitionIndex = 71739;

	class FiveDimFluteDataManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_INIT_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator* GetFluteMatchCalculator()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETFLUTEMATCHCALCULATOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimFluteNewGuideData* GetCurrentValidGuideData()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteNewGuideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETCURRENTVALIDGUIDEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteNewGuideData*>* GetFluteNewGuideData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteNewGuideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETFLUTENEWGUIDEDATA_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* GetFluteData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETFLUTEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*>* GetUnlockFiveDimFluteData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER_GETUNLOCKFIVEDIMFLUTEDATA_OFFSET))(this);
		}
	};
}
