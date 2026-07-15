#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_BUTTONEXTENSIONS_SAFESETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18CBB8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ButtonExtensions_TypeDefinitionIndex = 69461;

	class ButtonExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetInteractable(::UnityEngine::UI::Button* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Button*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUTTONEXTENSIONS_SAFESETINTERACTABLE_OFFSET))(a1, a2, a3);
		}
	};
}
