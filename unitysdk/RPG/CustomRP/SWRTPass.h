#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

class SWRTAsset;
namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_SWRTPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC44C50)
#define RPG_CUSTOMRP_SWRTPASS_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1CC43EF0)
#define RPG_CUSTOMRP_SWRTPASS_GET_ATLASALBEDO_OFFSET UNITYSDK_OFFSET(0x1CC44000)
#define RPG_CUSTOMRP_SWRTPASS_GET_ATLASNORMAL_OFFSET UNITYSDK_OFFSET(0x1CC44010)
#define RPG_CUSTOMRP_SWRTPASS_GET_BLASINDEX_OFFSET UNITYSDK_OFFSET(0x1CC43FC0)
#define RPG_CUSTOMRP_SWRTPASS_GET_BLASOFFSETS8_OFFSET UNITYSDK_OFFSET(0x1CC43FA0)
#define RPG_CUSTOMRP_SWRTPASS_GET_BUILDREVISION_OFFSET UNITYSDK_OFFSET(0x1CC43F10)
#define RPG_CUSTOMRP_SWRTPASS_GET_BVHNODES8_OFFSET UNITYSDK_OFFSET(0x1CC43F70)
#define RPG_CUSTOMRP_SWRTPASS_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1CC43F30)
#define RPG_CUSTOMRP_SWRTPASS_GET_LOCALTOWORLDS_OFFSET UNITYSDK_OFFSET(0x1CC43FE0)
#define RPG_CUSTOMRP_SWRTPASS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1CC43FD0)
#define RPG_CUSTOMRP_SWRTPASS_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1CC43F40)
#define RPG_CUSTOMRP_SWRTPASS_GET_RENDERERINDEX8_OFFSET UNITYSDK_OFFSET(0x1CC43FB0)
#define RPG_CUSTOMRP_SWRTPASS_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1CC43F50)
#define RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLE8_OFFSET UNITYSDK_OFFSET(0x1CC43F90)
#define RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLEINDEX8_OFFSET UNITYSDK_OFFSET(0x1CC43F80)
#define RPG_CUSTOMRP_SWRTPASS_GET_UVS_OFFSET UNITYSDK_OFFSET(0x1CC43F60)
#define RPG_CUSTOMRP_SWRTPASS_GET_WORLDTOLOCALS_OFFSET UNITYSDK_OFFSET(0x1CC43FF0)
#define RPG_CUSTOMRP_SWRTPASS_INNEREXCUTE_OFFSET UNITYSDK_OFFSET(0x1CC44020)
#define RPG_CUSTOMRP_SWRTPASS_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1CC43F00)
#define RPG_CUSTOMRP_SWRTPASS_SET_BUILDREVISION_OFFSET UNITYSDK_OFFSET(0x1CC43F20)
#define RPG_CUSTOMRP_SWRTPASS_UPDATETESTCUBE_OFFSET UNITYSDK_OFFSET(0x1CC45F20)
#define RPG_CUSTOMRP_SWRTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC43E30)
#define RPG_CUSTOMRP_SWRTPASS__ENSURERESULTRT_OFFSET UNITYSDK_OFFSET(0x1CC46AB0)
#define RPG_CUSTOMRP_SWRTPASS__RECORDATLASBLIT_OFFSET UNITYSDK_OFFSET(0x1CC45670)
#define RPG_CUSTOMRP_SWRTPASS__RELEASERESULTRT_OFFSET UNITYSDK_OFFSET(0x1CC46D30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_TypeDefinitionIndex = 37870;

	class SWRTPass : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::SWRTPass** StaticGet__Active_k__BackingField()
		{
			return (::RPG::CustomRP::SWRTPass**)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_TypeDefinitionIndex)->GetStaticField(0x30410);
		}
		// static const ::System::String* KeywordCompute; // 0x0
		// static const ::System::String* KeywordNonSwrt; // 0x0
		// static const ::System::String* KeywordScreen; // 0x0
		// static const ::System::String* KernelName; // 0x0
		::UnityEngine::ComputeBuffer* _RendererIndex8; // 0x10
		::UnityEngine::ComputeBuffer* _BlasIndex; // 0x18
		::UnityEngine::ComputeBuffer* _TriangleIndex8; // 0x20
		::UnityEngine::ComputeBuffer* _Materials; // 0x28
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _CaptureColors; // 0x30
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* _CaptureColorLoads; // 0x38
		::UnityEngine::ComputeBuffer* _BlasOffsets8; // 0x40
		::UnityEngine::ComputeShader* _CachedComputeCS; // 0x48
		::UnityEngine::RenderTexture* _AtlasAlbedo; // 0x50
		::UnityEngine::ComputeBuffer* _Triangle8; // 0x58
		::UnityEngine::RenderTexture* _ComputeResultRT; // 0x60
		::UnityEngine::ComputeBuffer* _Positions; // 0x68
		::UnityEngine::Material* _CaptureMaterial; // 0x70
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* _CaptureColorStores; // 0x78
		::UnityEngine::ComputeBuffer* _Tangents; // 0x80
		::UnityEngine::ComputeBuffer* _BVHNodes8; // 0x88
		::UnityEngine::RenderTexture* _AtlasNormal; // 0x90
		::UnityEngine::ComputeBuffer* _Indices; // 0x98
		::UnityEngine::ComputeBuffer* _UVs; // 0xA0
		::UnityEngine::Rendering::RenderTargetBinding _CaptureBinding; // 0xA8
		::SWRTAsset* _CurAsset; // 0xF0
		::UnityEngine::ComputeBuffer* _WorldToLocals; // 0xF8
		::UnityEngine::Material* _BlitMaterial; // 0x100
		::UnityEngine::ComputeBuffer* _LocalToWorlds; // 0x108
		::System::Int32 _BuildRevision_k__BackingField; // 0x110
		::System::Int32 _CachedKernel; // 0x114

		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::CustomRP::SWRTPass* get_Active()
		{
			return ((::RPG::CustomRP::SWRTPass*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_ACTIVE_OFFSET))();
		}

		static ::System::Void set_Active(::RPG::CustomRP::SWRTPass* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::SWRTPass*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SET_ACTIVE_OFFSET))(a1);
		}

		::System::Int32 get_BuildRevision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BUILDREVISION_OFFSET))(this);
		}

		::System::Void set_BuildRevision(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SET_BUILDREVISION_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* get_Indices()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_INDICES_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Positions()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_POSITIONS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Tangents()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_TANGENTS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_UVs()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_UVS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_BVHNodes8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BVHNODES8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_TriangleIndex8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLEINDEX8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Triangle8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLE8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_BlasOffsets8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BLASOFFSETS8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_RendererIndex8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_RENDERERINDEX8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_BlasIndex()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BLASINDEX_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Materials()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_MATERIALS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_LocalToWorlds()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_LOCALTOWORLDS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_WorldToLocals()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_WORLDTOLOCALS_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_AtlasAlbedo()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_ATLASALBEDO_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_AtlasNormal()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_ATLASNORMAL_OFFSET))(this);
		}

		::System::Void InnerExcute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_INNEREXCUTE_OFFSET))(this, a1);
		}

		::System::Void _RecordAtlasBlit(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__RECORDATLASBLIT_OFFSET))(this, a1);
		}

		::System::Void UpdateTestCube(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_UPDATETESTCUBE_OFFSET))(this, a1, a2);
		}

		::System::Void _EnsureResultRT(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__ENSURERESULTRT_OFFSET))(this, a1, a2);
		}

		::System::Void _ReleaseResultRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__RELEASERESULTRT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_DISPOSE_OFFSET))(this);
		}
	};
}
