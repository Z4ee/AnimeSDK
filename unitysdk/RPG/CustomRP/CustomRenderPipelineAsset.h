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

#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_CREATEPIPELINE_OFFSET UNITYSDK_OFFSET(0x1C69DBB0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASKNAME_OFFSET UNITYSDK_OFFSET(0x1C69E060)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASK_1_OFFSET UNITYSDK_OFFSET(0x1C69DE60)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETRENDERINGMASK_OFFSET UNITYSDK_OFFSET(0x1C675150)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GETSHADOWCASTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C69DD80)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1C675050)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C69E180)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULT2DMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69DA60)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTLINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D510)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D230)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTPARTICLEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D3E0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTRENDERERINDEX_OFFSET UNITYSDK_OFFSET(0x1C69E1B0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTSHADER_OFFSET UNITYSDK_OFFSET(0x1C69DAF0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTTERRAINMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D640)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIETC1SUPPORTEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D930)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D770)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_DEFAULTUIOVERDRAWMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D800)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MAXRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x1C69E240)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MAXSHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1C69E250)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MINRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x1C69E230)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_MSAASAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C69E210)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_RENDERDATAASSET_OFFSET UNITYSDK_OFFSET(0x1C66D490)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_RENDERINGLAYERMASKNAMES_OFFSET UNITYSDK_OFFSET(0x1C69D200)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C66E9E0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SUPPORTSDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0x1C69E1D0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_SUPPORTSINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C69E1F0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_GET_USESRPBATCHER_OFFSET UNITYSDK_OFFSET(0x1C69B890)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_HASGRAPHICFLAG_OFFSET UNITYSDK_OFFSET(0x1C667A60)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONDESTROYPIPELINE_OFFSET UNITYSDK_OFFSET(0x1C69DB70)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C69DD50)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C69DD30)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SETGRAPHICFLAG_OFFSET UNITYSDK_OFFSET(0x1C66EB30)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_MSAASAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C69E220)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_SUPPORTSDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0x1C69E1E0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_SUPPORTSINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C69E200)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET_SET_USESRPBATCHER_OFFSET UNITYSDK_OFFSET(0x1C69E1C0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C69E2A0)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CREATERENDERERS_OFFSET UNITYSDK_OFFSET(0x1C69DD20)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C69E260)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__DESTROYRENDERERS_OFFSET UNITYSDK_OFFSET(0x1C69DD40)
#define RPG_CUSTOMRP_CUSTOMRENDERPIPELINEASSET__GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C69D360)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomRenderPipelineAsset_TypeDefinitionIndex = 36860;

	class CustomRenderPipelineAsset : public ::UnityEngine::Rendering::RenderPipelineAsset
	{
	public:
		static ::RPG::CustomRP::CRPPipelineBase** StaticGet__CurrentPipeline()
		{
			return (::RPG::CustomRP::CRPPipelineBase**)Il2CppClass::FromTypeDefinitionIndex(CustomRenderPipelineAsset_TypeDefinitionIndex)->GetStaticField(0x29210);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_ms_RenderingLayerNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CustomRenderPipelineAsset_TypeDefinitionIndex)->GetStaticField(0x29218);
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
