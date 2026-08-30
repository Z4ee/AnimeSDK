#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_1C9DAFE8E76EE3E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
class Class_3_9DA6F0C9A83EA3AD;
class MovieGameAssetConfig;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client::LittleGame { class MovieGameFullScreenTranslateEffect; }
namespace RPG::Client::LittleGame { class MovieGameModeComponent; }
namespace RPG::Client::LittleGame { class MovieGamePlayer; }
namespace RPG::Client::LittleGame { class MovieGameStatisticComponent; }
namespace RPG::Client::LittleGame { class OperationConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MovieGameConstConfig; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MOVIEGAMECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8CBBA0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD8CB060)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODEENTITY_OFFSET UNITYSDK_OFFSET(0xD8CB0D0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODE_OFFSET UNITYSDK_OFFSET(0xD8CACB0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETOPERATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xD8CB130)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETPLAYERSPANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xD8CAD60)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0xD8CAFF0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8C9F60)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xD8CB530)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0xD8CD050)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD8CA5A0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_361917FE49883C86_OFFSET UNITYSDK_OFFSET(0xD8CD1E0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0xD8CB570)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_7908E0A3A062534E_OFFSET UNITYSDK_OFFSET(0xD8CCAA0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0xD8CC920)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xD8CB900)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_A43D587A89E24E29_OFFSET UNITYSDK_OFFSET(0xD8CCC80)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_1_OFFSET UNITYSDK_OFFSET(0xD8CC6A0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_2_OFFSET UNITYSDK_OFFSET(0xD8CC7E0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0xD8CC560)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xD8CC0D0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xD8CC3F0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xD8CA360)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_E88B764FDB27A464_OFFSET UNITYSDK_OFFSET(0xD8CCDC0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_F1D0751A34EC3B37_OFFSET UNITYSDK_OFFSET(0xD8CE550)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ONANYTRIGGERSOUNDEVENT_OFFSET UNITYSDK_OFFSET(0xD8CE6C0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ONPLAYERHITSTATE_OFFSET UNITYSDK_OFFSET(0xD8CE7D0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8CA700)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8CA7F0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8CB190)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_TRIGGERPUZZLECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xD8CE8A0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD8CE960)

namespace RPG::Client
{
	inline static constexpr unsigned int MovieGameController_TypeDefinitionIndex = 60528;

	class MovieGameController : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x48
		::Class_3_7E25C9E6907AC48F* CKJLAAOFGCC; // 0x50
		::Class_3_9DA6F0C9A83EA3AD* INPAJAAFACE; // 0x58
		::RPG::Client::LittleGame::MovieGamePlayer* EBFCJAHKNGO; // 0x60
		::System::Boolean POHEELFNCOM; // 0x68
		::System::UInt32 LevelID; // 0x6C
		::MovieGameAssetConfig* GameConfig; // 0x70
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x78
		::RPG::Client::LittleGame::MovieGameFullScreenTranslateEffect* MoveBoard; // 0x80
		::RPG::GameCore::MovieGameConstConfig* POIDJMHLKJN; // 0x88
		::RPG::Client::AchievementData* FGGMNKBLPEK; // 0x90
		::RPG::Client::AchievementData* AONDKIDMGLG; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_STARTPUZZLE_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameMode GetGameMode()
		{
			return ((::RPG::Client::LittleGame::MovieGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPlayerSpAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETPLAYERSPANCHORPOSITION_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameStatisticComponent* GetStatistics()
		{
			return ((::RPG::Client::LittleGame::MovieGameStatisticComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETSTATISTICS_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameModeComponent* GetGameModeComponent()
		{
			return ((::RPG::Client::LittleGame::MovieGameModeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODECOMPONENT_OFFSET))(this);
		}

		::Class_2_1C9DAFE8E76EE3E9* GetGameModeEntity()
		{
			return ((::Class_2_1C9DAFE8E76EE3E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODEENTITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::OperationConfig* GetOperationConfig()
		{
			return ((::RPG::Client::LittleGame::OperationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETOPERATIONCONFIG_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Method_6_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Void Method_6_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_C7BF9C1E6A78DCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_C7BF9C1E6A78DCAB_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Method_6_DE52BD42C4B0B772()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_DE52BD42C4B0B772_OFFSET))(this);
		}

		::System::Void Method_6_B710AD145420A84D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_OFFSET))(this, a1);
		}

		::System::Void Method_6_B710AD145420A84D_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_B710AD145420A84D_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_2_OFFSET))(this, a1);
		}

		::System::Void Method_6_94CBD0C21A609187(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_94CBD0C21A609187_OFFSET))(this, a1);
		}

		::System::Void Method_6_7908E0A3A062534E(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_7908E0A3A062534E_OFFSET))(this, a1);
		}

		::System::Void Method_6_A43D587A89E24E29(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_A43D587A89E24E29_OFFSET))(this, a1);
		}

		::System::Void Method_6_E88B764FDB27A464(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_E88B764FDB27A464_OFFSET))(this, a1);
		}

		::System::Void Method_6_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_6_F1D0751A34EC3B37(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_F1D0751A34EC3B37_OFFSET))(this, a1);
		}

		::System::Void Method_6_361917FE49883C86(::Class_1_D33B7D6901AE39E9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_361917FE49883C86_OFFSET))(this, a1);
		}

		::System::Void OnAnyTriggerSoundEvent(::Class_2_FD51057495DB654F* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ONANYTRIGGERSOUNDEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitState(::Class_2_FD51057495DB654F* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ONPLAYERHITSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerPuzzleCustomEvent(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_TRIGGERPUZZLECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void Method_6_0C490FF1F071E8D4(::Class_1_D33B7D6901AE39E9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_0C490FF1F071E8D4_OFFSET))(this, a1);
		}

		::System::Void Method_6_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_E52129E82CD2D7F8_OFFSET))(this);
		}
	};
}
