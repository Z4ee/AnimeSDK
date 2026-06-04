#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class AvatarEffectRendererBehavior; }
namespace RPG::Client { class AvatarEffectRendererBehavior_AvatarEffectMat; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_AVATAREFFECTRENDERER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xB35FC70)
#define RPG_CLIENT_AVATAREFFECTRENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB35F8C0)
#define RPG_CLIENT_AVATAREFFECTRENDERER_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xB35FA40)
#define RPG_CLIENT_AVATAREFFECTRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0xB35FD00)
#define RPG_CLIENT_AVATAREFFECTRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xB35FDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEffectRenderer_TypeDefinitionIndex = 65685;

	class AvatarEffectRenderer : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::AvatarEffectRendererBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarEffectRendererBehavior_AvatarEffectMat*>* AvatarEffectMats; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_7_1; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_7_2; // 0x40

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
