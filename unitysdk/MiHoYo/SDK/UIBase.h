#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_UIBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1CD702B0)
#define MIHOYO_SDK_UIBASE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CD70280)
#define MIHOYO_SDK_UIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD702D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 8184;

	class UIBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE_DESTROY_OFFSET))(this);
		}
	};
}
