#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"

namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::Client::Prop { class RubikCubePuzzleCubeData; }
namespace RPG::Client::Prop { class RubikCubePuzzleFrameData; }
namespace RPG::Client::Prop { class RubikCubePuzzleSwitchData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x16657720)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16655870)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16655DE0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x16653000)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x166562A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_01CB1782418C6F22_OFFSET UNITYSDK_OFFSET(0x16655FE0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x16656210)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ONPUZZLECANCEL_OFFSET UNITYSDK_OFFSET(0x16654E00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x16657210)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETCUBESELECT_OFFSET UNITYSDK_OFFSET(0x16654E50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x166550A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET UNITYSDK_OFFSET(0x166562F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET UNITYSDK_OFFSET(0x16656AB0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x16654C20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x166574A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x166577C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x16657760)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x16655020)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleBoard_TypeDefinitionIndex = 78345;

	class RubikCubePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x64B90);
		}
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleCubeData*>* CubeList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleSwitchData*>* SwitchList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleFrameData*>* FrameList; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ControlBoards; // 0x60
		::UnityEngine::GameObject* ConditionObjAttachPoint_A1; // 0x68
		::UnityEngine::GameObject* ConditionObjAttachPoint_A2; // 0x70
		::UnityEngine::GameObject* ConditionObjAttachPoint_B1; // 0x78
		::UnityEngine::GameObject* ConditionObjAttachPoint_B2; // 0x80
		::UnityEngine::GameObject* ConditionObjAttachPoint_C1; // 0x88
		::UnityEngine::GameObject* ConditionObjAttachPoint_C2; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* MFMPNOOMDFJ; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPuzzleCancel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ONPUZZLECANCEL_OFFSET))(this, a1);
		}

		::System::Void ResetCubeSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETCUBESELECT_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_01CB1782418C6F22(::RPG::Client::Prop::RubikCubePuzzleCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_01CB1782418C6F22_OFFSET))(this, a1);
		}

		::System::Void Method_6_3BC8B8F2BB08C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_3BC8B8F2BB08C1C2_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void RotateCube(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SelectCubeGroup(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::UInt32 _GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__GETUNIQUEID_OFFSET))(this);
		}
	};
}
