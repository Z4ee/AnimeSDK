#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class StableSystemPuzzleBaseArea; }
namespace RPG::Client::Prop { class StableSystemPuzzlePillarAndPedestal; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x1610B840)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GETBASENORMALIZEPOS_OFFSET UNITYSDK_OFFSET(0x1610B6F0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GETCOREAREA_OFFSET UNITYSDK_OFFSET(0x1610C8F0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GETPILLAR_OFFSET UNITYSDK_OFFSET(0x1610C700)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GET_SELECTPILALRCNT_OFFSET UNITYSDK_OFFSET(0x1610C2B0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1610AF20)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ISCORESTABLE_OFFSET UNITYSDK_OFFSET(0x1610ABD0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ISPILLARNEARCORE_OFFSET UNITYSDK_OFFSET(0x1610CEA0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1610AED0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ONPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1610CBA0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_REFRESHCANDIDATESELECTPILLAR_OFFSET UNITYSDK_OFFSET(0x1610B890)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_REFRESHFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x1610C9B0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_SELECTPILLAR_OFFSET UNITYSDK_OFFSET(0x1610B790)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_SOLVEPILLARSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1610C7A0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1610CFB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzleBoard_TypeDefinitionIndex = 74915;

	class StableSystemPuzzleBoard : public ::RPG::Client::Prop::ScenePuzzleBoardBase
	{
	public:
		::System::Int32 Cols; // 0x50
		::System::Int32 Rows; // 0x54
		::System::Boolean OnlyNeighbourSelect; // 0x58
		::System::Single R; // 0x5C
		::UnityEngine::Vector3 TriangleAreaDeltaPos; // 0x60
		::UnityEngine::Vector3 TriangleAreaDownDeltaPos; // 0x6C
		::Il2CppArray<::RPG::Client::Prop::StableSystemPuzzleBaseArea*>* BaseArea; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::Prop::StableSystemPuzzleBaseArea*>* CoreArea; // 0x80
		::Il2CppArray<::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal*>* PillarAndPedestal; // 0x88
		::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal* SelectPillarLeft; // 0x90
		::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal* SelectPillarRight; // 0x98
		::System::Boolean Field_7_11; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetBaseNormalizePos(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GETBASENORMALIZEPOS_OFFSET))(this, a1, a2);
		}

		::System::Void SelectPillar(::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_SELECTPILLAR_OFFSET))(this, a1);
		}

		::System::Void ClearSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_CLEARSELECT_OFFSET))(this);
		}

		::System::Void RefreshCandidateSelectPillar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_REFRESHCANDIDATESELECTPILLAR_OFFSET))(this);
		}

		::System::Void SolvePillarStatusChange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_SOLVEPILLARSTATUSCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshFinishStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_REFRESHFINISHSTATUS_OFFSET))(this);
		}

		::System::Void OnPuzzleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ONPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsCoreStable(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ISCORESTABLE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal* GetPillar(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GETPILLAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPillarNearCore(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_ISPILLARNEARCORE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::StableSystemPuzzleBaseArea* GetCoreArea(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::Prop::StableSystemPuzzleBaseArea*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GETCOREAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_SelectPilalrCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBOARD_GET_SELECTPILALRCNT_OFFSET))(this);
		}
	};
}
