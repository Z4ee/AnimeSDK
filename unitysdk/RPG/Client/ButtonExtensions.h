#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_BUTTONEXTENSIONS_SAFESETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x9210150)

namespace RPG::Client
{
	inline static constexpr unsigned int ButtonExtensions_TypeDefinitionIndex = 59637;

	class ButtonExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetInteractable(::UnityEngine::UI::Button* button, ::System::Boolean interactable, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Button*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUTTONEXTENSIONS_SAFESETINTERACTABLE_OFFSET))(button, interactable, outputError);
		}
	};
}
