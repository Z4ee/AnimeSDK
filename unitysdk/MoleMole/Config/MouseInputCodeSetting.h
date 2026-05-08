#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

#define MOLEMOLE_CONFIG_MOUSEINPUTCODESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x159FA4B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MouseInputCodeSetting_TypeDefinitionIndex = 51559;

	class MouseInputCodeSetting : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::LowLevel::MouseButton MouseCode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOUSEINPUTCODESETTING__CTOR_OFFSET))(this);
		}
	};
}
