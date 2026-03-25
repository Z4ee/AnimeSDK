#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_DlssViewData.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_OptimalSettingsRequest.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_Resolution.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSQuality.h"
#include "unitysdk/UnityEngine/NVIDIA/OptimalDLSSSettingsData.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/DLSSData.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NVIDIA { class DLSSContext; }
namespace UnityEngine::NVIDIA { class GraphicsDevice; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x16A92CF0)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEARAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x16A92600)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CRPCOPYDLSSDATA_OFFSET UNITYSDK_OFFSET(0x16A92960)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_DLSSCONTEXT_OFFSET UNITYSDK_OFFSET(0x16A93030)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_OPTIMALSETTINGSREQUESTDATA_OFFSET UNITYSDK_OFFSET(0x16A93050)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_USEAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x16A93040)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x16A926C0)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_REQUESTUSEAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x16A92160)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SHOULDUSEAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x16A93080)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SUBMITDLSSCOMMANDS_OFFSET UNITYSDK_OFFSET(0x16A92D50)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_UPDATEVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x16A92740)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A93070)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_ViewState_TypeDefinitionIndex = 29182;

	class DLSSPass_ViewState : public ::System::Object
	{
	public:
		::UnityEngine::NVIDIA::GraphicsDevice* m_Device; // 0x10
		::UnityEngine::NVIDIA::DLSSContext* m_DlssContext; // 0x18
		::RPG::CustomRP::DLSSPass_DlssViewData m_Data; // 0x20
		::RPG::CustomRP::DLSSPass_Resolution m_BackbufferRes; // 0x44
		::System::Boolean m_UseAutomaticSettings; // 0x4C
		::System::Boolean m_UsingOptimalSettings; // 0x4D
		::RPG::CustomRP::DLSSPass_OptimalSettingsRequest m_OptimalSettingsRequest; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::NVIDIA::DLSSContext* get_DLSSContext()
		{
			return ((::UnityEngine::NVIDIA::DLSSContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_DLSSCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_useAutomaticSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_USEAUTOMATICSETTINGS_OFFSET))(this);
		}

		::RPG::CustomRP::DLSSPass_OptimalSettingsRequest get_OptimalSettingsRequestData()
		{
			return ((::RPG::CustomRP::DLSSPass_OptimalSettingsRequest(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_OPTIMALSETTINGSREQUESTDATA_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::NVIDIA::GraphicsDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDevice*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_INIT_OFFSET))(this, device);
		}

		::System::Void RequestUseAutomaticSettings(::System::Boolean useAutomaticSettings, ::UnityEngine::NVIDIA::DLSSQuality quality, ::UnityEngine::Rect viewport, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData& optimalSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::NVIDIA::DLSSQuality, ::UnityEngine::Rect, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_REQUESTUSEAUTOMATICSETTINGS_OFFSET))(this, useAutomaticSettings, quality, viewport, optimalSettings);
		}

		::System::Void ClearAutomaticSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEARAUTOMATICSETTINGS_OFFSET))(this);
		}

		::System::Boolean ShouldUseAutomaticSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SHOULDUSEAUTOMATICSETTINGS_OFFSET))(this);
		}

		::System::Void UpdateViewState(::RPG::CustomRP::DLSSPass_DlssViewData& viewData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_UPDATEVIEWSTATE_OFFSET))(this, viewData, cmdBuffer);
		}

		::System::Void SubmitDlssCommands(::UnityEngine::Texture* source, ::UnityEngine::Texture* depth, ::UnityEngine::Texture* motionVectors, ::UnityEngine::Texture* biasColorMask, ::UnityEngine::Texture* output, ::System::Single preExposure, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SUBMITDLSSCOMMANDS_OFFSET))(this, source, depth, motionVectors, biasColorMask, output, preExposure, cmdBuffer);
		}

		::System::Void CRPCopyDLSSData(::UnityEngine::Rendering::DLSSData& dlssData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CRPCOPYDLSSDATA_OFFSET))(this, dlssData);
		}

		::System::Void Cleanup(::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEANUP_OFFSET))(this, cmdBuffer);
		}
	};
}
