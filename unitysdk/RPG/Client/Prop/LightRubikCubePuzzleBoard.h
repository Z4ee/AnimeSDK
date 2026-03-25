#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"

namespace RPG::Client::Prop { class LightRubikCubePuzzleConditionGroupData; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleCube; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleCubeData; }
namespace RPG::Client::Prop { class RubikCubePuzzleSwitchData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xA0C7BC0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0C7C60)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0C67E0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_METHOD_6_BE7B5626303AAB02_OFFSET UNITYSDK_OFFSET(0xA0C7C00)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0xA0C7DD0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0C91A0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0C7B80)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET UNITYSDK_OFFSET(0xA0C7FC0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET UNITYSDK_OFFSET(0xA0C8C70)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0C7B40)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0C9430)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C96B0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xA0C98C0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0C97F0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0C9860)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0C9800)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleBoard_TypeDefinitionIndex = 64128;

	class LightRubikCubePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleCubeData*>* CubeList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleSwitchData*>* SwitchList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleConditionGroupData*>* ConditionGroupList; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ControlBoards; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ConditionObjAttachPoint_A1; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ConditionObjAttachPoint_A2; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ConditionObjAttachPoint_B1; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ConditionObjAttachPoint_B2; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ConditionObjAttachPoint_C1; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ConditionObjAttachPoint_C2; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* Field_6_10; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void Method_6_BE7B5626303AAB02(::RPG::Client::Prop::LightRubikCubePuzzleCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::LightRubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_METHOD_6_BE7B5626303AAB02_OFFSET))(this, a1);
		}

		::System::Void Method_6_D70C8B847AF08ADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void RotateCube(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET))(this, a1, a2);
		}

		::System::Void SelectCubeGroup(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}
	};
}
