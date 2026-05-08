#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderTarget.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTargetSetup.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define POSTPROCESS_MKGLOW_RENDERTARGETCONTEXT_SETRENDERTARGETCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x1A2F1650)
#define POSTPROCESS_MKGLOW_RENDERTARGETCONTEXT_SETRENDERTARGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A2F12B0)
#define POSTPROCESS_MKGLOW_RENDERTARGETCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F1A60)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderTargetContext_TypeDefinitionIndex = 29669;

	class RenderTargetContext : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RenderTargetSetup>** StaticGet__mrtBindingsLegacy()
		{
			return (::Il2CppArray<::UnityEngine::RenderTargetSetup>**)Il2CppClass::FromTypeDefinitionIndex(RenderTargetContext_TypeDefinitionIndex)->GetStaticField(0x248F0);
		}
		static ::Il2CppArray<::UnityEngine::Rendering::RenderTargetBinding>** StaticGet__mrtBindingsSRP()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::RenderTargetBinding>**)Il2CppClass::FromTypeDefinitionIndex(RenderTargetContext_TypeDefinitionIndex)->GetStaticField(0x248F8);
		}
		static ::System::Int32* StaticGet__renderTargetCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderTargetContext_TypeDefinitionIndex)->GetStaticField(0x7550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERTARGETCONTEXT__CCTOR_OFFSET))();
		}

		static ::System::Void SetRenderTargetContext(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>* renderTargets)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERTARGETCONTEXT_SETRENDERTARGETCONTEXT_OFFSET))(cmd, renderTargets);
		}

		static ::System::Void SetRenderTargetContext_1(::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>* renderTargets)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERTARGETCONTEXT_SETRENDERTARGETCONTEXT_1_OFFSET))(renderTargets);
		}
	};
}
