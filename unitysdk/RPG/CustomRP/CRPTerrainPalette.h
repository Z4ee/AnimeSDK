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

#define RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATENEWGROUP_OFFSET UNITYSDK_OFFSET(0x192B5A00)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATEORUPDATETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x192B6680)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GETLAYERID_OFFSET UNITYSDK_OFFSET(0x192B5DA0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_BUFFERVERSION_OFFSET UNITYSDK_OFFSET(0x192B7050)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_CACHEDMASTERLIMIT_OFFSET UNITYSDK_OFFSET(0x192B7030)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_DEBUGCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x192B5470)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_DIFFUSETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x192B5410)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_GROUPINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x192B53B0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_LAYERINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x192B53E0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_NORMALTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x192B5440)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_UNIQUELAYERS_OFFSET UNITYSDK_OFFSET(0x192B5D80)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x192B7070)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_PACK4BYTES_OFFSET UNITYSDK_OFFSET(0x192B5D60)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_1_OFFSET UNITYSDK_OFFSET(0x192B6560)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_OFFSET UNITYSDK_OFFSET(0x192B6540)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_RELEASEBUFFERS_OFFSET UNITYSDK_OFFSET(0x192B7080)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_SETLAYERID_OFFSET UNITYSDK_OFFSET(0x192B5E60)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_BUFFERVERSION_OFFSET UNITYSDK_OFFSET(0x192B7060)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_CACHEDMASTERLIMIT_OFFSET UNITYSDK_OFFSET(0x192B7040)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_UNIQUELAYERS_OFFSET UNITYSDK_OFFSET(0x192B5D90)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEBUFFERS_OFFSET UNITYSDK_OFFSET(0x192B43A0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEGROUPINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x192B6400)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATELAYERINFOBUFFER_OFFSET UNITYSDK_OFFSET(0x192B65D0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATETEXTUREARRAYS_OFFSET UNITYSDK_OFFSET(0x192B6E40)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEUNIQUELAYERS_OFFSET UNITYSDK_OFFSET(0x192B5F00)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE_VALIDATEGROUPS_OFFSET UNITYSDK_OFFSET(0x192B59A0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x192B72F0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_0_OFFSET UNITYSDK_OFFSET(0x192B73A0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_1_OFFSET UNITYSDK_OFFSET(0x192B76A0)
#define RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATELAYERINFOBUFFER_B__20_0_OFFSET UNITYSDK_OFFSET(0x192B76B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainPalette_TypeDefinitionIndex = 37039;

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
		::System::Int32 _bufferVersion_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__CTOR_OFFSET))(this);
		}

		::System::Boolean ValidateGroups(::System::Collections::Generic::List_1<::RPG::CustomRP::CRPTerrainLayerGroup>* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::CustomRP::CRPTerrainLayerGroup>*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_VALIDATEGROUPS_OFFSET))(this, a1, a2);
		}

		::RPG::CustomRP::CRPTerrainLayerGroup CreateNewGroup()
		{
			return ((::RPG::CustomRP::CRPTerrainLayerGroup(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATENEWGROUP_OFFSET))(this);
		}

		::System::UInt32 Pack4Bytes(::System::Byte a1, ::System::Byte a2, ::System::Byte a3, ::System::Byte a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_PACK4BYTES_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>* get_uniqueLayers()
		{
			return ((::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_UNIQUELAYERS_OFFSET))(this);
		}

		::System::Void set_uniqueLayers(::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_UNIQUELAYERS_OFFSET))(this, a1);
		}

		::System::Int32 GetLayerId(::RPG::CustomRP::CRPTerrainLayer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GETLAYERID_OFFSET))(this, a1);
		}

		::System::Void SetLayerId(::RPG::CustomRP::CRPTerrainLayer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_SETLAYERID_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateUniqueLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEUNIQUELAYERS_OFFSET))(this);
		}

		::System::Void UpdateGroupInfoBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEGROUPINFOBUFFER_OFFSET))(this);
		}

		::System::UInt32 PackUNorm10A2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 PackUNorm10A2_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_PACKUNORM10A2_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateLayerInfoBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATELAYERINFOBUFFER_OFFSET))(this);
		}

		::UnityEngine::Texture2DArray* CreateOrUpdateTextureArray(::UnityEngine::Texture2DArray* a1, ::System::String* a2, ::Il2CppArray<::UnityEngine::Texture2D*>* a3)
		{
			return ((::UnityEngine::Texture2DArray*(*)(::PVOID, ::UnityEngine::Texture2DArray*, ::System::String*, ::Il2CppArray<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_CREATEORUPDATETEXTUREARRAY_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_cachedMasterLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_CACHEDMASTERLIMIT_OFFSET))(this, a1);
		}

		::System::Int32 get_bufferVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_GET_BUFFERVERSION_OFFSET))(this);
		}

		::System::Void set_bufferVersion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_SET_BUFFERVERSION_OFFSET))(this, a1);
		}

		::System::Void UpdateBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_UPDATEBUFFERS_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_ONDISABLE_OFFSET))(this);
		}

		::System::Void ReleaseBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE_RELEASEBUFFERS_OFFSET))(this);
		}

		::RPG::CustomRP::CRPTerrainPalette_GroupInfoData _UpdateGroupInfoBuffer_b__17_0(::RPG::CustomRP::CRPTerrainLayerGroup a1)
		{
			return ((::RPG::CustomRP::CRPTerrainPalette_GroupInfoData(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayerGroup))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_0_OFFSET))(this, a1);
		}

		::System::UInt32 _UpdateGroupInfoBuffer_b__17_1(::RPG::CustomRP::CRPTerrainLayerGroup a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayerGroup))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATEGROUPINFOBUFFER_B__17_1_OFFSET))(this, a1);
		}

		::RPG::CustomRP::CRPTerrainPalette_LayerInfoData _UpdateLayerInfoBuffer_b__20_0(::RPG::CustomRP::CRPTerrainLayer* a1)
		{
			return ((::RPG::CustomRP::CRPTerrainPalette_LayerInfoData(*)(::PVOID, ::RPG::CustomRP::CRPTerrainLayer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINPALETTE__UPDATELAYERINFOBUFFER_B__20_0_OFFSET))(this, a1);
		}
	};
}
