#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"
#include "unitysdk/Struct_2_BA7046B740FEFA98.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_43BD383C98B4C0C5_218;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xDCFEC20)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD6090)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICFLOAT_OFFSET UNITYSDK_OFFSET(0xDCDD850)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_EVALUATEDYNAMICSTRING_OFFSET UNITYSDK_OFFSET(0xDCE56C0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_GETENTITY_OFFSET UNITYSDK_OFFSET(0xDCFEDA0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCD3C80)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISENABLEPUZZLEUI_OFFSET UNITYSDK_OFFSET(0xDCFEED0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDCFECF0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xDCFED60)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ISVALIDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xDCCD370)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCEBB20)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONBEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0xDCFEBD0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_ONSETACTIVE_OFFSET UNITYSDK_OFFSET(0xDCFEE80)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLEPOSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xDCCB860)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_PUZZLESTOPAUDIOEVENTID_OFFSET UNITYSDK_OFFSET(0xDCFEDF0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDCFEC60)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCEB890)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCF6DE0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCEBF20)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xDCD90C0)
#define RPG_CLIENT_PROP_PUZZLEBOARDBASE__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDCFEF10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleBoardBase_TypeDefinitionIndex = 78311;

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

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_218* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_218*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEBOARDBASE_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
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
