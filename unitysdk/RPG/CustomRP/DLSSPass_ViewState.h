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

#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x18570BF0)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEARAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x18570520)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CRPCOPYDLSSDATA_OFFSET UNITYSDK_OFFSET(0x18570860)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_DLSSCONTEXT_OFFSET UNITYSDK_OFFSET(0x18570F30)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_OPTIMALSETTINGSREQUESTDATA_OFFSET UNITYSDK_OFFSET(0x18570F50)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_GET_USEAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x18570F40)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x185705C0)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_REQUESTUSEAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1856F770)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SHOULDUSEAUTOMATICSETTINGS_OFFSET UNITYSDK_OFFSET(0x18570F80)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SUBMITDLSSCOMMANDS_OFFSET UNITYSDK_OFFSET(0x18570C50)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_UPDATEVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x18570640)
#define RPG_CUSTOMRP_DLSSPASS_VIEWSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18570F70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_ViewState_TypeDefinitionIndex = 36873;

	class DLSSPass_ViewState : public ::System::Object
	{
	public:
		::UnityEngine::NVIDIA::DLSSContext* m_DlssContext; // 0x10
		::UnityEngine::NVIDIA::GraphicsDevice* m_Device; // 0x18
		::RPG::CustomRP::DLSSPass_OptimalSettingsRequest m_OptimalSettingsRequest; // 0x20
		::RPG::CustomRP::DLSSPass_Resolution m_BackbufferRes; // 0x50
		::RPG::CustomRP::DLSSPass_DlssViewData m_Data; // 0x58
		::System::Boolean m_UseAutomaticSettings; // 0x7C
		::System::Boolean m_UsingOptimalSettings; // 0x7D

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

		::System::Void Init(::UnityEngine::NVIDIA::GraphicsDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDevice*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_INIT_OFFSET))(this, a1);
		}

		::System::Void RequestUseAutomaticSettings(::System::Boolean a1, ::UnityEngine::NVIDIA::DLSSQuality a2, ::UnityEngine::Rect a3, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::NVIDIA::DLSSQuality, ::UnityEngine::Rect, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_REQUESTUSEAUTOMATICSETTINGS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearAutomaticSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEARAUTOMATICSETTINGS_OFFSET))(this);
		}

		::System::Boolean ShouldUseAutomaticSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SHOULDUSEAUTOMATICSETTINGS_OFFSET))(this);
		}

		::System::Void UpdateViewState(::RPG::CustomRP::DLSSPass_DlssViewData& a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_DlssViewData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_UPDATEVIEWSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SubmitDlssCommands(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::UnityEngine::Texture* a3, ::UnityEngine::Texture* a4, ::UnityEngine::Texture* a5, ::System::Single a6, ::UnityEngine::Rendering::CommandBuffer* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_SUBMITDLSSCOMMANDS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CRPCopyDLSSData(::UnityEngine::Rendering::DLSSData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CRPCOPYDLSSDATA_OFFSET))(this, a1);
		}

		::System::Void Cleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_VIEWSTATE_CLEANUP_OFFSET))(this, a1);
		}
	};
}
