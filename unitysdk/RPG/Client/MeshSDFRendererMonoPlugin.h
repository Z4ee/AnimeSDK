#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MeshSDFRendererBehavior; }
namespace RPG::Rendering { class SDFBoundsData; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_DEBUGPRINTSDFDATA_OFFSET UNITYSDK_OFFSET(0xD69E660)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_ALBEDO_OFFSET UNITYSDK_OFFSET(0xD69E530)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xD69AED0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDBOUNDSEXPAND_OFFSET UNITYSDK_OFFSET(0xD69E620)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDINFOTEXHEIGHT_OFFSET UNITYSDK_OFFSET(0xD69E5E0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDINFOTEXWIDTH_OFFSET UNITYSDK_OFFSET(0xD69E5D0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDNORMALWEIGHTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xD69E600)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_DEBUGCARDINDEX_OFFSET UNITYSDK_OFFSET(0xD69E650)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_DEBUGDIRECTIONINDEX_OFFSET UNITYSDK_OFFSET(0xD69E640)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_DEBUGSINGLECARD_OFFSET UNITYSDK_OFFSET(0xD69E630)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xD69E450)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MAXCARDSPERDIRECTION_OFFSET UNITYSDK_OFFSET(0xD69E5F0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xD69E580)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MAXSTEPS_OFFSET UNITYSDK_OFFSET(0xD69E560)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_METALLIC_OFFSET UNITYSDK_OFFSET(0xD69E540)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MINSTEP_OFFSET UNITYSDK_OFFSET(0xD69E570)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SDFATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xD69E260)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SDFBOUNDSDATA_OFFSET UNITYSDK_OFFSET(0xD69E340)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SMOOTHNESS_OFFSET UNITYSDK_OFFSET(0xD69E550)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACECARDATLAS_OFFSET UNITYSDK_OFFSET(0xD69E5C0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACECARDBLEND_OFFSET UNITYSDK_OFFSET(0xD69E610)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACECARDINFO_OFFSET UNITYSDK_OFFSET(0xD69E5B0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xD69E590)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_USESURFACECARD_OFFSET UNITYSDK_OFFSET(0xD69E5A0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_REGENERATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xD69E6F0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0xD69A9B0)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xD69E460)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SET_SDFATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xD69E270)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SET_SDFBOUNDSDATA_OFFSET UNITYSDK_OFFSET(0xD69E350)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SHOWSURFACECARDINFO_OFFSET UNITYSDK_OFFSET(0xD69E780)
#define RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD69E810)

namespace RPG::Client
{
	inline static constexpr unsigned int MeshSDFRendererMonoPlugin_TypeDefinitionIndex = 70271;

	class MeshSDFRendererMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MeshSDFRendererBehavior*>
	{
	public:
		::UnityEngine::Texture2D* m_sdfAtlasTexture; // 0x30
		::RPG::Rendering::SDFBoundsData* m_sdfBoundsData; // 0x38
		::UnityEngine::Material* m_material; // 0x40
		::UnityEngine::Color m_albedo; // 0x48
		::System::Single m_metallic; // 0x58
		::System::Single m_smoothness; // 0x5C
		::System::Int32 m_maxSteps; // 0x60
		::System::Single m_minStep; // 0x64
		::System::Single m_maxDistance; // 0x68
		::System::Single m_surfaceThreshold; // 0x6C
		::System::Boolean m_useSurfaceCard; // 0x70
		::UnityEngine::Texture2D* m_surfaceCardInfo; // 0x78
		::UnityEngine::Texture2D* m_surfaceCardAtlas; // 0x80
		::System::Int32 m_cardInfoTexWidth; // 0x88
		::System::Int32 m_cardInfoTexHeight; // 0x8C
		::System::Int32 m_maxCardsPerDirection; // 0x90
		::System::Single m_cardNormalWeightThreshold; // 0x94
		::System::Single m_surfaceCardBlend; // 0x98
		::System::Single m_cardBoundsExpand; // 0x9C
		::System::Boolean m_debugSingleCard; // 0xA0
		::System::Int32 m_debugDirectionIndex; // 0xA4
		::System::Int32 m_debugCardIndex; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_SDFAtlasTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SDFATLASTEXTURE_OFFSET))(this);
		}

		::System::Void set_SDFAtlasTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SET_SDFATLASTEXTURE_OFFSET))(this, a1);
		}

		::RPG::Rendering::SDFBoundsData* get_SDFBoundsData()
		{
			return ((::RPG::Rendering::SDFBoundsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SDFBOUNDSDATA_OFFSET))(this);
		}

		::System::Void set_SDFBoundsData(::RPG::Rendering::SDFBoundsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Rendering::SDFBoundsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SET_SDFBOUNDSDATA_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_BOUNDS_OFFSET))(this);
		}

		::UnityEngine::Material* get_Material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_Material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SET_MATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_Albedo()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_ALBEDO_OFFSET))(this);
		}

		::System::Single get_Metallic()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_METALLIC_OFFSET))(this);
		}

		::System::Single get_Smoothness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SMOOTHNESS_OFFSET))(this);
		}

		::System::Int32 get_MaxSteps()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MAXSTEPS_OFFSET))(this);
		}

		::System::Single get_MinStep()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MINSTEP_OFFSET))(this);
		}

		::System::Single get_MaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MAXDISTANCE_OFFSET))(this);
		}

		::System::Single get_SurfaceThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACETHRESHOLD_OFFSET))(this);
		}

		::System::Boolean get_UseSurfaceCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_USESURFACECARD_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_SurfaceCardInfo()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACECARDINFO_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_SurfaceCardAtlas()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACECARDATLAS_OFFSET))(this);
		}

		::System::Int32 get_CardInfoTexWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDINFOTEXWIDTH_OFFSET))(this);
		}

		::System::Int32 get_CardInfoTexHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDINFOTEXHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_MaxCardsPerDirection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_MAXCARDSPERDIRECTION_OFFSET))(this);
		}

		::System::Single get_CardNormalWeightThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDNORMALWEIGHTTHRESHOLD_OFFSET))(this);
		}

		::System::Single get_SurfaceCardBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_SURFACECARDBLEND_OFFSET))(this);
		}

		::System::Single get_CardBoundsExpand()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_CARDBOUNDSEXPAND_OFFSET))(this);
		}

		::System::Boolean get_DebugSingleCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_DEBUGSINGLECARD_OFFSET))(this);
		}

		::System::Int32 get_DebugDirectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_DEBUGDIRECTIONINDEX_OFFSET))(this);
		}

		::System::Int32 get_DebugCardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_GET_DEBUGCARDINDEX_OFFSET))(this);
		}

		::System::Void SetMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SETMATERIAL_OFFSET))(this, a1);
		}

		::System::Void DebugPrintSDFData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_DEBUGPRINTSDFDATA_OFFSET))(this);
		}

		::System::Void RegenerateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_REGENERATEMATERIAL_OFFSET))(this);
		}

		::System::Void ShowSurfaceCardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHSDFRENDERERMONOPLUGIN_SHOWSURFACECARDINFO_OFFSET))(this);
		}
	};
}
