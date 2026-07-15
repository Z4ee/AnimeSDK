#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPTerrainDebugVizMode.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/TerrainAdditionalComponent.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::CustomRP { class CRPTerrainPalette; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class ITerrainLayer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_CRPTERRAIN_APPLYPALETTE_OFFSET UNITYSDK_OFFSET(0x17815840)
#define RPG_CUSTOMRP_CRPTERRAIN_CHECKSPLATRESOLUTIONUPDATE_OFFSET UNITYSDK_OFFSET(0x17815550)
#define RPG_CUSTOMRP_CRPTERRAIN_ENSURETERRAINLAYERS_OFFSET UNITYSDK_OFFSET(0x178152C0)
#define RPG_CUSTOMRP_CRPTERRAIN_GETACTIVELAYERS_OFFSET UNITYSDK_OFFSET(0x17814350)
#define RPG_CUSTOMRP_CRPTERRAIN_GETBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x17814330)
#define RPG_CUSTOMRP_CRPTERRAIN_GETGROUPSELECTIONDROPDOWNITEMS_OFFSET UNITYSDK_OFFSET(0x17814770)
#define RPG_CUSTOMRP_CRPTERRAIN_GET_BLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x17814310)
#define RPG_CUSTOMRP_CRPTERRAIN_GET_GROUPIDMAP_OFFSET UNITYSDK_OFFSET(0x17815020)
#define RPG_CUSTOMRP_CRPTERRAIN_GET_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x17814FD0)
#define RPG_CUSTOMRP_CRPTERRAIN_GET_MOUSEHOVERINGBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x17815930)
#define RPG_CUSTOMRP_CRPTERRAIN_GET_SELECTEDGROUPCOLOR_OFFSET UNITYSDK_OFFSET(0x178147F0)
#define RPG_CUSTOMRP_CRPTERRAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17815AD0)
#define RPG_CUSTOMRP_CRPTERRAIN_PALETTENOTASSIGNED_OFFSET UNITYSDK_OFFSET(0x17814750)
#define RPG_CUSTOMRP_CRPTERRAIN_SET_SELECTEDGROUPCOLOR_OFFSET UNITYSDK_OFFSET(0x17814870)
#define RPG_CUSTOMRP_CRPTERRAIN_START_OFFSET UNITYSDK_OFFSET(0x17815260)
#define RPG_CUSTOMRP_CRPTERRAIN_UPDATEGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0x17815050)
#define RPG_CUSTOMRP_CRPTERRAIN_UPDATETERRAINMATERIAL_OFFSET UNITYSDK_OFFSET(0x17814AA0)
#define RPG_CUSTOMRP_CRPTERRAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x17815B00)
#define RPG_CUSTOMRP_CRPTERRAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x17815BA0)
#define RPG_CUSTOMRP_CRPTERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17815B70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrain_TypeDefinitionIndex = 36176;

	class CRPTerrain : public ::UnityEngine::TerrainAdditionalComponent
	{
	public:
		static ::RPG::CustomRP::CRPTerrain** StaticGet_currentTerrain()
		{
			return (::RPG::CustomRP::CRPTerrain**)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x5F680);
		}
		static ::System::Int32* StaticGet_ShaderID_GlobalTintTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10150);
		}
		static ::System::Int32* StaticGet_ShaderID_LayerInfoBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10154);
		}
		static ::System::Int32* StaticGet_ShaderID_SplatTextureArrayNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10158);
		}
		static ::System::Int32* StaticGet_ShaderID_GroupIDMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x1015C);
		}
		static ::System::Int32* StaticGet_ShaderID_DebugVizParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10160);
		}
		static ::System::Int32* StaticGet_ShaderID_GroupDebugColorBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10164);
		}
		static ::System::Int32* StaticGet_ShaderID_TerrainSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10168);
		}
		static ::System::Int32* StaticGet_ShaderID_SplatTextureArrayDiffuse()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x1016C);
		}
		static ::System::Int32* StaticGet_ShaderID_GroupInfoBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10170);
		}
		static ::System::Int32* StaticGet_ShaderID_MouseHoveringUV()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPTerrain_TypeDefinitionIndex)->GetStaticField(0x10174);
		}
		// static const ::System::Int32 SPLAT_BLOCK_RESOLUTION = 0x40; // 0x0
		::System::Int32 splatMapResolution; // 0x18
		::System::Int32 _cachedBufferVersion; // 0x1C
		::RPG::CustomRP::CRPTerrainPalette* palette; // 0x20
		::Il2CppArray<::System::Byte>* groupIds; // 0x28
		::System::Byte assignGroupId; // 0x30
		::RPG::CustomRP::CRPTerrainDebugVizMode debugVizMode; // 0x34
		::UnityEngine::Texture2D* tintColorTexture; // 0x38
		::UnityEngine::Texture2D* groupIdMap; // 0x40
		::UnityEngine::MaterialPropertyBlock* materialPropertyBlock; // 0x48
		::System::Boolean editGroupIds; // 0x50
		::UnityEngine::Vector2 mouseHoveringUV; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__CCTOR_OFFSET))();
		}

		::System::Int32 get_BlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GET_BLOCKCOUNT_OFFSET))(this);
		}

		::System::Int32 GetBlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GETBLOCKCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ITerrainLayer*>* GetActiveLayers()
		{
			return ((::Il2CppArray<::UnityEngine::ITerrainLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GETACTIVELAYERS_OFFSET))(this);
		}

		::System::Boolean PaletteNotAssigned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_PALETTENOTASSIGNED_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetGroupSelectionDropdownItems()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GETGROUPSELECTIONDROPDOWNITEMS_OFFSET))(this);
		}

		::UnityEngine::Color32 get_SelectedGroupColor()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GET_SELECTEDGROUPCOLOR_OFFSET))(this);
		}

		::System::Void set_SelectedGroupColor(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_SET_SELECTEDGROUPCOLOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_GroupIds()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GET_GROUPIDS_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_GroupIdMap()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GET_GROUPIDMAP_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_START_OFFSET))(this);
		}

		::System::Void UpdateGroupIdMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_UPDATEGROUPIDMAP_OFFSET))(this);
		}

		::System::Void UpdateTerrainMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_UPDATETERRAINMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_mouseHoveringBlockIndex()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_GET_MOUSEHOVERINGBLOCKINDEX_OFFSET))(this);
		}

		::System::Void EnsureTerrainLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_ENSURETERRAINLAYERS_OFFSET))(this);
		}

		::System::Void CheckSplatResolutionUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_CHECKSPLATRESOLUTIONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_UPDATE_OFFSET))(this);
		}

		::System::Void ApplyPalette()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN_APPLYPALETTE_OFFSET))(this);
		}
	};
}
