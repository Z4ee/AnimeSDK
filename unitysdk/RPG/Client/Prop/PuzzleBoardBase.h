#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"
#include "unitysdk/Struct_2_BA7046B740FEFA98.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_43BD383C98B4C0C5_220;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xDD7D220)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD54BF0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICFLOAT_OFFSET UNITYSDK_OFFSET(0xDD5C040)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICSTRING_OFFSET UNITYSDK_OFFSET(0xDD63E90)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_GETENTITY_OFFSET UNITYSDK_OFFSET(0xDD7D3A0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD527F0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISENABLEPUZZLEUI_OFFSET UNITYSDK_OFFSET(0xDD7D4D0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD7D2F0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xDD7D360)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISVALIDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xDD4DF70)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD6A260)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONBEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0xDD7D1D0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONSETACTIVE_OFFSET UNITYSDK_OFFSET(0xDD7D480)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLEPOSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xDD4C210)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLESTOPAUDIOEVENTID_OFFSET UNITYSDK_OFFSET(0xDD7D3F0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDD7D260)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD69FD0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD480E0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD6A660)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xDD57C20)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDD7D510)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleBoardBase_TypeDefinitionIndex = 78781;

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

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBeforeSwitchMap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONBEFORESWITCHMAP_OFFSET))(this, a1);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_220* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_220*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsPuzzleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLESTART_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntity(::RPG::GameCore::TargetFetchPuzzleEntityType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetFetchPuzzleEntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_GETENTITY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}

		static ::System::UInt32 PuzzlePostAudioEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLEPOSTAUDIOEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void PuzzleStopAudioEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLESTOPAUDIOEVENTID_OFFSET))(a1);
		}

		::System::Boolean IsValidChallengeID(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISVALIDCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Void OnSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONSETACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean IsEnablePuzzleUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISENABLEPUZZLEUI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EvaluateDynamicFloat(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICFLOAT_OFFSET))(this, a1);
		}

		::System::String* EvaluateDynamicString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICSTRING_OFFSET))(this, a1);
		}

		::System::UInt32 _GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE__GETUNIQUEID_OFFSET))(this);
		}
	};
}
