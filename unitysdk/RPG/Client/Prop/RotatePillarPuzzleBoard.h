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

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xDD0C710)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD0C1D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD091F0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD0BF70)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_METHOD_6_63AE1202F18E8BBF_OFFSET UNITYSDK_OFFSET(0xDD0C8E0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDD0AC00)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xDD0B330)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONRELOAD_OFFSET UNITYSDK_OFFSET(0xDD0B710)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONROTATE_OFFSET UNITYSDK_OFFSET(0xDD0B4F0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xDD0B3E0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_ONUISHOW_OFFSET UNITYSDK_OFFSET(0xDD0B030)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD0BC50)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_BEGIN_OFFSET UNITYSDK_OFFSET(0xDD0CD80)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_END_OFFSET UNITYSDK_OFFSET(0xDD0BFC0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SDKREPORT_STEP_OFFSET UNITYSDK_OFFSET(0xDD0CF60)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_SETPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD0B910)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD0AB40)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDD0D1F0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDD0D1D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEBOARD__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDD0CD00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleBoard_TypeDefinitionIndex = 78332;

	class RotatePillarPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_CJDIFCBFIAB()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x65960);
		}
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzlePillarData*>* PillarData; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PillarGameObject; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleSwitchData*>* SwitchList; // 0x58
		::System::String* PuzzleFinishTriggerCustomString; // 0x60
		::UnityEngine::Animator* FinishAnimator; // 0x68
		::System::Boolean IsGamePadMode; // 0x70
		::System::Boolean IsUIShow; // 0x71
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzlePillar*>* FMPCCFKEOID; // 0x78
		::System::Boolean PIPLLENMLIM; // 0x80
		::System::Int32 GEPHLBIFHKD; // 0x84
		::System::Int32 EFLOALLFICK; // 0x88
		::System::Boolean FEGHAFEHLKG; // 0x8C

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
	};
}
