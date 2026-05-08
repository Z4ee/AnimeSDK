#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGReferenceMode.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/ScaleMode.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3BAD0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ScaleParameters_TypeDefinitionIndex = 37384;

	class ScaleParameters : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* ScaleMultiplierX; // 0x10
		::UnityEngine::AnimationCurve* ScaleMultiplierY; // 0x18
		::System::Single ScaleOffset; // 0x20
		::System::Single ScaleX; // 0x24
		::System::Boolean ScaleUniform; // 0x28
		::System::Single ScaleY; // 0x2C
		::FluffyUnderware::Curvy::Generator::Modules::ScaleMode ScaleMode; // 0x30
		::FluffyUnderware::Curvy::Generator::CGReferenceMode ScaleReference; // 0x34

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::Modules::ScaleMode scaleMode, ::FluffyUnderware::Curvy::Generator::CGReferenceMode scaleReference, ::System::Boolean scaleUniform, ::System::Single scaleOffset, ::System::Single scaleX, ::System::Single scaleY, ::UnityEngine::AnimationCurve* scaleMultiplierX, ::UnityEngine::AnimationCurve* scaleMultiplierY)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::Modules::ScaleMode, ::FluffyUnderware::Curvy::Generator::CGReferenceMode, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALEPARAMETERS__CTOR_OFFSET))(this, scaleMode, scaleReference, scaleUniform, scaleOffset, scaleX, scaleY, scaleMultiplierX, scaleMultiplierY);
		}
	};
}
