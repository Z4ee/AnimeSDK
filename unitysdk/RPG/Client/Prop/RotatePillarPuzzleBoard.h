#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

namespace RPG::Client::Prop { class RotatePillarPuzzlePillar; }
namespace RPG::Client::Prop { class RotatePillarPuzzlePillarData; }
namespace RPG::Client::Prop { class RotatePillarPuzzleSwitchData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC602EF0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6029B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5FF930)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC602750)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_METHOD_6_63AE1202F18E8BBF_OFFSET UNITYSDK_OFFSET(0xC603110)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xC6013A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xC601AD0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONRELOAD_OFFSET UNITYSDK_OFFSET(0xC601EB0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONROTATE_OFFSET UNITYSDK_OFFSET(0xC601C90)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xC601B80)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONUISHOW_OFFSET UNITYSDK_OFFSET(0xC6017D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC602430)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_BEGIN_OFFSET UNITYSDK_OFFSET(0xC6035B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_END_OFFSET UNITYSDK_OFFSET(0xC6027A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_STEP_OFFSET UNITYSDK_OFFSET(0xC603790)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SETPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC6020B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC6012E0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC603A20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC603A00)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC603530)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC603B00)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC603AF0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC603A60)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC603B40)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC603AB0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC603A70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleBoard_TypeDefinitionIndex = 73321;

	class RotatePillarPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x1B1B0);
		}
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzlePillarData*>* PillarData; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PillarGameObject; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleSwitchData*>* SwitchList; // 0x58
		::System::String* PuzzleFinishTriggerCustomString; // 0x60
		::UnityEngine::Animator* FinishAnimator; // 0x68
		::System::Boolean IsGamePadMode; // 0x70
		::System::Boolean IsUIShow; // 0x71
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzlePillar*>* Field_6_8; // 0x78
		::System::Boolean Field_6_9; // 0x80
		::System::Int32 Field_6_10; // 0x84
		::System::Int32 Field_6_11; // 0x88
		::System::Boolean Field_6_12; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnUIShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONUISHOW_OFFSET))(this, a1);
		}

		::System::Void OnSelectIndex(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONSELECTINDEX_OFFSET))(this, a1);
		}

		::System::Void OnRotate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONROTATE_OFFSET))(this, a1);
		}

		::System::Void OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void OnReload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONRELOAD_OFFSET))(this, a1);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void SetPuzzleFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SETPUZZLEFINISH_OFFSET))(this, a1);
		}

		::System::Void Method_6_63AE1202F18E8BBF(::RPG::Client::Prop::RotatePillarPuzzlePillar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RotatePillarPuzzlePillar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_METHOD_6_63AE1202F18E8BBF_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::UInt32 _GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__GETUNIQUEID_OFFSET))(this);
		}

		::System::Void SDKReport_Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_BEGIN_OFFSET))(this);
		}

		::System::Void SDKReport_End(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_END_OFFSET))(this, a1);
		}

		::System::Void SDKReport_Step(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_STEP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}
	};
}
