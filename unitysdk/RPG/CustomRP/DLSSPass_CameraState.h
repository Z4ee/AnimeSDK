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

#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1856F570)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CLEARAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x18570450)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CRPSETUPDLSSDATA_OFFSET UNITYSDK_OFFSET(0x1856EB60)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1856EB50)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_LASTFRAMEID_OFFSET UNITYSDK_OFFSET(0x18570360)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_SCALEDELEGATE_OFFSET UNITYSDK_OFFSET(0x18570340)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_VIEWSTATES_OFFSET UNITYSDK_OFFSET(0x18570350)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_INIT_OFFSET UNITYSDK_OFFSET(0x1856F7A0)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1856F260)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SCALEFN_OFFSET UNITYSDK_OFFSET(0x18570530)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SET_LASTFRAMEID_OFFSET UNITYSDK_OFFSET(0x1856F810)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SUBMITCOMMANDS_OFFSET UNITYSDK_OFFSET(0x1856F820)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18570370)
#define RPG_CUSTOMRP_DLSSPASS_CAMERASTATE__SUBMITCOMMANDS_G__RUNPASS_20_0_OFFSET UNITYSDK_OFFSET(0x185705D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_CameraState_TypeDefinitionIndex = 36874;

	class DLSSPass_CameraState : public ::System::Object
	{
	public:
		::UnityEngine::NVIDIA::GraphicsDevice* m_Device; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::DLSSPass_ViewState*>* m_Views; // 0x18
		::UnityEngine::Rendering::PerformDynamicRes* m_ScaleDelegate; // 0x20
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

		::System::Void set_LastFrameId(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SET_LASTFRAMEID_OFFSET))(this, a1);
		}

		::System::UInt64 get_LastFrameId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_LASTFRAMEID_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_GET_ISNEW_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::NVIDIA::GraphicsDevice* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDevice*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_INIT_OFFSET))(this, a1, a2);
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

		::System::Void SubmitCommands(::System::Single a1, ::RPG::CustomRP::DLSSPass_DlssViewData& a2, ::RPG::CustomRP::DLSSPass_ViewResources& a3, ::UnityEngine::Rendering::CommandBuffer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::RPG::CustomRP::DLSSPass_ViewResources&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_SUBMITCOMMANDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CRPSetupDLSSData(::RPG::CustomRP::DLSSPass_DlssViewData& a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::UnityEngine::Rendering::DLSSData& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::DLSSData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CRPSETUPDLSSDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Cleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE_CLEANUP_OFFSET))(this, a1);
		}

		static ::System::Void _SubmitCommands_g__RunPass_20_0(::RPG::CustomRP::DLSSPass_ViewState* a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::RPG::CustomRP::DLSSPass_DlssViewData& a3, ::RPG::CustomRP::DLSSPass_ViewResources& a4, ::RPG::CustomRP::DLSSPass_CameraState___c__DisplayClass20_0& a5)
		{
			return ((::System::Void(*)(::RPG::CustomRP::DLSSPass_ViewState*, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::RPG::CustomRP::DLSSPass_ViewResources&, ::RPG::CustomRP::DLSSPass_CameraState___c__DisplayClass20_0&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERASTATE__SUBMITCOMMANDS_G__RUNPASS_20_0_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
