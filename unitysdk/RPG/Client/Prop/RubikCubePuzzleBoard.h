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

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC60E310)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC60CD40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC60D1F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC60A190)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC60D600)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_01CB1782418C6F22_OFFSET UNITYSDK_OFFSET(0xC60D340)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0xC60D570)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ONPUZZLECANCEL_OFFSET UNITYSDK_OFFSET(0xC60C4C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC60DE00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETCUBESELECT_OFFSET UNITYSDK_OFFSET(0xC60C510)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC60C6C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET UNITYSDK_OFFSET(0xC60D650)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET UNITYSDK_OFFSET(0xC60DA60)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC60C2E0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC60E090)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC60E3B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC60E350)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC60C640)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC60E560)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC60E4C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC60E3F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC60E4D0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC60E460)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC60E400)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleBoard_TypeDefinitionIndex = 73335;

	class RubikCubePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x1BF60);
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
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* Field_6_11; // 0x98

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

		::System::Void Method_6_8131D4D8C02BAA62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_8131D4D8C02BAA62_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}
	};
}
