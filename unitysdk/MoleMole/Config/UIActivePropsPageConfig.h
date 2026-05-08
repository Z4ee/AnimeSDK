#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_UIACTIVEPROPSPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D307F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIActivePropsPageConfig_TypeDefinitionIndex = 60908;

	class UIActivePropsPageConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* erodeItem; // 0x18
		::UnityEngine::GameObject* eventItem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIACTIVEPROPSPAGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
