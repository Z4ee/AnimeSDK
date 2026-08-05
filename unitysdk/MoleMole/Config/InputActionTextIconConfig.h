#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_INPUTACTIONTEXTICONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1350DF90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputActionTextIconConfig_TypeDefinitionIndex = 76858;

	class InputActionTextIconConfig : public ::System::Object
	{
	public:
		::System::String* KeyboardKeyPrefab; // 0x10
		::UnityEngine::Vector2 KeyboardTextPadding; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTACTIONTEXTICONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
