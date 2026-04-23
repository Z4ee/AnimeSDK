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

#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x181629D0)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_GETDUMMYLENSFLARETEXTURE_OFFSET UNITYSDK_OFFSET(0x18164420)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x18164430)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x181629C0)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18164C20)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x181629A0)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLAREPROB_OFFSET UNITYSDK_OFFSET(0x18162A30)
#define RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLARE_OFFSET UNITYSDK_OFFSET(0x18163760)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensFlareRenderer_TypeDefinitionIndex = 35196;

	class RPGLensFlareRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::LensFlareTarget*>** StaticGet_s_LensFlareTargets()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::LensFlareTarget*>**)Il2CppClass::FromTypeDefinitionIndex(RPGLensFlareRenderer_TypeDefinitionIndex)->GetStaticField(0x43B20);
		}
		static ::System::String** StaticGet__LF_FSD_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGLensFlareRenderer_TypeDefinitionIndex)->GetStaticField(0x43B28);
		}
		::UnityEngine::Material* _LensFlareMat; // 0x28
		::System::Boolean _RTCreated; // 0x30

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matLib)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__CTOR_OFFSET))(this, matLib);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__CCTOR_OFFSET))();
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void _RenderLensFlareProb(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 posNDC, ::RPG::CustomRP::LensFlareTarget* targetLensFlare, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::CustomRP::LensFlareTarget*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLAREPROB_OFFSET))(this, cmd, pos, posNDC, targetLensFlare, targetCamera);
		}

		::System::Void _RenderLensFlare(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 posNDC, ::RPG::CustomRP::LensFlareTarget* targetLensFlare)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::CustomRP::LensFlareTarget*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER__RENDERLENSFLARE_OFFSET))(this, cmd, pos, posNDC, targetLensFlare);
		}

		static ::UnityEngine::Texture2D* GetDummyLensFlareTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_GETDUMMYLENSFLARETEXTURE_OFFSET))();
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARERENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}
	};
}
