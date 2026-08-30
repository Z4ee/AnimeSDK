#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CoastinfoWaveMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCC45A00)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0731F082CEBAA144_OFFSET UNITYSDK_OFFSET(0xCC46790)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1AB61F56F847D71D_OFFSET UNITYSDK_OFFSET(0xCC4AC00)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1DBA809A615FDAF9_OFFSET UNITYSDK_OFFSET(0xCC495E0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_2F13D956C427DE85_OFFSET UNITYSDK_OFFSET(0xCC4A3B0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_388E0EC045332FEE_OFFSET UNITYSDK_OFFSET(0xCC42C60)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCC4B3E0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0xCC47880)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCC4B250)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCC4B2C0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCC4B320)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xCC4B380)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0xCC4B420)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCC4B1F0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_535CBA154E54C9EC_OFFSET UNITYSDK_OFFSET(0xCC46DF0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_593BE2BC6886B2F0_OFFSET UNITYSDK_OFFSET(0xCC47130)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5A06529FCD4CF1A3_OFFSET UNITYSDK_OFFSET(0xCC45010)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_6E559D034EA440A3_OFFSET UNITYSDK_OFFSET(0xCC48200)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_72E269DA5A2E94E3_OFFSET UNITYSDK_OFFSET(0xCC43540)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7A58CCD653F496E2_OFFSET UNITYSDK_OFFSET(0xCC49DC0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7B23E8210E048DF0_OFFSET UNITYSDK_OFFSET(0xCC43E20)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0xCC472E0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_8BF43C2410D68200_OFFSET UNITYSDK_OFFSET(0xCC45A40)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCC4B160)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_B0C9E67798485BC6_OFFSET UNITYSDK_OFFSET(0xCC45D10)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0xCC462A0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_C1C307632EC526EF_OFFSET UNITYSDK_OFFSET(0xCC49050)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_D7E9BA8C46515F4A_OFFSET UNITYSDK_OFFSET(0xCC440A0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_DAF383A59D1CB427_OFFSET UNITYSDK_OFFSET(0xCC47EF0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_E3D1FEBC25B17063_OFFSET UNITYSDK_OFFSET(0xCC4B4E0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0xCC43DA0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_EBC0B916DC2632EB_OFFSET UNITYSDK_OFFSET(0xCC4A6E0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_EEF51B9FF10C9394_OFFSET UNITYSDK_OFFSET(0xCC433F0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_F21FB821146D3784_OFFSET UNITYSDK_OFFSET(0xCC47C10)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCC4B480)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC4B930)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET UNITYSDK_OFFSET(0xCC43D60)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCC4B670)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveBehavior_TypeDefinitionIndex = 70893;

	class CoastinfoWaveBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_ID_SeaClipAxes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123A0);
		}
		static ::System::Int32* StaticGet_ID_RefUVAffineV()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123A4);
		}
		static ::System::Int32* StaticGet_ID_RefOriginWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123A8);
		}
		static ::System::Int32* StaticGet_ID_RefUV01_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123AC);
		}
		static ::System::Int32* StaticGet_ID_RefAxisN_WS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123B0);
		}
		static ::System::Int32* StaticGet_ID_TileSeamSpacing()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123B4);
		}
		static ::System::Int32* StaticGet_ID_RefUVAffineU()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123B8);
		}
		static ::System::Int32* StaticGet_ID_CustomLightFinalDir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123BC);
		}
		static ::System::Int32* StaticGet_ID_TM_WrapMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123C0);
		}
		static ::System::Int32* StaticGet_ID_RefUV00_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123C4);
		}
		static ::System::Int32* StaticGet_ID_CustomLightMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123C8);
		}
		static ::System::Int32* StaticGet_ID_TM_Switch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123CC);
		}
		static ::System::Int32* StaticGet_ID_RefAxisT_WS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123D0);
		}
		static ::System::Int32* StaticGet_ID_RefSizeWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123D4);
		}
		static ::System::Int32* StaticGet_ID_CustomLightMtxRow2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123D8);
		}
		static ::System::Int32* StaticGet_ID_CustomLightMtxRow0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123DC);
		}
		static ::System::Int32* StaticGet_ID_SeaClipCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123E0);
		}
		static ::System::Int32* StaticGet_ID_CustomLightMtxRow1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123E4);
		}
		static ::System::Int32* StaticGet_ID_TileSeamEnabled()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123E8);
		}
		static ::System::Int32* StaticGet_ID_SeaClipCenterHalf()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123EC);
		}
		static ::System::Int32* StaticGet_ID_TileSeamMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x123F0);
		}
		// static const ::System::Int32 kMaxMeshGroups = 0xC; // 0x0
		// static const ::System::Int32 kMaxInstancesPerBatch = 0x3FF; // 0x0
		// static const ::System::Int32 kMaxSeaClipZones = 0x8; // 0x0
		::System::Boolean _tmActive; // 0x38
		::UnityEngine::Mesh* _tmSharedMesh; // 0x40
		::Il2CppArray<::UnityEngine::Mesh*>* _tmMeshGroupMeshes; // 0x48
		::Il2CppArray<::System::Boolean>* _tmMeshGroupIsBaked; // 0x50
		::Il2CppArray<::System::Int32>* _tmMeshGroupResolutions; // 0x58
		::Il2CppArray<::System::Int32>* _lodToMeshGroup; // 0x60
		::System::Int32 _tmMeshGroupCount; // 0x68
		::UnityEngine::Material* _tmMat; // 0x70
		::UnityEngine::MaterialPropertyBlock* _tmMPB; // 0x78
		::System::Int32 _tmSourceMatId; // 0x80
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* _tmMeshGroupMatrices; // 0x88
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _tmMeshGroupSeamMasks; // 0x90
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _tmMeshGroupSeamSpacings; // 0x98
		::Il2CppArray<::System::Int32>* _tmMeshGroupInstanceCounts; // 0xA0
		::Il2CppArray<::UnityEngine::Matrix4x4>* _tmBatch1023; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* _tmBatchSeamMasks; // 0xB0
		::Il2CppArray<::UnityEngine::Vector4>* _tmBatchSeamSpacings; // 0xB8
		::System::Int32 _tmInstanceCount; // 0xC0
		::System::Boolean _tmDirtyMatrices; // 0xC4
		::System::Int32 _tmFrameCounter; // 0xC8
		::UnityEngine::Vector3 _tmLastSnapOriginWS; // 0xCC
		::UnityEngine::Quaternion _tmLastSnapCamRot; // 0xD8
		::System::Boolean _tmHasSnapCamRot; // 0xE8
		::UnityEngine::Quaternion _tmPreviousTickCamRot; // 0xEC
		::System::Boolean _tmHasPreviousTickCamRot; // 0xFC
		::System::Single _tmLastTileSize; // 0x100
		::System::Int32 _tmLastTileResolution; // 0x104
		::System::Int32 _tmLastMeshResolutionHash; // 0x108
		::System::Int32 _tmLastBakedMeshCacheHash; // 0x10C
		::System::Int32 _tmLastLodLevels; // 0x110
		::System::Single _tmLastFrustumExpandPerSideDegrees; // 0x114
		::System::Single _tmLastFrustumPadding; // 0x118
		::System::Single _tmLastSkirtDepth; // 0x11C
		::System::Boolean _tmLastSeamSnapEnabled; // 0x120
		::UnityEngine::Vector3 _refOriginWS; // 0x124
		::UnityEngine::Vector3 _refAxisT_WS; // 0x130
		::UnityEngine::Vector3 _refAxisN_WS; // 0x13C
		::UnityEngine::Vector3 _refNormalWS; // 0x148
		::UnityEngine::Quaternion _refRotWS; // 0x154
		::System::Single _refWidthWorld; // 0x164
		::System::Single _refDepthWorld; // 0x168
		::UnityEngine::Vector4 _refCornerUV00_10; // 0x16C
		::UnityEngine::Vector4 _refCornerUV01_11; // 0x17C
		::UnityEngine::Vector4 _refUVAffineU; // 0x18C
		::UnityEngine::Vector4 _refUVAffineV; // 0x19C
		::Il2CppArray<::UnityEngine::Vector4>* _seaClipCenterHalf; // 0x1B0
		::Il2CppArray<::UnityEngine::Vector4>* _seaClipAxes; // 0x1B8
		::UnityEngine::Vector3 _tmTileScale; // 0x1C0
		::Il2CppArray<::UnityEngine::Plane>* _tmFrustumPlanes; // 0x1D0
		::Il2CppArray<::System::Single>* _lodRingOuter; // 0x1D8
		::Il2CppArray<::System::Int32>* _lodHalfCounts; // 0x1E0
		::Il2CppArray<::System::Int32>* _lodCamTileIx; // 0x1E8
		::Il2CppArray<::System::Int32>* _lodCamTileIz; // 0x1F0
		::Il2CppArray<::System::Int32>* _lodOuterMinU; // 0x1F8
		::Il2CppArray<::System::Int32>* _lodOuterMaxU; // 0x200
		::Il2CppArray<::System::Int32>* _lodOuterMinV; // 0x208
		::Il2CppArray<::System::Int32>* _lodOuterMaxV; // 0x210
		::Il2CppArray<::System::Int32>* _lodInnerMinU; // 0x218
		::Il2CppArray<::System::Int32>* _lodInnerMaxU; // 0x220
		::Il2CppArray<::System::Int32>* _lodInnerMinV; // 0x228
		::Il2CppArray<::System::Int32>* _lodInnerMaxV; // 0x230
		::Il2CppArray<::System::Single>* _lodTileSizes; // 0x238
		::Il2CppArray<::System::Single>* _lodHalfExtents; // 0x240
		::Il2CppArray<::UnityEngine::Vector3>* _lodTileExtents; // 0x248
		::Il2CppArray<::UnityEngine::Vector3>* _lodTileScale; // 0x250

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_388E0EC045332FEE(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_388E0EC045332FEE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_3_EEF51B9FF10C9394(::Il2CppArray<::UnityEngine::ComputeBuffer*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::ComputeBuffer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_EEF51B9FF10C9394_OFFSET))(a1);
		}

		static ::System::Boolean Method_3_72E269DA5A2E94E3(::UnityEngine::Camera* a1, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* a2, ::System::Single& a3, ::System::Single& a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_72E269DA5A2E94E3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Method_3_E55199F4E71DB1AE(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_E55199F4E71DB1AE_OFFSET))(a1);
		}

		::System::Void Method_3_7B23E8210E048DF0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7B23E8210E048DF0_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* Method_3_D7E9BA8C46515F4A(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_D7E9BA8C46515F4A_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_3_5A06529FCD4CF1A3(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5A06529FCD4CF1A3_OFFSET))(this, a1);
		}

		static ::System::Void Method_3_8BF43C2410D68200(::RPG::Client::CoastinfoWaveMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::Client::CoastinfoWaveMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_8BF43C2410D68200_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 Method_3_B0C9E67798485BC6()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_B0C9E67798485BC6_OFFSET))();
		}

		::System::Void Method_3_B1EA412ACAE87C15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
		}

		::System::Int32 Method_3_0731F082CEBAA144(::RPG::Client::CoastinfoWaveMonoPlugin* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CoastinfoWaveMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0731F082CEBAA144_OFFSET))(this, a1);
		}

		::System::Void Method_3_535CBA154E54C9EC(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_535CBA154E54C9EC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_593BE2BC6886B2F0(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_593BE2BC6886B2F0_OFFSET))(this, a1);
		}

		::System::Void Method_3_81FEFD1B22CE37A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET))(this);
		}

		::System::Void Method_3_3E586421BA588EFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_3E586421BA588EFD_OFFSET))(this);
		}

		static ::System::Boolean Method_3_F21FB821146D3784(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_F21FB821146D3784_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_3_DAF383A59D1CB427(::UnityEngine::Camera* a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_DAF383A59D1CB427_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_3_6E559D034EA440A3(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_6E559D034EA440A3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_C1C307632EC526EF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::RPG::Client::CoastinfoWaveMonoPlugin* a10, ::System::Int32 a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_C1C307632EC526EF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void Method_3_1DBA809A615FDAF9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7, ::System::Single a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::RPG::Client::CoastinfoWaveMonoPlugin* a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1DBA809A615FDAF9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void Method_3_2F13D956C427DE85(::RPG::Client::CoastinfoWaveMonoPlugin* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Vector4& a5, ::UnityEngine::Vector4& a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_2F13D956C427DE85_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_3_7A58CCD653F496E2(::RPG::Client::CoastinfoWaveMonoPlugin* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7A58CCD653F496E2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_EBC0B916DC2632EB(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_EBC0B916DC2632EB_OFFSET))(this, a1);
		}

		::System::Void Method_3_1AB61F56F847D71D(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1AB61F56F847D71D_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::CoastinfoWaveMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::CoastinfoWaveMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_E3D1FEBC25B17063(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_E3D1FEBC25B17063_OFFSET))(this, a1);
		}

		static ::System::Single _ComputeNearFarFromBounds_g__ExtentAlongDir_2_0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET))(a1, a2);
		}
	};
}
