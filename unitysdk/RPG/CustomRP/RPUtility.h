#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MRTBinding.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/RPG/CustomRP/TexType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/FormatUsage.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/ClearColor.h"
#include "unitysdk/UnityEngine/Rendering/ClearFlag.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class CustomAdditionalCameraData; }
namespace RPG::CustomRP { class PassRTRes; }
namespace RPG::CustomRP { class ReleaseAssetDel; }
namespace RPG::CustomRP { class SyncLoadAssetDel; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class CommandBufferExt; }

#define RPG_CUSTOMRP_RPUTILITY_BEGINDRAWRT_OFFSET UNITYSDK_OFFSET(0x1C6E3AD0)
#define RPG_CUSTOMRP_RPUTILITY_BLITMRT_OFFSET UNITYSDK_OFFSET(0x1C6C5B90)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_10_OFFSET UNITYSDK_OFFSET(0x1C6E2A60)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_11_OFFSET UNITYSDK_OFFSET(0x1C6E2F60)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_1_OFFSET UNITYSDK_OFFSET(0x1C6B37E0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_2_OFFSET UNITYSDK_OFFSET(0x1C6BB090)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_3_OFFSET UNITYSDK_OFFSET(0x1C6C5A50)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_4_OFFSET UNITYSDK_OFFSET(0x1C6B3AA0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_5_OFFSET UNITYSDK_OFFSET(0x1C6C5760)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_6_OFFSET UNITYSDK_OFFSET(0x1C6CF360)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_7_OFFSET UNITYSDK_OFFSET(0x1C6E21E0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_8_OFFSET UNITYSDK_OFFSET(0x1C6E25B0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_9_OFFSET UNITYSDK_OFFSET(0x1C6C52F0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_OFFSET UNITYSDK_OFFSET(0x1C6B34E0)
#define RPG_CUSTOMRP_RPUTILITY_BLIT_OFFSET UNITYSDK_OFFSET(0x1C6E1A90)
#define RPG_CUSTOMRP_RPUTILITY_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x1C6E4BF0)
#define RPG_CUSTOMRP_RPUTILITY_COMPUTEHASH32_OFFSET UNITYSDK_OFFSET(0x1C6E0940)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_1_OFFSET UNITYSDK_OFFSET(0x1C6E36A0)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_2_OFFSET UNITYSDK_OFFSET(0x1C6E37E0)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_3_OFFSET UNITYSDK_OFFSET(0x1C6E3950)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_OFFSET UNITYSDK_OFFSET(0x1C6E3540)
#define RPG_CUSTOMRP_RPUTILITY_CREATERT_1_OFFSET UNITYSDK_OFFSET(0x1C6E1490)
#define RPG_CUSTOMRP_RPUTILITY_CREATERT_OFFSET UNITYSDK_OFFSET(0x1C6B3920)
#define RPG_CUSTOMRP_RPUTILITY_DEBUGOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1C6E0430)
#define RPG_CUSTOMRP_RPUTILITY_DESTROYMAT_OFFSET UNITYSDK_OFFSET(0x1C6E02B0)
#define RPG_CUSTOMRP_RPUTILITY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C6ADD20)
#define RPG_CUSTOMRP_RPUTILITY_DRAWDUMMYDEPTH_OFFSET UNITYSDK_OFFSET(0x1C6DFDE0)
#define RPG_CUSTOMRP_RPUTILITY_DRAWRT_OFFSET UNITYSDK_OFFSET(0x1C6E3B50)
#define RPG_CUSTOMRP_RPUTILITY_ENABLEPREROTATION_OFFSET UNITYSDK_OFFSET(0x1C6E1F10)
#define RPG_CUSTOMRP_RPUTILITY_ENDDRAWRT_OFFSET UNITYSDK_OFFSET(0x1C6E3DD0)
#define RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_1_OFFSET UNITYSDK_OFFSET(0x1C6E34A0)
#define RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_OFFSET UNITYSDK_OFFSET(0x1C6E1E80)
#define RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_1_OFFSET UNITYSDK_OFFSET(0x1C6E0710)
#define RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_OFFSET UNITYSDK_OFFSET(0x1C6E05D0)
#define RPG_CUSTOMRP_RPUTILITY_GETADDITIONALCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1C6E0DA0)
#define RPG_CUSTOMRP_RPUTILITY_GETALLASSEMBLYTYPES_OFFSET UNITYSDK_OFFSET(0x1C6E4680)
#define RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1C6E4B00)
#define RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1C6E4A10)
#define RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_OFFSET UNITYSDK_OFFSET(0x1C6E4920)
#define RPG_CUSTOMRP_RPUTILITY_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x1C6E0440)
#define RPG_CUSTOMRP_RPUTILITY_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1C6E0E40)
#define RPG_CUSTOMRP_RPUTILITY_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1C6E0EC0)
#define RPG_CUSTOMRP_RPUTILITY_GETOBJID_OFFSET UNITYSDK_OFFSET(0x1C6E0860)
#define RPG_CUSTOMRP_RPUTILITY_GETPASSENABLEEX_OFFSET UNITYSDK_OFFSET(0x1C6E08F0)
#define RPG_CUSTOMRP_RPUTILITY_GETPASSTAG_OFFSET UNITYSDK_OFFSET(0x1C6E08A0)
#define RPG_CUSTOMRP_RPUTILITY_GETPATHDIR_OFFSET UNITYSDK_OFFSET(0x1C6E0560)
#define RPG_CUSTOMRP_RPUTILITY_GETPATHWITHOUTEXT_OFFSET UNITYSDK_OFFSET(0x1C6E0510)
#define RPG_CUSTOMRP_RPUTILITY_GETSUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6E0300)
#define RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_1_OFFSET UNITYSDK_OFFSET(0x1C6E13D0)
#define RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1C6B3480)
#define RPG_CUSTOMRP_RPUTILITY_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6E0E70)
#define RPG_CUSTOMRP_RPUTILITY_GET_DEBUGMAT_OFFSET UNITYSDK_OFFSET(0x1C6DFD70)
#define RPG_CUSTOMRP_RPUTILITY_GET_FULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0x1C6BCF70)
#define RPG_CUSTOMRP_RPUTILITY_GET_FULLSCREENQUAD_OFFSET UNITYSDK_OFFSET(0x1C6D2130)
#define RPG_CUSTOMRP_RPUTILITY_GET_HALFSPHEREMESH_OFFSET UNITYSDK_OFFSET(0x1C6DFC80)
#define RPG_CUSTOMRP_RPUTILITY_GET_IDENTITYQUAD_OFFSET UNITYSDK_OFFSET(0x1C6DF4F0)
#define RPG_CUSTOMRP_RPUTILITY_GET_ISGAMEREALRUNNING_OFFSET UNITYSDK_OFFSET(0x1C6DF250)
#define RPG_CUSTOMRP_RPUTILITY_GET_POINTLIGHTMESH_OFFSET UNITYSDK_OFFSET(0x1C6DFAA0)
#define RPG_CUSTOMRP_RPUTILITY_GET_SPOTLIGHTMESH_OFFSET UNITYSDK_OFFSET(0x1C6DFB90)
#define RPG_CUSTOMRP_RPUTILITY_GET_UNITCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C6A7DC0)
#define RPG_CUSTOMRP_RPUTILITY_GET_UNITCUBE_OFFSET UNITYSDK_OFFSET(0x1C6A6F10)
#define RPG_CUSTOMRP_RPUTILITY_GET_UNITSPHERE_OFFSET UNITYSDK_OFFSET(0x1C6A7CD0)
#define RPG_CUSTOMRP_RPUTILITY_INIT_OFFSET UNITYSDK_OFFSET(0x1C6E1850)
#define RPG_CUSTOMRP_RPUTILITY_ISBLACKCOLOR_OFFSET UNITYSDK_OFFSET(0x1C6E02E0)
#define RPG_CUSTOMRP_RPUTILITY_RELEASEASSETDEL_OFFSET UNITYSDK_OFFSET(0x1C6DF450)
#define RPG_CUSTOMRP_RPUTILITY_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1C6B23E0)
#define RPG_CUSTOMRP_RPUTILITY_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1C6B3D90)
#define RPG_CUSTOMRP_RPUTILITY_RESET_OFFSET UNITYSDK_OFFSET(0x1C6DF330)
#define RPG_CUSTOMRP_RPUTILITY_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x1C6E0930)
#define RPG_CUSTOMRP_RPUTILITY_SAVETEX_1_OFFSET UNITYSDK_OFFSET(0x1C6E42D0)
#define RPG_CUSTOMRP_RPUTILITY_SAVETEX_OFFSET UNITYSDK_OFFSET(0x1C6E3EF0)
#define RPG_CUSTOMRP_RPUTILITY_SETPASSENABLEEX_OFFSET UNITYSDK_OFFSET(0x1C6E08B0)
#define RPG_CUSTOMRP_RPUTILITY_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1C6E1930)
#define RPG_CUSTOMRP_RPUTILITY_SETRT_1_OFFSET UNITYSDK_OFFSET(0x1C6E2170)
#define RPG_CUSTOMRP_RPUTILITY_SETRT_2_OFFSET UNITYSDK_OFFSET(0x1C6BCDF0)
#define RPG_CUSTOMRP_RPUTILITY_SETRT_OFFSET UNITYSDK_OFFSET(0x1C6E1F70)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1C6B39C0)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1C6E1510)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1C6E1590)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_4_OFFSET UNITYSDK_OFFSET(0x1C6E15F0)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_5_OFFSET UNITYSDK_OFFSET(0x1C6E1680)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_6_OFFSET UNITYSDK_OFFSET(0x1C6E1710)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C6B7A00)
#define RPG_CUSTOMRP_RPUTILITY_SETUPMAT_OFFSET UNITYSDK_OFFSET(0x1C6DF290)
#define RPG_CUSTOMRP_RPUTILITY_SET_DEBUGMAT_OFFSET UNITYSDK_OFFSET(0x1C6DFDA0)
#define RPG_CUSTOMRP_RPUTILITY_SUPPORTSGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1C6E0F50)
#define RPG_CUSTOMRP_RPUTILITY_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1C6E1270)
#define RPG_CUSTOMRP_RPUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6E4CD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPUtility_TypeDefinitionIndex = 37206;

	class RPUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::CommandBuffer** StaticGet_drawCB()
		{
			return (::UnityEngine::Rendering::CommandBuffer**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D720);
		}
		static ::UnityEngine::Material** StaticGet_s_DebugMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D728);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__LINEAR_TO_SRGB_CONVERSION()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D730);
		}
		static ::UnityEngine::Mesh** StaticGet_s_FullscreenMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D738);
		}
		static ::UnityEngine::Mesh** StaticGet_s_Capsule()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D740);
		}
		static ::UnityEngine::Mesh** StaticGet__HalfSphereMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D748);
		}
		static ::System::String** StaticGet__SpotLightMeshDelegatePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D750);
		}
		static ::UnityEngine::Mesh** StaticGet_s_FullscreenQuad()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D758);
		}
		static ::RPG::CustomRP::ReleaseAssetDel** StaticGet_releaseFun()
		{
			return (::RPG::CustomRP::ReleaseAssetDel**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D760);
		}
		static ::UnityEngine::Mesh** StaticGet__SpotLightMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D768);
		}
		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>** StaticGet__AssemblyTypes()
		{
			return (::System::Collections::Generic::IEnumerable_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D770);
		}
		static ::UnityEngine::Mesh** StaticGet_s_IdentityQuad()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D778);
		}
		static ::System::String** StaticGet__PointLightMeshDelegatePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D780);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet__BiltMpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D788);
		}
		static ::UnityEngine::Mesh** StaticGet_s_UnitSphere()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D790);
		}
		static ::UnityEngine::Material** StaticGet__BiltMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D798);
		}
		static ::UnityEngine::Mesh** StaticGet__PointLightMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D7A0);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_ClearColors()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D7A8);
		}
		static ::RPG::CustomRP::SyncLoadAssetDel** StaticGet_loadFun()
		{
			return (::RPG::CustomRP::SyncLoadAssetDel**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D7B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::System::Boolean>** StaticGet__RenderTextureFormatSupport()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D7B8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet__hashBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D7C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::FormatUsage, ::System::Boolean>*>** StaticGet__GraphicsFormatSupport()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::FormatUsage, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D7C8);
		}
		static ::UnityEngine::Mesh** StaticGet_s_UnitCube()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x1D7D0);
		}
		static ::System::Single* StaticGet_MaxAspectRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FA0);
		}
		static ::System::Single* StaticGet_MinAspectRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FA4);
		}
		static ::System::Boolean* StaticGet_IsGameRunning()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FA8);
		}
		static ::System::Boolean* StaticGet_useViewSpaceNormal()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FA9);
		}
		static ::System::Boolean* StaticGet_useGbufferColorCompress()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FAA);
		}
		static ::UnityEngine::Vector2Int* StaticGet_UIScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FAC);
		}
		static ::UnityEngine::Vector2Int* StaticGet_SceneScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FB4);
		}
		static ::System::Boolean* StaticGet_ReleaseSimulate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FBC);
		}
		static ::System::Boolean* StaticGet_useGbufferNormalCompress()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x9FBD);
		}
		// static const ::System::Single EPSILON; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsGameRealRunning()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_ISGAMEREALRUNNING_OFFSET))();
		}

		static ::System::Void SetupMat(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETUPMAT_OFFSET))(a1);
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RESET_OFFSET))();
		}

		static ::System::Void ReleaseAssetDel(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RELEASEASSETDEL_OFFSET))(a1);
		}

		static ::UnityEngine::Mesh* get_fullscreenMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_FULLSCREENMESH_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_fullscreenQuad()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_FULLSCREENQUAD_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_identityQuad()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_IDENTITYQUAD_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_unitCube()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_UNITCUBE_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_UnitSphere()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_UNITSPHERE_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_UnitCapsule()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_UNITCAPSULE_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_pointLightMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_POINTLIGHTMESH_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_spotLightMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_SPOTLIGHTMESH_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_halfSphereMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_HALFSPHEREMESH_OFFSET))();
		}

		static ::UnityEngine::Material* get_DebugMat()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GET_DEBUGMAT_OFFSET))();
		}

		static ::System::Void set_DebugMat(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SET_DEBUGMAT_OFFSET))(a1);
		}

		static ::System::Void DrawDummyDepth(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DRAWDUMMYDEPTH_OFFSET))(a1);
		}

		static ::System::Void DestroyMat(::UnityEngine::Material*& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DESTROYMAT_OFFSET))(a1);
		}

		static ::System::Void Destroy(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DESTROY_OFFSET))(a1);
		}

		static ::System::Boolean IsBlackColor(::UnityEngine::Color& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ISBLACKCOLOR_OFFSET))(a1);
		}

		static ::System::Int32 GetSubmeshCount(::UnityEngine::Renderer* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETSUBMESHCOUNT_OFFSET))(a1);
		}

		static ::System::Void DebugObjectName(::UnityEngine::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DEBUGOBJECTNAME_OFFSET))(a1, a2);
		}

		static ::System::String* GetFileName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETFILENAME_OFFSET))(a1, a2);
		}

		static ::System::String* GetPathWithoutExt(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPATHWITHOUTEXT_OFFSET))(a1);
		}

		static ::System::String* GetPathDir(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPATHDIR_OFFSET))(a1, a2);
		}

		static ::System::String* FormatBytes(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_OFFSET))(a1);
		}

		static ::System::String* FormatBytes_1(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_1_OFFSET))(a1);
		}

		static ::System::Int32 GetObjID(::UnityEngine::Object* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETOBJID_OFFSET))(a1);
		}

		static ::UnityEngine::PassTagID GetPassTag(::System::String* a1)
		{
			return ((::UnityEngine::PassTagID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPASSTAG_OFFSET))(a1);
		}

		static ::System::Void SetPassEnableEX(::UnityEngine::Material* a1, ::UnityEngine::PassTagID& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::PassTagID&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETPASSENABLEEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetPassEnableEX(::UnityEngine::Material* a1, ::UnityEngine::PassTagID& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::UnityEngine::PassTagID&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPASSENABLEEX_OFFSET))(a1, a2);
		}

		static ::System::UInt32 RotateLeft(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ROTATELEFT_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ComputeHash32(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COMPUTEHASH32_OFFSET))(a1, a2);
		}

		static ::RPG::CustomRP::CustomAdditionalCameraData* GetAdditionalCameraData(::UnityEngine::Camera* a1)
		{
			return ((::RPG::CustomRP::CustomAdditionalCameraData*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETADDITIONALCAMERADATA_OFFSET))(a1);
		}

		static ::System::Single GetFloat(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Renderer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 GetVector(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Renderer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETVECTOR_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Renderer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETMATRIX_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SupportsGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat a1, ::UnityEngine::Experimental::Rendering::FormatUsage a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SUPPORTSGRAPHICSFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Boolean SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SUPPORTSRENDERTEXTUREFORMAT_OFFSET))(a1);
		}

		static ::System::Void GetTemporaryRT(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::UnityEngine::RenderTextureDescriptor& a3, ::UnityEngine::FilterMode a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetTemporaryRT_1(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::RenderTextureFormat a5, ::UnityEngine::FilterMode a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::FilterMode, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ReleaseTemporaryRT(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RELEASETEMPORARYRT_OFFSET))(a1, a2);
		}

		static ::System::Void CreateRT(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::UnityEngine::RenderTextureDescriptor& a3, ::UnityEngine::FilterMode a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_CREATERT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CreateRT_1(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::UnityEngine::RenderTextureDescriptor& a3, ::UnityEngine::FilterMode a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_CREATERT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReleaseRT(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RELEASERT_OFFSET))(a1, a2);
		}

		static ::System::Void SetTexture(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::RPG::CustomRP::RTIDHandle& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::RPG::CustomRP::RTIDHandle&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetTexture_1(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int16 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetTexture_2(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int16 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetTexture_3(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::RPG::CustomRP::PassRTRes* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::RPG::CustomRP::PassRTRes*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetTexture_4(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetTexture_5(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::UnityEngine::Rendering::RenderTargetIdentifier& a3, ::System::Int16 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetTexture_6(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Init(::UnityEngine::RenderTextureDescriptor& a1, ::UnityEngine::RenderTextureFormat a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::RenderTextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_INIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Rendering::RenderTargetIdentifier& a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5, ::UnityEngine::Rendering::RenderBufferLoadAction a6, ::UnityEngine::Rendering::RenderBufferStoreAction a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRENDERTARGET_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void BlitMRT(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::MRTBinding& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::MaterialPropertyBlock* a5, ::Il2CppArray<::System::String*>* a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::MRTBinding&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITMRT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Blit(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLIT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetRT(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5, ::UnityEngine::Rendering::RenderBufferLoadAction a6, ::UnityEngine::Rendering::RenderBufferStoreAction a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetRT_1(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRT_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetRT_2(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRT_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BlitRT(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::MaterialPropertyBlock* a5, ::Il2CppArray<::System::String*>* a6, ::UnityEngine::Rendering::ClearFlag a7, ::UnityEngine::Rendering::ClearColor a8, ::UnityEngine::Rendering::RenderBufferLoadAction a9, ::UnityEngine::Rendering::RenderBufferStoreAction a10, ::UnityEngine::Rendering::RenderBufferLoadAction a11, ::UnityEngine::Rendering::RenderBufferStoreAction a12)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void BlitRT_1(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::RPG::CustomRP::RTIDHandle& a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7, ::UnityEngine::Rendering::ClearFlag a8, ::UnityEngine::Rendering::ClearColor a9, ::UnityEngine::Rendering::RenderBufferLoadAction a10, ::UnityEngine::Rendering::RenderBufferStoreAction a11, ::UnityEngine::Rendering::RenderBufferLoadAction a12, ::UnityEngine::Rendering::RenderBufferStoreAction a13)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void BlitRT_2(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::RPG::CustomRP::RTIDHandle& a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7, ::UnityEngine::Rendering::ClearFlag a8, ::UnityEngine::Rendering::ClearColor a9, ::UnityEngine::Rendering::RenderBufferLoadAction a10, ::UnityEngine::Rendering::RenderBufferStoreAction a11, ::UnityEngine::Rendering::RenderBufferLoadAction a12, ::UnityEngine::Rendering::RenderBufferStoreAction a13)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void BlitRT_3(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7, ::UnityEngine::Rendering::ClearFlag a8, ::UnityEngine::Rendering::ClearColor a9, ::UnityEngine::Rendering::RenderBufferLoadAction a10, ::UnityEngine::Rendering::RenderBufferStoreAction a11, ::UnityEngine::Rendering::RenderBufferLoadAction a12, ::UnityEngine::Rendering::RenderBufferStoreAction a13)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void BlitRT_4(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::MaterialPropertyBlock* a5, ::Il2CppArray<::System::String*>* a6, ::UnityEngine::Rendering::ClearFlag a7, ::UnityEngine::Rendering::ClearColor a8, ::UnityEngine::Rendering::RenderBufferLoadAction a9, ::UnityEngine::Rendering::RenderBufferStoreAction a10, ::UnityEngine::Rendering::RenderBufferLoadAction a11, ::UnityEngine::Rendering::RenderBufferStoreAction a12)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void BlitRT_5(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7, ::UnityEngine::Rendering::ClearFlag a8, ::UnityEngine::Rendering::ClearColor a9, ::UnityEngine::Rendering::RenderBufferLoadAction a10, ::UnityEngine::Rendering::RenderBufferStoreAction a11, ::UnityEngine::Rendering::RenderBufferLoadAction a12, ::UnityEngine::Rendering::RenderBufferStoreAction a13)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void BlitRT_6(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_6_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void BlitRT_7(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_7_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void BlitRT_8(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void BlitRT_9(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RTIDHandle& a2, ::RPG::CustomRP::RTIDHandle& a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::RPG::CustomRP::RTIDHandle&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_9_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void BlitRT_10(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::UnityEngine::RenderTexture* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_10_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BlitRT_11(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_11_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FlipDraw(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_OFFSET))(a1, a2);
		}

		static ::System::Boolean FlipDraw_1(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_1_OFFSET))(a1, a2);
		}

		static ::System::Void EnablePreRotation(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ENABLEPREROTATION_OFFSET))(a1, a2);
		}

		static ::System::Void CopyTex(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CopyTex_1(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CopyTex_2(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void CopyTex_3(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void BeginDrawRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BEGINDRAWRT_OFFSET))();
		}

		static ::System::Void DrawRT(::UnityEngine::RenderTexture* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DRAWRT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndDrawRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ENDDRAWRT_OFFSET))();
		}

		static ::System::Void SaveTex(::Unity::Collections::NativeArray_1<::System::Byte>& a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::CustomRP::TexType a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::Int32, ::System::Int32, ::RPG::CustomRP::TexType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SAVETEX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SaveTex_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::CustomRP::TexType a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::RPG::CustomRP::TexType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SAVETEX_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETALLASSEMBLYTYPES_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAssemblyType(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_OFFSET))(a1, a2);
		}

		static ::System::Type* GetAssemblyType_1(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_1_OFFSET))(a1);
		}

		static ::System::Type* GetAssemblyTypeFullName(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPEFULLNAME_OFFSET))(a1);
		}

		static ::System::Object* CallFunction(::System::Type* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Object* a6, ::Il2CppArray<::System::Object*>* a7)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_CALLFUNCTION_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
