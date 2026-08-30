#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOPERFORMANCEBGIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD005D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPerformanceBgImage_TypeDefinitionIndex = 72516;

	class MonoPerformanceBgImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* Image0; // 0x18
		::UnityEngine::UI::Image* Image1; // 0x20
		::UnityEngine::UI::Image* BlackBgImage; // 0x28
		::UnityEngine::UI::AspectRatioFitter* Image0RatioFitter; // 0x30
		::UnityEngine::UI::AspectRatioFitter* Image1RatioFitter; // 0x38
		::UnityEngine::Animation* AnimationComponent; // 0x40
		::System::String* SwitchImageClipName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCEBGIMAGE__CTOR_OFFSET))(this);
		}
	};
}
