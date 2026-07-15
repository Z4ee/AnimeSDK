#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class LensFlareTarget; }
namespace RPG::CustomRP { class MaterialLibrary; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16C11180)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_GETDUMMYLENSFLARETEXTURE_OFFSET UNITYSDK_OFFSET(0x16C12E10)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16C12E20)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C11170)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C13630)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C11150)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLAREPROB_OFFSET UNITYSDK_OFFSET(0x16C111E0)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLARE_OFFSET UNITYSDK_OFFSET(0x16C120A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensFlareRenderer_TypeDefinitionIndex = 36278;

	class RPGLensFlareRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::LensFlareTarget*>** StaticGet_s_LensFlareTargets()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::LensFlareTarget*>**)Il2CppClass::FromTypeDefinitionIndex(RPGLensFlareRenderer_TypeDefinitionIndex)->GetStaticField(0x5E690);
		}
		static ::System::String** StaticGet__LF_FSD_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGLensFlareRenderer_TypeDefinitionIndex)->GetStaticField(0x5E698);
		}
		::UnityEngine::Material* _LensFlareMat; // 0x28
		::System::Boolean _RTCreated; // 0x30

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__CCTOR_OFFSET))();
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void _RenderLensFlareProb(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::CustomRP::LensFlareTarget* a4, ::UnityEngine::Camera* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::CustomRP::LensFlareTarget*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLAREPROB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _RenderLensFlare(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::CustomRP::LensFlareTarget* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::CustomRP::LensFlareTarget*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLARE_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Texture2D* GetDummyLensFlareTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_GETDUMMYLENSFLARETEXTURE_OFFSET))();
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}
	};
}
