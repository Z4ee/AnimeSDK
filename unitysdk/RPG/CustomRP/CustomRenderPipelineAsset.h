#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DefaultMatType.h"
#include "unitysdk/RPG/CustomRP/GraphicSettingFlag.h"
#include "unitysdk/RPG/CustomRP/MsaaQuality.h"
#include "unitysdk/UnityEngine/Rendering/RenderPipelineAsset.h"

namespace RPG::CustomRP { class CRPGraphicsSettingsData; }
namespace RPG::CustomRP { class CRPPipelineBase; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class CRPScriptableRenderData; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering { class RenderPipeline; }

#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_CREATEPIPELINE_OFFSET UNITYSDK_OFFSET(0x192CFA30)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASKNAME_OFFSET UNITYSDK_OFFSET(0x192CFEE0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASK_1_OFFSET UNITYSDK_OFFSET(0x192CFCE0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASK_OFFSET UNITYSDK_OFFSET(0x192A6FE0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETSHADOWCASTCOUNT_OFFSET UNITYSDK_OFFSET(0x192CFC00)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x192A6EE0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x192D0000)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULT2DMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF8E0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTLINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF390)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF0B0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTPARTICLEMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF260)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTRENDERERINDEX_OFFSET UNITYSDK_OFFSET(0x192D0030)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTSHADER_OFFSET UNITYSDK_OFFSET(0x192CF970)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTTERRAINMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF4C0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIETC1SUPPORTEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF7B0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF5F0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIOVERDRAWMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF680)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MAXRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x192D00C0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MAXSHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x192D00D0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MINRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x192D00B0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MSAASAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x192D0090)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_RENDERDATAASSET_OFFSET UNITYSDK_OFFSET(0x1929F360)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_RENDERINGLAYERMASKNAMES_OFFSET UNITYSDK_OFFSET(0x192CF080)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x192A08B0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SUPPORTSDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0x192D0050)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SUPPORTSINSTANCE_OFFSET UNITYSDK_OFFSET(0x192D0070)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_USESRPBATCHER_OFFSET UNITYSDK_OFFSET(0x192CD710)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_HASGRAPHICFLAG_OFFSET UNITYSDK_OFFSET(0x19299920)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONDESTROYPIPELINE_OFFSET UNITYSDK_OFFSET(0x192CF9F0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x192CFBD0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x192CFBB0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SETGRAPHICFLAG_OFFSET UNITYSDK_OFFSET(0x192A0A00)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_MSAASAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x192D00A0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_SUPPORTSDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0x192D0060)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_SUPPORTSINSTANCE_OFFSET UNITYSDK_OFFSET(0x192D0080)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_USESRPBATCHER_OFFSET UNITYSDK_OFFSET(0x192D0040)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D0120)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CREATERENDERERS_OFFSET UNITYSDK_OFFSET(0x192CFBA0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x192D00E0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__DESTROYRENDERERS_OFFSET UNITYSDK_OFFSET(0x192CFBC0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x192CF1E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomRenderPipelineAsset_TypeDefinitionIndex = 36860;

	class CustomRenderPipelineAsset : public ::UnityEngine::Rendering::RenderPipelineAsset
	{
	public:
		static ::RPG::CustomRP::CRPPipelineBase** StaticGet__CurrentPipeline()
		{
			return (::RPG::CustomRP::CRPPipelineBase**)Il2CppClass::FromTypeDefinitionIndex(CustomRenderPipelineAsset_TypeDefinitionIndex)->GetStaticField(0x33830);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_ms_RenderingLayerNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CustomRenderPipelineAsset_TypeDefinitionIndex)->GetStaticField(0x33838);
		}
		::Il2CppArray<::RPG::CustomRP::CRPScriptableRenderData*>* _RendererDataList; // 0x18
		::System::Int32 _DefaultRendererIndex; // 0x20
		::System::Boolean _UseSRPBatcher; // 0x24
		::System::Boolean _SupportsDynamicBatching; // 0x25
		::System::Boolean _SupportsInstance; // 0x26
		::RPG::CustomRP::CRPGraphicsSettingsData* _CRPSettings; // 0x28
		::RPG::CustomRP::MsaaQuality _MSAA; // 0x30
		::System::Boolean _isCPPEnable; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::String*>* get_renderingLayerMaskNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_RENDERINGLAYERMASKNAMES_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultParticleMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTPARTICLEMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultLineMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTLINEMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultTerrainMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTTERRAINMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultUIMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultUIOverdrawMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIOVERDRAWMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultUIETC1SupportedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIETC1SUPPORTEDMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_default2DMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULT2DMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Shader* get_defaultShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTSHADER_OFFSET))(this);
		}

		::System::Void OnDestroyPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONDESTROYPIPELINE_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderPipeline* CreatePipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipeline*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_CREATEPIPELINE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONDISABLE_OFFSET))(this);
		}

		::System::Int32 GetShadowCastCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETSHADOWCASTCOUNT_OFFSET))(this);
		}

		static ::System::UInt32 GetRenderingMask(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASK_OFFSET))(a1);
		}

		static ::System::UInt32 GetRenderingMask_1(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASK_1_OFFSET))(a1);
		}

		static ::System::String* GetRenderingMaskName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASKNAME_OFFSET))(a1);
		}

		static ::System::Boolean HasGraphicFlag(::RPG::CustomRP::GraphicSettingFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::GraphicSettingFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_HASGRAPHICFLAG_OFFSET))(a1);
		}

		static ::System::Void SetGraphicFlag(::RPG::CustomRP::GraphicSettingFlag a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::CustomRP::GraphicSettingFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SETGRAPHICFLAG_OFFSET))(a1, a2);
		}

		static ::RPG::CustomRP::CustomRenderPipelineAsset* get_asset()
		{
			return ((::RPG::CustomRP::CustomRenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_ASSET_OFFSET))();
		}

		static ::RPG::CustomRP::CRPGraphicsSettingsData* get_Settings()
		{
			return ((::RPG::CustomRP::CRPGraphicsSettingsData*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SETTINGS_OFFSET))();
		}

		::RPG::CustomRP::CRPRendererData* get_RenderDataAsset()
		{
			return ((::RPG::CustomRP::CRPRendererData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_RENDERDATAASSET_OFFSET))(this);
		}

		static ::RPG::CustomRP::CRPPipelineBase* get_current()
		{
			return ((::RPG::CustomRP::CRPPipelineBase*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_CURRENT_OFFSET))();
		}

		::System::Int32 get_defaultRendererIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTRENDERERINDEX_OFFSET))(this);
		}

		::System::Boolean get_useSRPBatcher()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_USESRPBATCHER_OFFSET))(this);
		}

		::System::Void set_useSRPBatcher(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_USESRPBATCHER_OFFSET))(this, a1);
		}

		::System::Boolean get_supportsDynamicBatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SUPPORTSDYNAMICBATCHING_OFFSET))(this);
		}

		::System::Void set_supportsDynamicBatching(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_SUPPORTSDYNAMICBATCHING_OFFSET))(this, a1);
		}

		::System::Boolean get_supportsInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SUPPORTSINSTANCE_OFFSET))(this);
		}

		::System::Void set_supportsInstance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_SUPPORTSINSTANCE_OFFSET))(this, a1);
		}

		::System::Int32 get_MSAASampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MSAASAMPLECOUNT_OFFSET))(this);
		}

		::System::Void set_MSAASampleCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_MSAASAMPLECOUNT_OFFSET))(this, a1);
		}

		static ::System::Single get_minRenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MINRENDERSCALE_OFFSET))();
		}

		static ::System::Single get_maxRenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MAXRENDERSCALE_OFFSET))();
		}

		static ::System::Single get_maxShadowBias()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MAXSHADOWBIAS_OFFSET))();
		}

		::System::Void _CreateRenderers(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CREATERENDERERS_OFFSET))(this, a1);
		}

		::System::Void _DestroyRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__DESTROYRENDERERS_OFFSET))(this);
		}

		::UnityEngine::Material* _GetMaterial(::RPG::CustomRP::DefaultMatType a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::CustomRP::DefaultMatType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__GETMATERIAL_OFFSET))(this, a1);
		}
	};
}
