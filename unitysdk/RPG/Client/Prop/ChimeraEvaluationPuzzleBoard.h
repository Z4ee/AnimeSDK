#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_1_137F01660EED26B3;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::Prop { class ChimeraEvaluationSlotConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8EAB30)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GETCHIMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A8EAEC0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GET_PREFERREDVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1A8EA4A0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A8E9D10)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LIKECHIMERA_OFFSET UNITYSDK_OFFSET(0x1A8EAF20)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x1A8EA830)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A8EA7A0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_UNLIKECHIMERA_OFFSET UNITYSDK_OFFSET(0x1A8EAF80)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A8E9EF0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EB1B0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__DISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0x1A8EAE60)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__GETEVALUATIONCHIMERA_OFFSET UNITYSDK_OFFSET(0x1A8EA000)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__HIDESLOTS_OFFSET UNITYSDK_OFFSET(0x1A8EA5C0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__INITCAMERA_OFFSET UNITYSDK_OFFSET(0x1A8EA560)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x1A8EAFE0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1A8EB050)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A8EAD50)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__SHOWUI_OFFSET UNITYSDK_OFFSET(0x1A8EAA40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationPuzzleBoard_TypeDefinitionIndex = 77980;

	class ChimeraEvaluationPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Class_1_137F01660EED26B3* _ModelManager; // 0x48
		::Class_1_137F01660EED26B3* _NoEvaluationModelManager; // 0x50
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

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void LoadModel(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LOADMODEL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GetChimeraTransform(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GETCHIMERATRANSFORM_OFFSET))(this, a1);
		}

		::System::Void LikeChimera(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_LIKECHIMERA_OFFSET))(this, a1);
		}

		::System::Void UnlikeChimera(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_UNLIKECHIMERA_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExitGame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONEXITGAME_OFFSET))(this, a1);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__ONUISCREENSIZECHANGED_OFFSET))(this, a1);
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

		::System::Void _InitCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__INITCAMERA_OFFSET))(this, a1);
		}

		::System::Void _DisposeCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD__DISPOSECAMERA_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_PreferredVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONPUZZLEBOARD_GET_PREFERREDVIRTUALCAMERA_OFFSET))(this);
		}
	};
}
