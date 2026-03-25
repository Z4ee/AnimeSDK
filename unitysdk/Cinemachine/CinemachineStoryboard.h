#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/Cinemachine/CinemachineStoryboard_FillStrategy.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineStoryboard_CanvasInfo; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define CINEMACHINE_CINEMACHINESTORYBOARD_CAMERAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x119CDD50)
#define CINEMACHINE_CINEMACHINESTORYBOARD_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x119CD840)
#define CINEMACHINE_CINEMACHINESTORYBOARD_CREATECANVAS_OFFSET UNITYSDK_OFFSET(0x119CE360)
#define CINEMACHINE_CINEMACHINESTORYBOARD_DESTROYCANVAS_OFFSET UNITYSDK_OFFSET(0x119CD9F0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_GET_CANVASNAME_OFFSET UNITYSDK_OFFSET(0x119CDCB0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x119CF570)
#define CINEMACHINE_CINEMACHINESTORYBOARD_LOCATEMYCANVAS_OFFSET UNITYSDK_OFFSET(0x119CDF80)
#define CINEMACHINE_CINEMACHINESTORYBOARD_PLACEIMAGE_OFFSET UNITYSDK_OFFSET(0x119CE980)
#define CINEMACHINE_CINEMACHINESTORYBOARD_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x119CD720)
#define CINEMACHINE_CINEMACHINESTORYBOARD_STATICBLENDINGHANDLER_OFFSET UNITYSDK_OFFSET(0x119CF290)
#define CINEMACHINE_CINEMACHINESTORYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x119CF700)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_TypeDefinitionIndex = 30796;

	class CinemachineStoryboard : public ::Cinemachine::CinemachineExtension
	{
	public:
		static ::System::Boolean* StaticGet_s_StoryboardGlobalMute()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineStoryboard_TypeDefinitionIndex)->GetStaticField(0x10350);
		}
		::System::Boolean m_ShowImage; // 0x28
		::UnityEngine::Texture* m_Image; // 0x30
		::Cinemachine::CinemachineStoryboard_FillStrategy m_Aspect; // 0x38
		::System::Single m_Alpha; // 0x3C
		::UnityEngine::Vector2 m_Center; // 0x40
		::UnityEngine::Vector3 m_Rotation; // 0x48
		::UnityEngine::Vector2 m_Scale; // 0x54
		::System::Boolean m_SyncScale; // 0x5C
		::System::Boolean m_MuteCamera; // 0x5D
		::System::Single m_SplitView; // 0x60
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineStoryboard_CanvasInfo*>* mCanvasInfo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD__CTOR_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single wipeAmountTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, wipeAmountTime);
		}

		::System::Void ConnectToVcam(::System::Boolean connect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CONNECTTOVCAM_OFFSET))(this, connect);
		}

		::System::String* get_CanvasName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_GET_CANVASNAME_OFFSET))(this);
		}

		::System::Void CameraUpdatedCallback(::Cinemachine::CinemachineBrain* brain)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CAMERAUPDATEDCALLBACK_OFFSET))(this, brain);
		}

		::Cinemachine::CinemachineStoryboard_CanvasInfo* LocateMyCanvas(::Cinemachine::CinemachineBrain* parent, ::System::Boolean createIfNotFound)
		{
			return ((::Cinemachine::CinemachineStoryboard_CanvasInfo*(*)(::PVOID, ::Cinemachine::CinemachineBrain*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_LOCATEMYCANVAS_OFFSET))(this, parent, createIfNotFound);
		}

		::System::Void CreateCanvas(::Cinemachine::CinemachineStoryboard_CanvasInfo* ci)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineStoryboard_CanvasInfo*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CREATECANVAS_OFFSET))(this, ci);
		}

		::System::Void DestroyCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_DESTROYCANVAS_OFFSET))(this);
		}

		::System::Void PlaceImage(::Cinemachine::CinemachineStoryboard_CanvasInfo* ci, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineStoryboard_CanvasInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_PLACEIMAGE_OFFSET))(this, ci, alpha);
		}

		static ::System::Void StaticBlendingHandler(::Cinemachine::CinemachineBrain* brain)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_STATICBLENDINGHANDLER_OFFSET))(brain);
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_INITIALIZEMODULE_OFFSET))();
		}
	};
}
