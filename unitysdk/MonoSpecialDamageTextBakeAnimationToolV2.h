#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoSpecialDamageTextBakeAnimationTool.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOLV2_SETCURVE_OFFSET UNITYSDK_OFFSET(0x10B01810)
#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOLV2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B018D0)
#define MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOLV2___BASE_SETCURVE_OFFSET UNITYSDK_OFFSET(0x10B018E0)

inline static constexpr unsigned int MonoSpecialDamageTextBakeAnimationToolV2_TypeDefinitionIndex = 63192;

class MonoSpecialDamageTextBakeAnimationToolV2 : public ::MonoSpecialDamageTextBakeAnimationTool
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOLV2__CTOR_OFFSET))(this);
	}

	::System::Void SetCurve(::System::String* path, ::UnityEngine::AnimationCurve* curve)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOLV2_SETCURVE_OFFSET))(this, path, curve);
	}

	::System::Void __base_SetCurve(::System::String* P0, ::UnityEngine::AnimationCurve* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MONOSPECIALDAMAGETEXTBAKEANIMATIONTOOLV2___BASE_SETCURVE_OFFSET))(this, P0, P1);
	}
};
