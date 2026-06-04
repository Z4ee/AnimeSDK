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

#define CINEMACHINE_CINEMACHINESTORYBOARD_CAMERAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14659CB0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x14659720)
#define CINEMACHINE_CINEMACHINESTORYBOARD_CREATECANVAS_OFFSET UNITYSDK_OFFSET(0x1465A2F0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_DESTROYCANVAS_OFFSET UNITYSDK_OFFSET(0x146598E0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_GET_CANVASNAME_OFFSET UNITYSDK_OFFSET(0x14659C10)
#define CINEMACHINE_CINEMACHINESTORYBOARD_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1465B420)
#define CINEMACHINE_CINEMACHINESTORYBOARD_LOCATEMYCANVAS_OFFSET UNITYSDK_OFFSET(0x14659E80)
#define CINEMACHINE_CINEMACHINESTORYBOARD_PLACEIMAGE_OFFSET UNITYSDK_OFFSET(0x1465A870)
#define CINEMACHINE_CINEMACHINESTORYBOARD_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x14659610)
#define CINEMACHINE_CINEMACHINESTORYBOARD_STATICBLENDINGHANDLER_OFFSET UNITYSDK_OFFSET(0x1465B150)
#define CINEMACHINE_CINEMACHINESTORYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1465B5C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_TypeDefinitionIndex = 36816;

	class CinemachineStoryboard : public ::Cinemachine::CinemachineExtension
	{
	public:
		static ::System::Boolean* StaticGet_s_StoryboardGlobalMute()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineStoryboard_TypeDefinitionIndex)->GetStaticField(0x2EC0);
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

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ConnectToVcam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CONNECTTOVCAM_OFFSET))(this, a1);
		}

		::System::String* get_CanvasName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_GET_CANVASNAME_OFFSET))(this);
		}

		::System::Void CameraUpdatedCallback(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CAMERAUPDATEDCALLBACK_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineStoryboard_CanvasInfo* LocateMyCanvas(::Cinemachine::CinemachineBrain* a1, ::System::Boolean a2)
		{
			return ((::Cinemachine::CinemachineStoryboard_CanvasInfo*(*)(::PVOID, ::Cinemachine::CinemachineBrain*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_LOCATEMYCANVAS_OFFSET))(this, a1, a2);
		}

		::System::Void CreateCanvas(::Cinemachine::CinemachineStoryboard_CanvasInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineStoryboard_CanvasInfo*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CREATECANVAS_OFFSET))(this, a1);
		}

		::System::Void DestroyCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_DESTROYCANVAS_OFFSET))(this);
		}

		::System::Void PlaceImage(::Cinemachine::CinemachineStoryboard_CanvasInfo* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineStoryboard_CanvasInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_PLACEIMAGE_OFFSET))(this, a1, a2);
		}

		static ::System::Void StaticBlendingHandler(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_STATICBLENDINGHANDLER_OFFSET))(a1);
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_INITIALIZEMODULE_OFFSET))();
		}
	};
}
