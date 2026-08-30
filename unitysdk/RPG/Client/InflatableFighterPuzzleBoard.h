#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_B4A74ED2BE491B9A;
class Class_1_F3B3F18F1A7AD1E0;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_BROADCASTEVENT_OFFSET UNITYSDK_OFFSET(0x198489F0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19848660)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x19848B70)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_GET_HITSTOPMANAGER_OFFSET UNITYSDK_OFFSET(0x19848E60)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x198482C0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_2FBD4BA901CF2BCB_OFFSET UNITYSDK_OFFSET(0x19848D90)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x19848C60)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_DFBAD309D61905C2_OFFSET UNITYSDK_OFFSET(0x19848D10)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_E6708DD8002BE8CE_OFFSET UNITYSDK_OFFSET(0x19848CB0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTFIGHTER_OFFSET UNITYSDK_OFFSET(0x19848C10)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x19848330)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x19848910)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x19848AC0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19848E70)

namespace RPG::Client
{
	inline static constexpr unsigned int InflatableFighterPuzzleBoard_TypeDefinitionIndex = 68639;

	class InflatableFighterPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Single TotalTime; // 0x48
		::System::Single HitStopDuration; // 0x4C
		::System::Single StopTimeScale; // 0x50
		::System::Single AISafeMinPressure; // 0x54
		::System::Single AISafeMaxPressure; // 0x58
		::System::Single AIChargeProbWhenLow; // 0x5C
		::System::Single AIComfyRangeChargeProbScale; // 0x60
		::System::Single AIImpulseDuration; // 0x64
		::System::Single AIImpulseCooldown; // 0x68
		::System::Single AIHighCutSafetyMargin; // 0x6C
		::System::Single AIDodgeChanceOnOppAttack; // 0x70
		::System::Single AIDodgeDecisionCooldown; // 0x74
		::UnityEngine::GameObject* Light; // 0x78
		::UnityEngine::GameObject* Dark; // 0x80
		::UnityEngine::GameObject* VCameraPrefab; // 0x88
		::Class_1_B4A74ED2BE491B9A* ACJPLJPIAII; // 0x90
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x98
		::Class_1_F3B3F18F1A7AD1E0* PPOKJOGJOKP; // 0xA0
		::RPG::GameCore::StringHash GPOEFLDLNDB; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void BroadcastEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_BROADCASTEVENT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void StartFighter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTFIGHTER_OFFSET))(this);
		}

		::System::Void Method_6_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_6_E6708DD8002BE8CE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_E6708DD8002BE8CE_OFFSET))(this, a1);
		}

		::System::Void Method_6_DFBAD309D61905C2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_DFBAD309D61905C2_OFFSET))(this, a1);
		}

		::System::Void Method_6_2FBD4BA901CF2BCB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_METHOD_6_2FBD4BA901CF2BCB_OFFSET))(this, a1);
		}

		::Class_1_F3B3F18F1A7AD1E0* get_HitStopManager()
		{
			return ((::Class_1_F3B3F18F1A7AD1E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_GET_HITSTOPMANAGER_OFFSET))(this);
		}
	};
}
