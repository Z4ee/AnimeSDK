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

#define RPG_CUSTOMRP_RPUTILITY_BEGINDRAWRT_OFFSET UNITYSDK_OFFSET(0x18174300)
#define RPG_CUSTOMRP_RPUTILITY_BLITMRT_OFFSET UNITYSDK_OFFSET(0x18159810)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_10_OFFSET UNITYSDK_OFFSET(0x18173260)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_11_OFFSET UNITYSDK_OFFSET(0x18173780)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_1_OFFSET UNITYSDK_OFFSET(0x18147010)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_2_OFFSET UNITYSDK_OFFSET(0x1814EB00)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_3_OFFSET UNITYSDK_OFFSET(0x181596D0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_4_OFFSET UNITYSDK_OFFSET(0x181472D0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_5_OFFSET UNITYSDK_OFFSET(0x181593E0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_6_OFFSET UNITYSDK_OFFSET(0x181609B0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_7_OFFSET UNITYSDK_OFFSET(0x181729E0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_8_OFFSET UNITYSDK_OFFSET(0x18172DB0)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_9_OFFSET UNITYSDK_OFFSET(0x18158F70)
#define RPG_CUSTOMRP_RPUTILITY_BLITRT_OFFSET UNITYSDK_OFFSET(0x18146D10)
#define RPG_CUSTOMRP_RPUTILITY_BLIT_OFFSET UNITYSDK_OFFSET(0x18172290)
#define RPG_CUSTOMRP_RPUTILITY_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x181752B0)
#define RPG_CUSTOMRP_RPUTILITY_COMPUTEHASH32_OFFSET UNITYSDK_OFFSET(0x181710E0)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_1_OFFSET UNITYSDK_OFFSET(0x18173ED0)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_2_OFFSET UNITYSDK_OFFSET(0x18174010)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_3_OFFSET UNITYSDK_OFFSET(0x18174180)
#define RPG_CUSTOMRP_RPUTILITY_COPYTEX_OFFSET UNITYSDK_OFFSET(0x18173D70)
#define RPG_CUSTOMRP_RPUTILITY_CREATERT_1_OFFSET UNITYSDK_OFFSET(0x18171C90)
#define RPG_CUSTOMRP_RPUTILITY_CREATERT_OFFSET UNITYSDK_OFFSET(0x18147150)
#define RPG_CUSTOMRP_RPUTILITY_DEBUGOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x18170BD0)
#define RPG_CUSTOMRP_RPUTILITY_DESTROYMAT_OFFSET UNITYSDK_OFFSET(0x18170A50)
#define RPG_CUSTOMRP_RPUTILITY_DESTROY_OFFSET UNITYSDK_OFFSET(0x181415E0)
#define RPG_CUSTOMRP_RPUTILITY_DRAWDUMMYDEPTH_OFFSET UNITYSDK_OFFSET(0x181705A0)
#define RPG_CUSTOMRP_RPUTILITY_DRAWRT_OFFSET UNITYSDK_OFFSET(0x18174380)
#define RPG_CUSTOMRP_RPUTILITY_ENABLEPREROTATION_OFFSET UNITYSDK_OFFSET(0x18172710)
#define RPG_CUSTOMRP_RPUTILITY_ENDDRAWRT_OFFSET UNITYSDK_OFFSET(0x18174600)
#define RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_1_OFFSET UNITYSDK_OFFSET(0x18173CD0)
#define RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_OFFSET UNITYSDK_OFFSET(0x18172680)
#define RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_1_OFFSET UNITYSDK_OFFSET(0x18170EB0)
#define RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_OFFSET UNITYSDK_OFFSET(0x18170D70)
#define RPG_CUSTOMRP_RPUTILITY_GETADDITIONALCAMERADATA_OFFSET UNITYSDK_OFFSET(0x18171560)
#define RPG_CUSTOMRP_RPUTILITY_GETALLASSEMBLYTYPES_OFFSET UNITYSDK_OFFSET(0x18174DF0)
#define RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x181751F0)
#define RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_1_OFFSET UNITYSDK_OFFSET(0x18175130)
#define RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_OFFSET UNITYSDK_OFFSET(0x18175060)
#define RPG_CUSTOMRP_RPUTILITY_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x18170BE0)
#define RPG_CUSTOMRP_RPUTILITY_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x18171600)
#define RPG_CUSTOMRP_RPUTILITY_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x18171680)
#define RPG_CUSTOMRP_RPUTILITY_GETOBJID_OFFSET UNITYSDK_OFFSET(0x18171000)
#define RPG_CUSTOMRP_RPUTILITY_GETPASSENABLEEX_OFFSET UNITYSDK_OFFSET(0x18171090)
#define RPG_CUSTOMRP_RPUTILITY_GETPASSTAG_OFFSET UNITYSDK_OFFSET(0x18171040)
#define RPG_CUSTOMRP_RPUTILITY_GETPATHDIR_OFFSET UNITYSDK_OFFSET(0x18170D00)
#define RPG_CUSTOMRP_RPUTILITY_GETPATHWITHOUTEXT_OFFSET UNITYSDK_OFFSET(0x18170CB0)
#define RPG_CUSTOMRP_RPUTILITY_GETSUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x18170AA0)
#define RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_1_OFFSET UNITYSDK_OFFSET(0x18171BD0)
#define RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x18146CB0)
#define RPG_CUSTOMRP_RPUTILITY_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x18171630)
#define RPG_CUSTOMRP_RPUTILITY_GET_DEBUGMAT_OFFSET UNITYSDK_OFFSET(0x18170530)
#define RPG_CUSTOMRP_RPUTILITY_GET_FULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0x18150A80)
#define RPG_CUSTOMRP_RPUTILITY_GET_FULLSCREENQUAD_OFFSET UNITYSDK_OFFSET(0x18163380)
#define RPG_CUSTOMRP_RPUTILITY_GET_HALFSPHEREMESH_OFFSET UNITYSDK_OFFSET(0x18170440)
#define RPG_CUSTOMRP_RPUTILITY_GET_IDENTITYQUAD_OFFSET UNITYSDK_OFFSET(0x1816FE60)
#define RPG_CUSTOMRP_RPUTILITY_GET_ISGAMEREALRUNNING_OFFSET UNITYSDK_OFFSET(0x1816F660)
#define RPG_CUSTOMRP_RPUTILITY_GET_POINTLIGHTMESH_OFFSET UNITYSDK_OFFSET(0x18170260)
#define RPG_CUSTOMRP_RPUTILITY_GET_SPOTLIGHTMESH_OFFSET UNITYSDK_OFFSET(0x18170350)
#define RPG_CUSTOMRP_RPUTILITY_GET_UNITCAPSULE_OFFSET UNITYSDK_OFFSET(0x1813B710)
#define RPG_CUSTOMRP_RPUTILITY_GET_UNITCUBE_OFFSET UNITYSDK_OFFSET(0x1813A3C0)
#define RPG_CUSTOMRP_RPUTILITY_GET_UNITSPHERE_OFFSET UNITYSDK_OFFSET(0x1813B620)
#define RPG_CUSTOMRP_RPUTILITY_INIT_OFFSET UNITYSDK_OFFSET(0x18172050)
#define RPG_CUSTOMRP_RPUTILITY_ISBLACKCOLOR_OFFSET UNITYSDK_OFFSET(0x18170A80)
#define RPG_CUSTOMRP_RPUTILITY_RELEASEASSETDEL_OFFSET UNITYSDK_OFFSET(0x1816F880)
#define RPG_CUSTOMRP_RPUTILITY_RELEASERT_OFFSET UNITYSDK_OFFSET(0x18145CE0)
#define RPG_CUSTOMRP_RPUTILITY_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x181475D0)
#define RPG_CUSTOMRP_RPUTILITY_RESET_OFFSET UNITYSDK_OFFSET(0x1816F750)
#define RPG_CUSTOMRP_RPUTILITY_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x181710D0)
#define RPG_CUSTOMRP_RPUTILITY_SAVETEX_1_OFFSET UNITYSDK_OFFSET(0x18174A60)
#define RPG_CUSTOMRP_RPUTILITY_SAVETEX_OFFSET UNITYSDK_OFFSET(0x181746D0)
#define RPG_CUSTOMRP_RPUTILITY_SETPASSENABLEEX_OFFSET UNITYSDK_OFFSET(0x18171050)
#define RPG_CUSTOMRP_RPUTILITY_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x18172130)
#define RPG_CUSTOMRP_RPUTILITY_SETRT_1_OFFSET UNITYSDK_OFFSET(0x18172970)
#define RPG_CUSTOMRP_RPUTILITY_SETRT_2_OFFSET UNITYSDK_OFFSET(0x18150900)
#define RPG_CUSTOMRP_RPUTILITY_SETRT_OFFSET UNITYSDK_OFFSET(0x18172770)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x181471F0)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x18171D10)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x18171D90)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_4_OFFSET UNITYSDK_OFFSET(0x18171DF0)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_5_OFFSET UNITYSDK_OFFSET(0x18171E80)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_6_OFFSET UNITYSDK_OFFSET(0x18171F10)
#define RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1814B360)
#define RPG_CUSTOMRP_RPUTILITY_SETUPMAT_OFFSET UNITYSDK_OFFSET(0x1816F6A0)
#define RPG_CUSTOMRP_RPUTILITY_SET_DEBUGMAT_OFFSET UNITYSDK_OFFSET(0x18170560)
#define RPG_CUSTOMRP_RPUTILITY_SUPPORTSGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x18171710)
#define RPG_CUSTOMRP_RPUTILITY_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x18171A60)
#define RPG_CUSTOMRP_RPUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x181753C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPUtility_TypeDefinitionIndex = 35265;

	class RPUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet__BiltMpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F50);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__LINEAR_TO_SRGB_CONVERSION()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F58);
		}
		static ::UnityEngine::Material** StaticGet__BiltMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F60);
		}
		static ::UnityEngine::Mesh** StaticGet_s_Capsule()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F68);
		}
		static ::UnityEngine::Mesh** StaticGet__PointLightMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F70);
		}
		static ::System::String** StaticGet__SpotLightMeshDelegatePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F78);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet__hashBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F80);
		}
		static ::UnityEngine::Mesh** StaticGet_s_UnitCube()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F88);
		}
		static ::UnityEngine::Mesh** StaticGet_s_FullscreenQuad()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F90);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::System::Boolean>** StaticGet__RenderTextureFormatSupport()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6F98);
		}
		static ::UnityEngine::Mesh** StaticGet_s_FullscreenMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::UnityEngine::Material** StaticGet_s_DebugMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FA8);
		}
		static ::RPG::CustomRP::SyncLoadAssetDel** StaticGet_loadFun()
		{
			return (::RPG::CustomRP::SyncLoadAssetDel**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}
		static ::UnityEngine::Mesh** StaticGet_s_IdentityQuad()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FB8);
		}
		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>** StaticGet__AssemblyTypes()
		{
			return (::System::Collections::Generic::IEnumerable_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FC0);
		}
		static ::UnityEngine::Mesh** StaticGet_s_UnitSphere()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FC8);
		}
		static ::UnityEngine::Rendering::CommandBuffer** StaticGet_drawCB()
		{
			return (::UnityEngine::Rendering::CommandBuffer**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FD0);
		}
		static ::UnityEngine::Mesh** StaticGet__SpotLightMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FD8);
		}
		static ::RPG::CustomRP::ReleaseAssetDel** StaticGet_releaseFun()
		{
			return (::RPG::CustomRP::ReleaseAssetDel**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FE0);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_ClearColors()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::FormatUsage, ::System::Boolean>*>** StaticGet__GraphicsFormatSupport()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::FormatUsage, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FF0);
		}
		static ::UnityEngine::Mesh** StaticGet__HalfSphereMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x6FF8);
		}
		static ::System::String** StaticGet__PointLightMeshDelegatePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x7000);
		}
		static ::System::Single* StaticGet_MinAspectRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x3310);
		}
		static ::UnityEngine::Vector2Int* StaticGet_UIScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x3314);
		}
		static ::System::Single* StaticGet_MaxAspectRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x331C);
		}
		static ::System::Boolean* StaticGet_useGbufferNormalCompress()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x3320);
		}
		static ::System::Boolean* StaticGet_ReleaseSimulate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x3321);
		}
		static ::System::Boolean* StaticGet_IsGameRunning()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x3322);
		}
		static ::UnityEngine::Vector2Int* StaticGet_SceneScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x3324);
		}
		static ::System::Boolean* StaticGet_useViewSpaceNormal()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x332C);
		}
		static ::System::Boolean* StaticGet_useGbufferColorCompress()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPUtility_TypeDefinitionIndex)->GetStaticField(0x332D);
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

		static ::System::Void SetupMat(::RPG::CustomRP::CRPRendererData* renderData)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETUPMAT_OFFSET))(renderData);
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RESET_OFFSET))();
		}

		static ::System::Void ReleaseAssetDel(::UnityEngine::Object* assetObject)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RELEASEASSETDEL_OFFSET))(assetObject);
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

		static ::System::Void set_DebugMat(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SET_DEBUGMAT_OFFSET))(value);
		}

		static ::System::Void DrawDummyDepth(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DRAWDUMMYDEPTH_OFFSET))(cmd);
		}

		static ::System::Void DestroyMat(::UnityEngine::Material*& mat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DESTROYMAT_OFFSET))(mat);
		}

		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DESTROY_OFFSET))(obj);
		}

		static ::System::Boolean IsBlackColor(::UnityEngine::Color& color)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ISBLACKCOLOR_OFFSET))(color);
		}

		static ::System::Int32 GetSubmeshCount(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETSUBMESHCOUNT_OFFSET))(renderer);
		}

		static ::System::Void DebugObjectName(::UnityEngine::Object* obj, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DEBUGOBJECTNAME_OFFSET))(obj, name);
		}

		static ::System::String* GetFileName(::System::String* path, ::System::Boolean withExt)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETFILENAME_OFFSET))(path, withExt);
		}

		static ::System::String* GetPathWithoutExt(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPATHWITHOUTEXT_OFFSET))(path);
		}

		static ::System::String* GetPathDir(::System::String* path, ::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPATHDIR_OFFSET))(path, relativePath);
		}

		static ::System::String* FormatBytes(::System::Int32 b)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_OFFSET))(b);
		}

		static ::System::String* FormatBytes_1(::System::Int64 b)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FORMATBYTES_1_OFFSET))(b);
		}

		static ::System::Int32 GetObjID(::UnityEngine::Object* obj)
		{
			return ((::System::Int32(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETOBJID_OFFSET))(obj);
		}

		static ::UnityEngine::PassTagID GetPassTag(::System::String* name)
		{
			return ((::UnityEngine::PassTagID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPASSTAG_OFFSET))(name);
		}

		static ::System::Void SetPassEnableEX(::UnityEngine::Material* mat, ::UnityEngine::PassTagID& passTag, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::PassTagID&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETPASSENABLEEX_OFFSET))(mat, passTag, enable);
		}

		static ::System::Boolean GetPassEnableEX(::UnityEngine::Material* mat, ::UnityEngine::PassTagID& passTag)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::UnityEngine::PassTagID&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETPASSENABLEEX_OFFSET))(mat, passTag);
		}

		static ::System::UInt32 RotateLeft(::System::UInt32 value, ::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ROTATELEFT_OFFSET))(value, offset);
		}

		static ::System::UInt32 ComputeHash32(::System::String* s, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COMPUTEHASH32_OFFSET))(s, seed);
		}

		static ::RPG::CustomRP::CustomAdditionalCameraData* GetAdditionalCameraData(::UnityEngine::Camera* camera)
		{
			return ((::RPG::CustomRP::CustomAdditionalCameraData*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETADDITIONALCAMERADATA_OFFSET))(camera);
		}

		static ::System::Single GetFloat(::UnityEngine::Renderer* r, ::System::Int32 nameID, ::System::Int32 index)
		{
			return ((::System::Single(*)(::UnityEngine::Renderer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETFLOAT_OFFSET))(r, nameID, index);
		}

		static ::UnityEngine::Vector4 GetVector(::UnityEngine::Renderer* r, ::System::Int32 nameID, ::System::Int32 index)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Renderer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETVECTOR_OFFSET))(r, nameID, index);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix(::UnityEngine::Renderer* r, ::System::Int32 nameID, ::System::Int32 index)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Renderer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETMATRIX_OFFSET))(r, nameID, index);
		}

		static ::System::Boolean SupportsGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SUPPORTSGRAPHICSFORMAT_OFFSET))(format, usage);
		}

		static ::System::Boolean SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SUPPORTSRENDERTEXTUREFORMAT_OFFSET))(format);
		}

		static ::System::Void GetTemporaryRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& rtid, ::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::FilterMode fm)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_OFFSET))(cmd, rtid, desc, fm);
		}

		static ::System::Void GetTemporaryRT_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& rtid, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::FilterMode fm, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::FilterMode, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETTEMPORARYRT_1_OFFSET))(cmd, rtid, width, height, format, fm, depth);
		}

		static ::System::Void ReleaseTemporaryRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& rtid)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RELEASETEMPORARYRT_OFFSET))(cmd, rtid);
		}

		static ::System::Void CreateRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 id, ::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::FilterMode fm)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_CREATERT_OFFSET))(cmd, id, desc, fm);
		}

		static ::System::Void CreateRT_1(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 id, ::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::FilterMode fm)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_CREATERT_1_OFFSET))(cmd, id, desc, fm);
		}

		static ::System::Void ReleaseRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 id)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_RELEASERT_OFFSET))(cmd, id);
		}

		static ::System::Void SetTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 id, ::RPG::CustomRP::RTIDHandle& rt)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::RPG::CustomRP::RTIDHandle&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_OFFSET))(cmd, id, rt);
		}

		static ::System::Void SetTexture_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 id, ::System::Int32 tex, ::System::Int16 slice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_1_OFFSET))(cmd, id, tex, slice);
		}

		static ::System::Void SetTexture_2(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 id, ::System::Int32 tex, ::System::Int16 slice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_2_OFFSET))(cmd, id, tex, slice);
		}

		static ::System::Void SetTexture_3(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 id, ::RPG::CustomRP::PassRTRes* rtRes)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::RPG::CustomRP::PassRTRes*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_3_OFFSET))(cmd, id, rtRes);
		}

		static ::System::Void SetTexture_4(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 id, ::System::Int16 slice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_4_OFFSET))(cmd, id, slice);
		}

		static ::System::Void SetTexture_5(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 id, ::UnityEngine::Rendering::RenderTargetIdentifier& tex, ::System::Int16 slice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_5_OFFSET))(cmd, id, tex, slice);
		}

		static ::System::Void SetTexture_6(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 id, ::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETTEXTURE_6_OFFSET))(cmd, id, tex);
		}

		static ::System::Void Init(::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::RenderTextureFormat format, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::RenderTextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_INIT_OFFSET))(desc, format, depth);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier& color, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRENDERTARGET_OFFSET))(cmd, color, depth, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitMRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::MRTBinding& mrtBinding, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::String*>* keywords)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::MRTBinding&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITMRT_OFFSET))(cmd, mrtBinding, mat, pass, mpb, keywords);
		}

		static ::System::Void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier& des, ::System::Boolean isRenderToRT, ::System::Boolean srgbConvertion, ::System::Boolean setRT)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLIT_OFFSET))(cmd, des, isRenderToRT, srgbConvertion, setRT);
		}

		static ::System::Void SetRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 color, ::System::Int32 depth, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRT_OFFSET))(cmd, color, depth, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void SetRT_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 color, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRT_1_OFFSET))(cmd, color, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void SetRT_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& color, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SETRT_2_OFFSET))(cmd, color, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& des, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::String*>* keywords, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Rendering::ClearColor clearColor, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_OFFSET))(cmd, des, mat, pass, mpb, keywords, clearFlag, clearColor, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitRT_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& src, ::RPG::CustomRP::RTIDHandle& des, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::String*>* keywords, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Rendering::ClearColor clearColor, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_1_OFFSET))(cmd, src, des, mat, pass, mpb, keywords, clearFlag, clearColor, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitRT_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 src, ::RPG::CustomRP::RTIDHandle& des, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::String*>* keywords, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Rendering::ClearColor clearColor, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::RPG::CustomRP::RTIDHandle&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_2_OFFSET))(cmd, src, des, mat, pass, mpb, keywords, clearFlag, clearColor, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitRT_3(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& src, ::System::Int32 des, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::String*>* keywords, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Rendering::ClearColor clearColor, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_3_OFFSET))(cmd, src, des, mat, pass, mpb, keywords, clearFlag, clearColor, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitRT_4(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 des, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::String*>* keywords, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Rendering::ClearColor clearColor, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_4_OFFSET))(cmd, des, mat, pass, mpb, keywords, clearFlag, clearColor, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitRT_5(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 src, ::System::Int32 des, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* mpb, ::Il2CppArray<::System::String*>* keywords, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Rendering::ClearColor clearColor, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearColor, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_5_OFFSET))(cmd, src, des, mat, pass, mpb, keywords, clearFlag, clearColor, cLoad, cStore, dLoad, dStore);
		}

		static ::System::Void BlitRT_6(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 src, ::System::Int32 des, ::System::Boolean isRenderToRT, ::System::Boolean srgbConvertion, ::System::Boolean setRT, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_6_OFFSET))(cmd, src, des, isRenderToRT, srgbConvertion, setRT, pass);
		}

		static ::System::Void BlitRT_7(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 src, ::System::Int32 des, ::System::Boolean isRenderToRT, ::System::Boolean srgbConvertion, ::System::Boolean setRT, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_7_OFFSET))(cmd, src, des, isRenderToRT, srgbConvertion, setRT, pass);
		}

		static ::System::Void BlitRT_8(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& src, ::System::Int32 des, ::System::Boolean isRenderToRT, ::System::Boolean srgbConvertion, ::System::Boolean setRT, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_8_OFFSET))(cmd, src, des, isRenderToRT, srgbConvertion, setRT, pass);
		}

		static ::System::Void BlitRT_9(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RTIDHandle& src, ::RPG::CustomRP::RTIDHandle& des, ::System::Boolean isRenderToRT, ::System::Boolean srgbConvertion, ::System::Boolean setRT, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RTIDHandle&, ::RPG::CustomRP::RTIDHandle&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_9_OFFSET))(cmd, src, des, isRenderToRT, srgbConvertion, setRT, pass);
		}

		static ::System::Void BlitRT_10(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 src, ::UnityEngine::RenderTexture* des, ::System::Boolean srgbConvertion, ::System::Boolean setRT, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_10_OFFSET))(cmd, src, des, srgbConvertion, setRT, pass);
		}

		static ::System::Void BlitRT_11(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* des, ::System::Boolean srgbConvertion, ::System::Boolean setRT, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BLITRT_11_OFFSET))(cmd, src, des, srgbConvertion, setRT, pass);
		}

		static ::System::Void FlipDraw(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Boolean isRenderToRT)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_OFFSET))(mpb, isRenderToRT);
		}

		static ::System::Boolean FlipDraw_1(::UnityEngine::Material* mat, ::System::Boolean isRenderToRT)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_FLIPDRAW_1_OFFSET))(mat, isRenderToRT);
		}

		static ::System::Void EnablePreRotation(::UnityEngine::Material* mat, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ENABLEPREROTATION_OFFSET))(mat, enable);
		}

		static ::System::Void CopyTex(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 src, ::System::Int32 des)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_OFFSET))(cmd, src, des);
		}

		static ::System::Void CopyTex_1(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 src, ::System::Int32 des)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_1_OFFSET))(cmd, src, des);
		}

		static ::System::Void CopyTex_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::System::Int32 des, ::System::Int32 dstElement, ::System::Int32 dstMip)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_2_OFFSET))(cmd, src, srcElement, srcMip, des, dstElement, dstMip);
		}

		static ::System::Void CopyTex_3(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::System::Int32 srcX, ::System::Int32 srcY, ::System::Int32 srcWidth, ::System::Int32 srcHeight, ::System::Int32 des, ::System::Int32 dstElement, ::System::Int32 dstMip, ::System::Int32 dstX, ::System::Int32 dstY)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_COPYTEX_3_OFFSET))(cmd, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, des, dstElement, dstMip, dstX, dstY);
		}

		static ::System::Void BeginDrawRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_BEGINDRAWRT_OFFSET))();
		}

		static ::System::Void DrawRT(::UnityEngine::RenderTexture* rt, ::UnityEngine::Material* mat, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_DRAWRT_OFFSET))(rt, mat, pass);
		}

		static ::System::Void EndDrawRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_ENDDRAWRT_OFFSET))();
		}

		static ::System::Void SaveTex(::Unity::Collections::NativeArray_1<::System::Byte>& data, ::System::Int32 width, ::System::Int32 height, ::RPG::CustomRP::TexType texType, ::System::String* path)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::Int32, ::System::Int32, ::RPG::CustomRP::TexType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SAVETEX_OFFSET))(data, width, height, texType, path);
		}

		static ::System::Void SaveTex_1(::Il2CppArray<::System::Byte>* data, ::System::Int32 width, ::System::Int32 height, ::RPG::CustomRP::TexType texType, ::System::String* path)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::RPG::CustomRP::TexType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_SAVETEX_1_OFFSET))(data, width, height, texType, path);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETALLASSEMBLYTYPES_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAssemblyType(::System::Type* type, ::System::String* interfaceName)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_OFFSET))(type, interfaceName);
		}

		static ::System::Type* GetAssemblyType_1(::System::String* type)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPE_1_OFFSET))(type);
		}

		static ::System::Type* GetAssemblyTypeFullName(::System::String* type)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_GETASSEMBLYTYPEFULLNAME_OFFSET))(type);
		}

		static ::System::Object* CallFunction(::System::Type* type, ::System::String* function, ::System::Boolean isStatic, ::System::Boolean isPrivate, ::System::Boolean isInstance, ::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY_CALLFUNCTION_OFFSET))(type, function, isStatic, isPrivate, isInstance, obj, parameters);
		}
	};
}
