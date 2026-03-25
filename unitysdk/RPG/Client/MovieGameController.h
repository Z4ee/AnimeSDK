#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_2_A528D96665AC832B;
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

#define RPG_CLIENT_MOVIEGAMECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D93FC0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9D934C0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODEENTITY_OFFSET UNITYSDK_OFFSET(0x9D93540)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODE_OFFSET UNITYSDK_OFFSET(0x9D93100)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETOPERATIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9D935A0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETPLAYERSPANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9D931B0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0x9D93440)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D924B0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9D939B0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x9D944B0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x9D95510)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9D92AB0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9D94890)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x9D939F0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_617F2795F0D73EAD_OFFSET UNITYSDK_OFFSET(0x9D956A0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_77F4CE1192CC157F_OFFSET UNITYSDK_OFFSET(0x9D93DA0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_A43D587A89E24E29_OFFSET UNITYSDK_OFFSET(0x9D95130)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_AB1A253BFABC50A9_OFFSET UNITYSDK_OFFSET(0x9D94F40)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_1_OFFSET UNITYSDK_OFFSET(0x9D94B40)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_2_OFFSET UNITYSDK_OFFSET(0x9D94C80)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x9D94A00)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_BBAF4B070327A414_OFFSET UNITYSDK_OFFSET(0x9D94DC0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_E7B33E32CA371E57_OFFSET UNITYSDK_OFFSET(0x9D96D00)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_E88B764FDB27A464_OFFSET UNITYSDK_OFFSET(0x9D95270)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x9D92840)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ONANYTRIGGERSOUNDEVENT_OFFSET UNITYSDK_OFFSET(0x9D96EB0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ONPLAYERHITSTATE_OFFSET UNITYSDK_OFFSET(0x9D96FC0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D92C10)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D92D00)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D93600)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_TRIGGERPUZZLECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x9D97090)
#define RPG_CLIENT_MOVIEGAMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D97150)
#define RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D972A0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D97160)
#define RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9D972B0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D97170)
#define RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D971D0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D97230)

namespace RPG::Client
{
	inline static constexpr unsigned int MovieGameController_TypeDefinitionIndex = 48924;

	class MovieGameController : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Class_1_867B6CE75953535A* Field_6_0; // 0x48
		::Class_3_7E25C9E6907AC48F* Field_6_1; // 0x50
		::Class_3_9DA6F0C9A83EA3AD* Field_6_2; // 0x58
		::RPG::Client::LittleGame::MovieGamePlayer* Field_6_3; // 0x60
		::System::Boolean Field_6_4; // 0x68
		::System::UInt32 LevelID; // 0x6C
		::MovieGameAssetConfig* GameConfig; // 0x70
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x78
		::RPG::Client::LittleGame::MovieGameFullScreenTranslateEffect* MoveBoard; // 0x80
		::RPG::GameCore::MovieGameConstConfig* Field_6_9; // 0x88
		::RPG::Client::AchievementData* Field_6_10; // 0x90
		::RPG::Client::AchievementData* Field_6_11; // 0x98

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

		::Class_2_A528D96665AC832B* GetGameModeEntity()
		{
			return ((::Class_2_A528D96665AC832B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODEENTITY_OFFSET))(this);
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

		::System::Void Method_6_77F4CE1192CC157F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_77F4CE1192CC157F_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_071850D2764E9D4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_071850D2764E9D4C_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
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

		::System::Void Method_6_BBAF4B070327A414(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_BBAF4B070327A414_OFFSET))(this, a1);
		}

		::System::Void Method_6_AB1A253BFABC50A9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_AB1A253BFABC50A9_OFFSET))(this, a1);
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

		::System::Void Method_6_E7B33E32CA371E57(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_E7B33E32CA371E57_OFFSET))(this, a1);
		}

		::System::Void Method_6_617F2795F0D73EAD(::Class_1_867B6CE75953535A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_617F2795F0D73EAD_OFFSET))(this, a1);
		}

		::System::Void OnAnyTriggerSoundEvent(::Class_2_9850514C0F89B91A* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ONANYTRIGGERSOUNDEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitState(::Class_2_9850514C0F89B91A* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ONPLAYERHITSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerPuzzleCustomEvent(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_TRIGGERPUZZLECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void Method_6_0C490FF1F071E8D4(::Class_1_867B6CE75953535A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_0C490FF1F071E8D4_OFFSET))(this, a1);
		}

		::System::Void Method_6_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_METHOD_6_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}
	};
}
