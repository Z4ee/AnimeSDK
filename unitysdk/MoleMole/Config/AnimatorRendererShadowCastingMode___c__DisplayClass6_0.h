#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19280C90)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS6_0__ONZONEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x19280CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorRendererShadowCastingMode___c__DisplayClass6_0_TypeDefinitionIndex = 83392;

	class AnimatorRendererShadowCastingMode___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* path; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnZoneExit_b__0(::UnityEngine::Renderer* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___C__DISPLAYCLASS6_0__ONZONEEXIT_B__0_OFFSET))(this, x);
		}
	};
}
