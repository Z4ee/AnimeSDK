#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace SWRT { class SWRT; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_SWRTPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1817D110)
#define RPG_CUSTOMRP_SWRTPASS_INNEREXCUTE_OFFSET UNITYSDK_OFFSET(0x1817B890)
#define RPG_CUSTOMRP_SWRTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1817B840)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_TypeDefinitionIndex = 34952;

	class SWRTPass : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* _BlasIndex; // 0x10
		::UnityEngine::ComputeBuffer* _LocalToWorlds; // 0x18
		::UnityEngine::RenderTexture* _AtlasNormal; // 0x20
		::UnityEngine::ComputeBuffer* _RendererIndex8; // 0x28
		::UnityEngine::ComputeBuffer* _Triangle8; // 0x30
		::UnityEngine::ComputeBuffer* _Tangents; // 0x38
		::SWRT::SWRT* _CurSWRT; // 0x40
		::UnityEngine::RenderTexture* _AtlasAlbedo; // 0x48
		::UnityEngine::ComputeBuffer* _BVHNodes8; // 0x50
		::UnityEngine::ComputeBuffer* _TriangleIndex8; // 0x58
		::UnityEngine::ComputeBuffer* _Materials; // 0x60
		::UnityEngine::ComputeBuffer* _WorldToLocals; // 0x68
		::UnityEngine::ComputeBuffer* _UVs; // 0x70
		::UnityEngine::ComputeBuffer* _Indices; // 0x78
		::UnityEngine::ComputeBuffer* _Positions; // 0x80
		::UnityEngine::ComputeBuffer* _BlasOffsets8; // 0x88
		::UnityEngine::Material* _BlitMaterial; // 0x90

		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* renderData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__CTOR_OFFSET))(this, renderData);
		}

		::System::Void InnerExcute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_INNEREXCUTE_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_DISPOSE_OFFSET))(this);
		}
	};
}
