#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ParticleSystemGroup; }

#define RPG_CLIENT_CANVASHIERARCHYDIMMER_APPLYDIM_OFFSET UNITYSDK_OFFSET(0xC9EB570)
#define RPG_CLIENT_CANVASHIERARCHYDIMMER_GET_COLORSCALE_OFFSET UNITYSDK_OFFSET(0xC9EBCB0)
#define RPG_CLIENT_CANVASHIERARCHYDIMMER_RESETDIM_OFFSET UNITYSDK_OFFSET(0xC9EBAE0)
#define RPG_CLIENT_CANVASHIERARCHYDIMMER_START_OFFSET UNITYSDK_OFFSET(0xC9EB3F0)
#define RPG_CLIENT_CANVASHIERARCHYDIMMER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9EBCE0)
#define RPG_CLIENT_CANVASHIERARCHYDIMMER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EBCC0)
#define RPG_CLIENT_CANVASHIERARCHYDIMMER__SETCOLORTOHIERARCHY_OFFSET UNITYSDK_OFFSET(0xC9EB720)
#define RPG_CLIENT_CANVASHIERARCHYDIMMER__TRYGETPARTICLEGROUPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC9EB440)

namespace RPG::Client
{
	inline static constexpr unsigned int CanvasHierarchyDimmer_TypeDefinitionIndex = 68884;

	class CanvasHierarchyDimmer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Color* StaticGet__DefaultColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(CanvasHierarchyDimmer_TypeDefinitionIndex)->GetStaticField(0x9BB0);
		}
		::UnityEngine::Color _ColorScale; // 0x18
		::System::Boolean _IsSetParticlesAlpha; // 0x28
		::System::Single _ParticlesAlpha; // 0x2C
		::RPG::Client::ParticleSystemGroup* _ParticleGroup; // 0x30
		::System::Single _InitParticleAlpha; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER_START_OFFSET))(this);
		}

		::System::Void ApplyDim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER_APPLYDIM_OFFSET))(this);
		}

		::System::Void ResetDim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER_RESETDIM_OFFSET))(this);
		}

		::System::Void _TryGetParticleGroupComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER__TRYGETPARTICLEGROUPCOMPONENT_OFFSET))(this);
		}

		::System::Void _SetColorToHierarchy(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER__SETCOLORTOHIERARCHY_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_ColorScale()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMMER_GET_COLORSCALE_OFFSET))(this);
		}
	};
}
