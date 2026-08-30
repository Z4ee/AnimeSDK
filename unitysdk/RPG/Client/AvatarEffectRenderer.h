#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class AvatarEffectRendererBehavior; }
namespace RPG::Client { class AvatarEffectRendererBehavior_AvatarEffectMat; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_AVATAREFFECTRENDERER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x193C0390)
#define RPG_CLIENT_AVATAREFFECTRENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x193BFFE0)
#define RPG_CLIENT_AVATAREFFECTRENDERER_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x193C0160)
#define RPG_CLIENT_AVATAREFFECTRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x193C0420)
#define RPG_CLIENT_AVATAREFFECTRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x193C04E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEffectRenderer_TypeDefinitionIndex = 70209;

	class AvatarEffectRenderer : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::AvatarEffectRendererBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarEffectRendererBehavior_AvatarEffectMat*>* AvatarEffectMats; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* MOLNPPOAHNO; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* ECHBGJAGJJK; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_materials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER_GET_MATERIALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* get_renderers()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER_GET_RENDERERS_OFFSET))(this);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void SetOverrideBounds(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREFFECTRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, a1, a2);
		}
	};
}
