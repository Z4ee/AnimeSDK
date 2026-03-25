#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_CameraState___c__DisplayClass20_0.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_DlssViewData.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_ViewResources.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DLSSData.h"

namespace RPG::CustomRP { class DLSSPass_ViewState; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NVIDIA { class GraphicsDevice; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class PerformDynamicRes; }

#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x16A91F50)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CLEARAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x16A924F0)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CRPSETUPDLSSDATA_OFFSET UNITYSDK_OFFSET(0x16A917D0)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x16A917C0)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_LASTFRAMEID_OFFSET UNITYSDK_OFFSET(0x16A92420)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_SCALEDELEGATE_OFFSET UNITYSDK_OFFSET(0x16A92400)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_VIEWSTATES_OFFSET UNITYSDK_OFFSET(0x16A92410)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_INIT_OFFSET UNITYSDK_OFFSET(0x16A92190)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_ISALIVE_OFFSET UNITYSDK_OFFSET(0x16A91C00)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SCALEFN_OFFSET UNITYSDK_OFFSET(0x16A92610)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SET_LASTFRAMEID_OFFSET UNITYSDK_OFFSET(0x16A92200)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SUBMITCOMMANDS_OFFSET UNITYSDK_OFFSET(0x16A92210)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A92430)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE__SUBMITCOMMANDS_G__RUNPASS_20_0_OFFSET UNITYSDK_OFFSET(0x16A926D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_CameraState_TypeDefinitionIndex = 29183;

	class DLSSPass_CameraState : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::PerformDynamicRes* m_ScaleDelegate; // 0x10
		::UnityEngine::NVIDIA::GraphicsDevice* m_Device; // 0x18
		::System::Collections::Generic::List_1<::RPG::CustomRP::DLSSPass_ViewState*>* m_Views; // 0x20
		::System::WeakReference_1<::UnityEngine::Camera*>* m_CamReference; // 0x28
		::System::Int32 m_FrameAlive; // 0x30
		::System::UInt64 m_LastFrameId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::PerformDynamicRes* get_ScaleDelegate()
		{
			return ((::UnityEngine::Rendering::PerformDynamicRes*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_SCALEDELEGATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::CustomRP::DLSSPass_ViewState*>* get_ViewStates()
		{
			return ((::System::Collections::Generic::List_1<::RPG::CustomRP::DLSSPass_ViewState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_VIEWSTATES_OFFSET))(this);
		}

		::System::Void set_LastFrameId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SET_LASTFRAMEID_OFFSET))(this, value);
		}

		::System::UInt64 get_LastFrameId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_LASTFRAMEID_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_ISNEW_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::NVIDIA::GraphicsDevice* device, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDevice*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_INIT_OFFSET))(this, device, camera);
		}

		::System::Boolean IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_ISALIVE_OFFSET))(this);
		}

		::System::Void ClearAutomaticSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CLEARAUTOMATICSETTINGS_OFFSET))(this);
		}

		::System::Single ScaleFn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SCALEFN_OFFSET))(this);
		}

		::System::Void SubmitCommands(::System::Single preExposure, ::RPG::CustomRP::DLSSPass_DlssViewData& viewData, ::RPG::CustomRP::DLSSPass_ViewResources& viewResources, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::RPG::CustomRP::DLSSPass_ViewResources&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SUBMITCOMMANDS_OFFSET))(this, preExposure, viewData, viewResources, cmdBuffer);
		}

		::System::Void CRPSetupDLSSData(::RPG::CustomRP::DLSSPass_DlssViewData& viewData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::DLSSData& dlssData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::DLSSData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CRPSETUPDLSSDATA_OFFSET))(this, viewData, cmdBuffer, dlssData);
		}

		::System::Void Cleanup(::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CLEANUP_OFFSET))(this, cmdBuffer);
		}

		static ::System::Void _SubmitCommands_g__RunPass_20_0(::RPG::CustomRP::DLSSPass_ViewState* viewState, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer1, ::RPG::CustomRP::DLSSPass_DlssViewData& viewData1, ::RPG::CustomRP::DLSSPass_ViewResources& viewResources1, ::RPG::CustomRP::DLSSPass_CameraState___c__DisplayClass20_0& a5)
		{
			return ((::System::Void(*)(::RPG::CustomRP::DLSSPass_ViewState*, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::RPG::CustomRP::DLSSPass_ViewResources&, ::RPG::CustomRP::DLSSPass_CameraState___c__DisplayClass20_0&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE__SUBMITCOMMANDS_G__RUNPASS_20_0_OFFSET))(viewState, cmdBuffer1, viewData1, viewResources1, a5);
		}
	};
}
