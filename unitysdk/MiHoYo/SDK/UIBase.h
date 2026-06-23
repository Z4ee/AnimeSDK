#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_UIBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1BA970E0)
#define MIHOYO_SDK_UIBASE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1BA970B0)
#define MIHOYO_SDK_UIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA97190)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 19989;

	class UIBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE_SETACTIVE_OFFSET))(this, value);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE_DESTROY_OFFSET))(this);
		}
	};
}
