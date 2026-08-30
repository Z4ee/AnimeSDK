#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CoastinfoWaveMonoPlugin_TileMappingClipmapRings.h"
#include "unitysdk/RPG/Client/CoastinfoWaveMonoPlugin_TileUVWrapMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace OceanSystem { class OceanRenderer; }
namespace RPG::Client { class CoastinfoWaveBehavior; }
namespace RPG::Client { class CoastinfoWaveMonoPlugin_TileMeshCacheEntry; }
namespace RPG::Client { class TileMaskZone; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_FINDBAKEDTILEMESH_OFFSET UNITYSDK_OFFSET(0x1A275AA0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETBAKEDTILEMESHCACHEHASH_OFFSET UNITYSDK_OFFSET(0x1A275B20)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1A276480)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER00LS_OFFSET UNITYSDK_OFFSET(0x1A275C90)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER01LS_OFFSET UNITYSDK_OFFSET(0x1A275CD0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER10LS_OFFSET UNITYSDK_OFFSET(0x1A275CB0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER11LS_OFFSET UNITYSDK_OFFSET(0x1A275CF0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERBAKED_OFFSET UNITYSDK_OFFSET(0x1A275C80)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV00_10_OFFSET UNITYSDK_OFFSET(0x1A275D10)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV01_11_OFFSET UNITYSDK_OFFSET(0x1A275D20)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFMESHLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A275D80)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFUVAFFINEU_LS_OFFSET UNITYSDK_OFFSET(0x1A275D30)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFUVAFFINEVALID_OFFSET UNITYSDK_OFFSET(0x1A275D70)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFUVAFFINEV_LS_OFFSET UNITYSDK_OFFSET(0x1A275D50)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_METHOD_7_85DBA8328D0ACAE3_OFFSET UNITYSDK_OFFSET(0x1A276050)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_METHOD_7_A39F496E3AA1BA1F_OFFSET UNITYSDK_OFFSET(0x1A2759D0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETREFCORNERDATA_OFFSET UNITYSDK_OFFSET(0x1A275DA0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETUVAFFINECOEFFICIENTS_OFFSET UNITYSDK_OFFSET(0x1A275FB0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2764D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveMonoPlugin_TypeDefinitionIndex = 70895;

	class CoastinfoWaveMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CoastinfoWaveBehavior*>
	{
	public:
		::UnityEngine::MeshRenderer* waterPlane; // 0x30
		::OceanSystem::OceanRenderer* farOceanFftBakeTarget; // 0x38
		::Il2CppArray<::UnityEngine::Material*>* _farOceanFftRestoreWaterMaterials; // 0x40
		::System::Boolean UseTileMapping; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::CoastinfoWaveMonoPlugin_TileMeshCacheEntry*>* TM_BakedTileMeshes; // 0x50
		::System::String* TM_BakedMeshName; // 0x58
		::System::String* TM_BakedMeshFolder; // 0x60
		::System::Boolean TM_ShowLODMeshConfig; // 0x68
		::System::Single TM_TileWorldSize; // 0x6C
		::System::Boolean TM_AutoTileCount; // 0x70
		::System::Int32 TM_TileCountX; // 0x74
		::System::Int32 TM_TileCountZ; // 0x78
		::System::Boolean TM_SnapToGrid; // 0x7C
		::RPG::Client::CoastinfoWaveMonoPlugin_TileMappingClipmapRings TM_LODLevels; // 0x80
		::System::Single TM_NearRingRadius; // 0x84
		::System::Single TM_FarDistance; // 0x88
		::System::Single TM_FrustumExpandPerSideDegrees; // 0x8C
		::System::Single TM_FrustumPadding; // 0x90
		::System::Int32 TM_UpdateIntervalFrames; // 0x94
		::System::Single TM_CameraAngleForceRefreshDegrees; // 0x98
		::System::Single TM_MaxDrawCalls; // 0x9C
		::UnityEngine::Camera* RT_TargetCamera; // 0xA0
		::RPG::Client::CoastinfoWaveMonoPlugin_TileUVWrapMode TM_UVWrapMode; // 0xA8
		::System::Boolean TM_FollowCamera; // 0xAC
		::System::Int32 TM_TileResolution; // 0xB0
		::System::Boolean TM_CustomLODResolutions; // 0xB4
		::Il2CppArray<::System::Int32>* TM_LODMeshResolutions; // 0xB8
		::System::Boolean TM_EnableGPUSeamSnap; // 0xC0
		::System::Single TM_LODSkirtDepth; // 0xC4
		::System::Boolean TM_GizmosPreview; // 0xC8
		::System::Single TM_GizmosMaxViewDistance; // 0xCC
		::System::Boolean TM_GizmosDrawInternalGrid; // 0xD0
		::System::Int32 TM_GizmosGridStep; // 0xD4
		::System::Boolean TM_GizmosDrawRealMesh; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::TileMaskZone*>* TM_MaskZones; // 0xE0
		::System::Int32 TM_ClipEdgeRefineLevels; // 0xE8
		::System::Single TM_ClipEdgeRefineRange; // 0xEC
		::System::Int32 TM_SelectedMaskZone; // 0xF0
		::System::Boolean TM_EditorRealtimePreview; // 0xF4
		::UnityEngine::Mesh* FixedReferenceMesh; // 0xF8
		::System::Boolean FixedRef_AutoFillWhenMeshMissing; // 0x100
		::System::Boolean _refCornerBaked; // 0x101
		::UnityEngine::Mesh* _refCornerSourceMesh; // 0x108
		::UnityEngine::Bounds _refMeshLocalBounds; // 0x110
		::UnityEngine::Vector3 _refCorner00LS; // 0x128
		::UnityEngine::Vector3 _refCorner10LS; // 0x134
		::UnityEngine::Vector3 _refCorner01LS; // 0x140
		::UnityEngine::Vector3 _refCorner11LS; // 0x14C
		::UnityEngine::Vector4 _refCornerUV00_10; // 0x158
		::UnityEngine::Vector4 _refCornerUV01_11; // 0x168
		::UnityEngine::Vector3 _refUVAffineU_LS; // 0x178
		::UnityEngine::Vector3 _refUVAffineV_LS; // 0x184
		::System::Boolean _refUVAffineValid; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::RPG::Client::CoastinfoWaveMonoPlugin_TileMeshCacheEntry* Method_7_A39F496E3AA1BA1F(::System::Int32 a1, ::System::Single a2)
		{
			return ((::RPG::Client::CoastinfoWaveMonoPlugin_TileMeshCacheEntry*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_METHOD_7_A39F496E3AA1BA1F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Mesh* FindBakedTileMesh(::System::Int32 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_FINDBAKEDTILEMESH_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBakedTileMeshCacheHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETBAKEDTILEMESHCACHEHASH_OFFSET))(this);
		}

		::System::Boolean get_RefCornerBaked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERBAKED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner00LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER00LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner10LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER10LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner01LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER01LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner11LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER11LS_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_RefCornerUV00_10()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV00_10_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_RefCornerUV01_11()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV01_11_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefUVAffineU_LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFUVAFFINEU_LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefUVAffineV_LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFUVAFFINEV_LS_OFFSET))(this);
		}

		::System::Boolean get_RefUVAffineValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFUVAFFINEVALID_OFFSET))(this);
		}

		::UnityEngine::Bounds get_RefMeshLocalBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFMESHLOCALBOUNDS_OFFSET))(this);
		}

		::System::Void SetRefCornerData(::System::Boolean a1, ::UnityEngine::Mesh* a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector4 a8, ::UnityEngine::Vector4 a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Mesh*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETREFCORNERDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void SetUVAffineCoefficients(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETUVAFFINECOEFFICIENTS_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_7_85DBA8328D0ACAE3(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Int32 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_METHOD_7_85DBA8328D0ACAE3_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
