#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_ITEMSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x170D86F0)

namespace MoleMole
{
	inline static constexpr unsigned int ItemStyle_TypeDefinitionIndex = 44516;

	class ItemStyle : public ::System::Object
	{
	public:
		::System::String* styleName; // 0x10
		::System::String* assetPath; // 0x18
		::System::String* fadeInAnimation; // 0x20
		::System::String* fadeOutAnimation; // 0x28
		::System::String* imageTarget; // 0x30
		::System::Boolean enableDynamicAlpha; // 0x38
		::System::Single maxShowDistance; // 0x3C
		::UnityEngine::AnimationCurve* alphaCurve; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMSTYLE__CTOR_OFFSET))(this);
		}
	};
}
