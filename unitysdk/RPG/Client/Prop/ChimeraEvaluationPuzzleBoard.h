#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_1_1CBCEE1DEC8926A4;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::Prop { class ChimeraEvaluationSlotConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0601B0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GETCHIMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xA0604F0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GET_PREFERREDVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA05FAA0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA05F3F0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xA060550)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xA05FE80)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA05FDF0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_UNLIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xA0605B0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA05F5D0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA0607E0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__DISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0xA060490)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__GETEVALUATIONCHIMERA_OFFSET UNITYSDK_OFFSET(0xA05F6A0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__HIDESLOTS_OFFSET UNITYSDK_OFFSET(0xA05FBC0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__INITCAMERA_OFFSET UNITYSDK_OFFSET(0xA05FB60)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xA060610)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA060680)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0603C0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__SHOWUI_OFFSET UNITYSDK_OFFSET(0xA0600B0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0608A0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA060830)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA060840)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationPuzzleBoard_TypeDefinitionIndex = 63901;

	class ChimeraEvaluationPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Class_1_1CBCEE1DEC8926A4* _ModelManager; // 0x48
		::Class_1_1CBCEE1DEC8926A4* _NoEvaluationModelManager; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>* _ChimeraSlots; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>* _NoEvaluationChimeraSlots; // 0x60
		::UnityEngine::Transform* AudioListener; // 0x68
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera16X9; // 0x70
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera4X3; // 0x78
		::Cinemachine::CinemachineVirtualCameraBase* _ActiveVirtualCamera; // 0x80
		::System::String* _ExitEvaluationPuzzleCustomStringEvent; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _EvaluationChimeraIDList; // 0x90
		::System::Collections::Generic::List_1<::System::UInt32>* _NoEvaluationChimeraIDList; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::TaskContext* context, ::RPG::GameCore::PropInitPuzzle* puzzleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, owner, context, puzzleConfig);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void LoadModel(::System::Collections::Generic::List_1<::System::UInt32>* chimeraIDs, ::System::Collections::Generic::List_1<::System::UInt32>* noEvaluationChimeraIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LOADMODEL_OFFSET))(this, chimeraIDs, noEvaluationChimeraIDs);
		}

		::UnityEngine::Transform* GetChimeraTransform(::System::UInt32 chimeraID)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GETCHIMERATRANSFORM_OFFSET))(this, chimeraID);
		}

		::System::Void LikeChimera(::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LIKECHIMERA_OFFSET))(this, chimeraID);
		}

		::System::Void UnlikeChimera(::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_UNLIKECHIMERA_OFFSET))(this, chimeraID);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExitGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONEXITGAME_OFFSET))(this, arg);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONUISCREENSIZECHANGED_OFFSET))(this, arg);
		}

		::System::Void _ShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__SHOWUI_OFFSET))(this);
		}

		::System::Void _HideSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__HIDESLOTS_OFFSET))(this);
		}

		::System::Void _GetEvaluationChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__GETEVALUATIONCHIMERA_OFFSET))(this);
		}

		::System::Void _InitCamera(::Cinemachine::CinemachineVirtualCameraBase* vCam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__INITCAMERA_OFFSET))(this, vCam);
		}

		::System::Void _DisposeCamera(::Cinemachine::CinemachineVirtualCameraBase* vCam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__DISPOSECAMERA_OFFSET))(this, vCam);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_PreferredVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GET_PREFERREDVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
