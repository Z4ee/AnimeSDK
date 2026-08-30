#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::CustomRP { class GradientTex; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_LENSFLAREELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AE1D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LensFlareElement_TypeDefinitionIndex = 37135;

	class LensFlareElement : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* flareImage; // 0x10
		::System::String* flareImagePath; // 0x18
		::UnityEngine::Texture2D* maskImage; // 0x20
		::System::String* maskImagePath; // 0x28
		::RPG::CustomRP::GradientTex* gradientTex; // 0x30
		::System::Single flareSizeScale; // 0x38
		::System::Single flareAlphaScale; // 0x3C
		::System::Single flareOffsetScale; // 0x40
		::System::Single flareAspect; // 0x44
		::System::Single flareRotation; // 0x48
		::UnityEngine::Vector2 fullScreenTilling; // 0x4C
		::System::Boolean UseTexmapRGB; // 0x54
		::System::Boolean ignoreDirectionRotation; // 0x55
		::System::Boolean fullScreenDustMask; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LENSFLAREELEMENT__CTOR_OFFSET))(this);
		}
	};
}
