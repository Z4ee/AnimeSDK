#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"
#include "unitysdk/Struct_2_BA7046B740FEFA98.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_43BD383C98B4C0C5_185;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xAE7F5B0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE87D70)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICFLOAT_OFFSET UNITYSDK_OFFSET(0xAE8F1D0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICSTRING_OFFSET UNITYSDK_OFFSET(0xAE96390)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_GETENTITY_OFFSET UNITYSDK_OFFSET(0xAEAF0D0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE85E40)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISENABLEPUZZLEUI_OFFSET UNITYSDK_OFFSET(0xAEAF300)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAE7F660)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xAEAF090)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISVALIDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xAEA0A20)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE9C460)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONBEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0xAE919E0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONSETACTIVE_OFFSET UNITYSDK_OFFSET(0xAEAF2B0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLEPOSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xAEAF120)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLESTOPAUDIOEVENTID_OFFSET UNITYSDK_OFFSET(0xAEAF220)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xAE918F0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE93F00)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE7F470)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE97340)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAE8A970)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xAEAF340)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleBoardBase_TypeDefinitionIndex = 72278;

	class PuzzleBoardBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* Owner; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20
		::Struct_2_BA7046B740FEFA98 PuzzleID; // 0x28
		::System::UInt32 MazePuzzleChallengeID; // 0x38
		::System::Boolean AutoFinishChallenge; // 0x3C
		::System::Boolean _LOD; // 0x3D
		::System::Int32 _startTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::TaskContext* context, ::RPG::GameCore::PropInitPuzzle* puzzleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_INITPUZZLE_OFFSET))(this, owner, context, puzzleConfig);
		}

		::System::Void OnBeforeSwitchMap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONBEFORESWITCHMAP_OFFSET))(this, arg);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_TICKPUZZLE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void LateUpdatePuzzle(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_185* state)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_185*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_RECOVERFROMPUZZLESTATE_OFFSET))(this, state);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsPuzzleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLESTART_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntity(::RPG::GameCore::TargetFetchPuzzleEntityType entityType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetFetchPuzzleEntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_GETENTITY_OFFSET))(this, entityType);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}

		static ::System::UInt32 PuzzlePostAudioEvent(::System::String* eventName, ::UnityEngine::GameObject* emitter)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLEPOSTAUDIOEVENT_OFFSET))(eventName, emitter);
		}

		static ::System::Void PuzzleStopAudioEventID(::System::UInt32 eventID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLESTOPAUDIOEVENTID_OFFSET))(eventID);
		}

		::System::Boolean IsValidChallengeID(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISVALIDCHALLENGEID_OFFSET))(this, obj);
		}

		::System::Void OnSetActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONSETACTIVE_OFFSET))(this, active);
		}

		::System::Boolean IsEnablePuzzleUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISENABLEPUZZLEUI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EvaluateDynamicFloat(::System::String* key)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICFLOAT_OFFSET))(this, key);
		}

		::System::String* EvaluateDynamicString(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICSTRING_OFFSET))(this, key);
		}

		::System::UInt32 _GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE__GETUNIQUEID_OFFSET))(this);
		}
	};
}
