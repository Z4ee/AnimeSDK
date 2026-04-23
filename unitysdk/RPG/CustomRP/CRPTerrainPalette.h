#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPTerrainLayerGroup.h"
#include "unitysdk/RPG/CustomRP/CRPTerrainPalette_GroupInfoData.h"
#include "unitysdk/RPG/CustomRP/CRPTerrainPalette_LayerInfoData.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::CustomRP { class CRPTerrainLayer; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }

#define RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATENEWGROUP_OFFSET UNITYSDK_OFFSET(0x18119E80)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATEORUPDATETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1811AB50)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GETLAYERID_OFFSET UNITYSDK_OFFSET(0x1811A220)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_CACHEDMASTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1811B650)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_DEBUGCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x18119660)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_DIFFUSETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x18119600)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_GROUPINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x181195A0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_LAYERINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x181195D0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_NORMALTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x18119630)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_UNIQUELAYERS_OFFSET UNITYSDK_OFFSET(0x1811A200)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_PACK4BYTES_OFFSET UNITYSDK_OFFSET(0x1811A1E0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_1_OFFSET UNITYSDK_OFFSET(0x1811AA30)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_OFFSET UNITYSDK_OFFSET(0x1811AA10)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_SETLAYERID_OFFSET UNITYSDK_OFFSET(0x1811A290)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_CACHEDMASTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1811B660)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_UNIQUELAYERS_OFFSET UNITYSDK_OFFSET(0x1811A210)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEBUFFERS_OFFSET UNITYSDK_OFFSET(0x18118BE0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEGROUPINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x1811A900)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATELAYERINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x1811AAB0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATETEXTUREARRAYS_OFFSET UNITYSDK_OFFSET(0x1811B440)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEUNIQUELAYERS_OFFSET UNITYSDK_OFFSET(0x1811A330)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_VALIDATEGROUPS_OFFSET UNITYSDK_OFFSET(0x18119E20)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1811B670)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_0_OFFSET UNITYSDK_OFFSET(0x1811B720)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_1_OFFSET UNITYSDK_OFFSET(0x1811BA20)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATELAYERINFOBUFFER_B__20_0_OFFSET UNITYSDK_OFFSET(0x1811BA30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainPalette_TypeDefinitionIndex = 35113;

	class CRPTerrainPalette : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::CustomRP::CRPTerrainLayer* defaultLayer; // 0x18
		::System::Collections::Generic::List_1<::RPG::CustomRP::CRPTerrainLayerGroup>* groups; // 0x20
		::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>* _uniqueLayers_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CRPTerrainLayer*, ::System::Int32>* uniqueLayerIds; // 0x30
		::System::Int32 nullLayerId; // 0x38
		::UnityEngine::ComputeBuffer* groupInfoBuffer; // 0x40
		::UnityEngine::ComputeBuffer* debugColorBuffer; // 0x48
		::UnityEngine::ComputeBuffer* layerInfoBuffer; // 0x50
		::UnityEngine::Texture2DArray* diffuseTextureArray; // 0x58
		::UnityEngine::Texture2DArray* normalTextureArray; // 0x60
		::System::Int32 _cachedMasterLimit_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__CTOR_OFFSET))(this);
		}

		::System::Boolean ValidateGroups(::System::Collections::Generic::List_1<::RPG::CustomRP::CRPTerrainLayerGroup>* gs, ::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::CustomRP::CRPTerrainLayerGroup>*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_VALIDATEGROUPS_OFFSET))(this, gs, errorMessage);
		}

		::RPG::CustomRP::CRPTerrainLayerGroup CreateNewGroup()
		{
			return ((::RPG::CustomRP::CRPTerrainLayerGroup(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATENEWGROUP_OFFSET))(this);
		}

		::System::UInt32 Pack4Bytes(::System::Byte b0, ::System::Byte b1, ::System::Byte b2, ::System::Byte b3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_PACK4BYTES_OFFSET))(this, b0, b1, b2, b3);
		}

		::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>* get_uniqueLayers()
		{
			return ((::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_UNIQUELAYERS_OFFSET))(this);
		}

		::System::Void set_uniqueLayers(::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_UNIQUELAYERS_OFFSET))(this, value);
		}

		::System::Int32 GetLayerId(::RPG::CustomRP::CRPTerrainLayer* layer)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GETLAYERID_OFFSET))(this, layer);
		}

		::System::Void SetLayerId(::RPG::CustomRP::CRPTerrainLayer* layer, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_SETLAYERID_OFFSET))(this, layer, idx);
		}

		::System::Void UpdateUniqueLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEUNIQUELAYERS_OFFSET))(this);
		}

		::System::Void UpdateGroupInfoBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEGROUPINFOBUFFER_OFFSET))(this);
		}

		::System::UInt32 PackUNorm10A2(::System::UInt32 v0, ::System::UInt32 v1, ::System::UInt32 v2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_OFFSET))(this, v0, v1, v2);
		}

		::System::UInt32 PackUNorm10A2_1(::System::Single v0, ::System::Single v1, ::System::Single v2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_1_OFFSET))(this, v0, v1, v2);
		}

		::System::Void UpdateLayerInfoBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATELAYERINFOBUFFER_OFFSET))(this);
		}

		::UnityEngine::Texture2DArray* CreateOrUpdateTextureArray(::UnityEngine::Texture2DArray* texArray, ::System::String* texName, ::Il2CppArray<::UnityEngine::Texture2D*>* textures)
		{
			return ((::UnityEngine::Texture2DArray*(*)(::PVOID, ::UnityEngine::Texture2DArray*, ::System::String*, ::Il2CppArray<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATEORUPDATETEXTUREARRAY_OFFSET))(this, texArray, texName, textures);
		}

		::System::Void UpdateTextureArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATETEXTUREARRAYS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_GroupInfoBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_GROUPINFOBUFFER_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_DebugColorBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_DEBUGCOLORBUFFER_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_LayerInfoBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_LAYERINFOBUFFER_OFFSET))(this);
		}

		::UnityEngine::Texture2DArray* get_DiffuseTextureArray()
		{
			return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_DIFFUSETEXTUREARRAY_OFFSET))(this);
		}

		::UnityEngine::Texture2DArray* get_NormalTextureArray()
		{
			return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_NORMALTEXTUREARRAY_OFFSET))(this);
		}

		::System::Int32 get_cachedMasterLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_CACHEDMASTERLIMIT_OFFSET))(this);
		}

		::System::Void set_cachedMasterLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_CACHEDMASTERLIMIT_OFFSET))(this, value);
		}

		::System::Void UpdateBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEBUFFERS_OFFSET))(this);
		}

		::RPG::CustomRP::CRPTerrainPalette_GroupInfoData _UpdateGroupInfoBuffer_b__17_0(::RPG::CustomRP::CRPTerrainLayerGroup g)
		{
			return ((::RPG::CustomRP::CRPTerrainPalette_GroupInfoData(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayerGroup))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_0_OFFSET))(this, g);
		}

		::System::UInt32 _UpdateGroupInfoBuffer_b__17_1(::RPG::CustomRP::CRPTerrainLayerGroup g)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayerGroup))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_1_OFFSET))(this, g);
		}

		::RPG::CustomRP::CRPTerrainPalette_LayerInfoData _UpdateLayerInfoBuffer_b__20_0(::RPG::CustomRP::CRPTerrainLayer* layer)
		{
			return ((::RPG::CustomRP::CRPTerrainPalette_LayerInfoData(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATELAYERINFOBUFFER_B__20_0_OFFSET))(this, layer);
		}
	};
}
