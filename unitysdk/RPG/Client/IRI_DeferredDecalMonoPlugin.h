#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/Struct_2_B3CFB45E7E960210.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class DecalIRIMatrixListAsset; }
namespace RPG::Client { class IRI_DeferredDecalBehavior; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_ADDDECALINSTANCE_OFFSET UNITYSDK_OFFSET(0xD3EA490)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD3EAE90)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xD3EA940)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xD3EA890)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xD3EAC70)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xD3EAE80)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_REMOVEDECALINSTANCE_OFFSET UNITYSDK_OFFSET(0xD3EA5C0)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_SETDECALVISIBLE_OFFSET UNITYSDK_OFFSET(0xD3EA7F0)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_UPDATEDECALCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xD3EA740)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_UPDATEDECALINSTANCE_OFFSET UNITYSDK_OFFSET(0xD3EA650)
#define RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD3EAEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int IRI_DeferredDecalMonoPlugin_TypeDefinitionIndex = 70866;

	class IRI_DeferredDecalMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::IRI_DeferredDecalBehavior*>
	{
	public:
		// static const ::System::Int32 BJECOEIACDO = 0x8; // 0x0
		::UnityEngine::Material* DecalMaterial; // 0x30
		::RPG::Client::DecalIRIMatrixListAsset* MatrixListAsset; // 0x38
		::UnityEngine::Bounds AABB; // 0x40
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x58
		::System::Int32 LightQualityVersion; // 0x5C
		::System::Int32 PreAllocateCapacity; // 0x60
		::System::String* ConfigWorldIndex; // 0x68
		::System::String* ConfigCategoryTag; // 0x70
		::System::String* ConfigSceneCode; // 0x78
		::System::String* ConfigAssetName; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Int32 AddDecalInstance(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_ADDDECALINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveDecalInstance(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_REMOVEDECALINSTANCE_OFFSET))(this, a1);
		}

		::System::Void UpdateDecalInstance(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_UPDATEDECALINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateDecalCustomData(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_UPDATEDECALCUSTOMDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetDecalVisible(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_SETDECALVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::Struct_2_B3CFB45E7E960210 get_RenderBudgetData()
		{
			return ((::Struct_2_B3CFB45E7E960210(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
