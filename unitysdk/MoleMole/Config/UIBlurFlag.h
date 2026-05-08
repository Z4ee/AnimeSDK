#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_UIBLURFLAG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11CB8760)
#define MOLEMOLE_CONFIG_UIBLURFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB88D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIBlurFlag_TypeDefinitionIndex = 76636;

	class UIBlurFlag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* fadeInGaussainBlurKey; // 0x18
		::System::Single fadeInOverrideDuration; // 0x20
		::System::String* fadeOutGaussainBlurKey; // 0x28
		::System::Single fadeOutOverrideDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIBLURFLAG__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIBLURFLAG_ONDESTROY_OFFSET))(this);
		}
	};
}
