#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19280BE0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS4_0__ONZONEENTER_B__0_OFFSET UNITYSDK_OFFSET(0x19280BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorRendererShadowCastingMode___c__DisplayClass4_0_TypeDefinitionIndex = 83393;

	class AnimatorRendererShadowCastingMode___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* path; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnZoneEnter_b__0(::UnityEngine::Renderer* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS4_0__ONZONEENTER_B__0_OFFSET))(this, x);
		}
	};
}
