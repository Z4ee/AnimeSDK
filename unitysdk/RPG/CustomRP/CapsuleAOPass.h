#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CAPSULEAOPASS_BUFFERDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C673160)
#define RPG_CUSTOMRP_CAPSULEAOPASS_COMPUTEHIZLEVEL_OFFSET UNITYSDK_OFFSET(0x1C687270)
#define RPG_CUSTOMRP_CAPSULEAOPASS_CREATERES_OFFSET UNITYSDK_OFFSET(0x1C67A1C0)
#define RPG_CUSTOMRP_CAPSULEAOPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C67ACB0)
#define RPG_CUSTOMRP_CAPSULEAOPASS_GETHIZTEXSIZE_OFFSET UNITYSDK_OFFSET(0x1C687070)
#define RPG_CUSTOMRP_CAPSULEAOPASS_INNEREXCUTE_OFFSET UNITYSDK_OFFSET(0x1C67A2B0)
#define RPG_CUSTOMRP_CAPSULEAOPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6872A0)
#define RPG_CUSTOMRP_CAPSULEAOPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66DC50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_TypeDefinitionIndex = 36864;

	class CapsuleAOPass : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__CapsuleMainCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_TypeDefinitionIndex)->GetStaticField(0xDCC0);
		}
		// static const ::System::String* _Tag; // 0x0
		::UnityEngine::ComputeBuffer* _DynamicOccluderBuffer; // 0x10
		::UnityEngine::ComputeBuffer* _OccluderListBufferRW; // 0x18
		::UnityEngine::Texture2D* capsuleBakeTex; // 0x20
		::UnityEngine::ComputeShader* cs_CapsuleAO; // 0x28
		::UnityEngine::RenderTextureDescriptor _CapsuleCoutDesc; // 0x30
		::System::Int32 _OccluderListLookupTextureRW; // 0x60

		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS__CCTOR_OFFSET))();
		}

		::System::Boolean CreateRes(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_CREATERES_OFFSET))(this, a1);
		}

		::System::Void InnerExcute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_INNEREXCUTE_OFFSET))(this, a1, a2);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void BufferDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_BUFFERDISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetHiZTexSize()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_GETHIZTEXSIZE_OFFSET))(this);
		}

		::System::Int32 ComputeHiZLevel(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_COMPUTEHIZLEVEL_OFFSET))(this, a1);
		}
	};
}
