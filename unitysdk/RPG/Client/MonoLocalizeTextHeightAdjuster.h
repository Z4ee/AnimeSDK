#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONOLOCALIZETEXTHEIGHTADJUSTER_INIT_OFFSET UNITYSDK_OFFSET(0xC127CF0)
#define RPG_CLIENT_MONOLOCALIZETEXTHEIGHTADJUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC127DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLocalizeTextHeightAdjuster_TypeDefinitionIndex = 67816;

	class MonoLocalizeTextHeightAdjuster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MinHeight; // 0x18
		::System::Single PreferredHeight; // 0x1C
		::UnityEngine::UI::LayoutElement* TextLayoutElement; // 0x20
		::UnityEngine::UI::Text* TextTarget; // 0x28
		::UnityEngine::Transform* ResizeButton; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOCALIZETEXTHEIGHTADJUSTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOCALIZETEXTHEIGHTADJUSTER_INIT_OFFSET))(this);
		}
	};
}
