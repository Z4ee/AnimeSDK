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

#define RPG_CUSTOMRP_CAPSULEAOPASS_BUFFERDISPOSE_OFFSET UNITYSDK_OFFSET(0x192A5040)
#define RPG_CUSTOMRP_CAPSULEAOPASS_COMPUTEHIZLEVEL_OFFSET UNITYSDK_OFFSET(0x192B90F0)
#define RPG_CUSTOMRP_CAPSULEAOPASS_CREATERES_OFFSET UNITYSDK_OFFSET(0x192AC040)
#define RPG_CUSTOMRP_CAPSULEAOPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x192ACB30)
#define RPG_CUSTOMRP_CAPSULEAOPASS_GETHIZTEXSIZE_OFFSET UNITYSDK_OFFSET(0x192B8EF0)
#define RPG_CUSTOMRP_CAPSULEAOPASS_INNEREXCUTE_OFFSET UNITYSDK_OFFSET(0x192AC130)
#define RPG_CUSTOMRP_CAPSULEAOPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x192B9120)
#define RPG_CUSTOMRP_CAPSULEAOPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1929FB20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_TypeDefinitionIndex = 36864;

	class CapsuleAOPass : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__CapsuleMainCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_TypeDefinitionIndex)->GetStaticField(0xDD30);
		}
		// static const ::System::String* _Tag; // 0x0
		::UnityEngine::Texture2D* capsuleBakeTex; // 0x10
		::UnityEngine::ComputeShader* cs_CapsuleAO; // 0x18
		::UnityEngine::ComputeBuffer* _OccluderListBufferRW; // 0x20
		::UnityEngine::ComputeBuffer* _DynamicOccluderBuffer; // 0x28
		::System::Int32 _OccluderListLookupTextureRW; // 0x30
		::UnityEngine::RenderTextureDescriptor _CapsuleCoutDesc; // 0x34

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
