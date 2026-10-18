#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xE97E450)
#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE97EE90)
#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xE97EC70)
#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE97F010)

namespace Sofa::Runtime::ReactiveBinding::Editor
{
	inline static constexpr unsigned int SofaUIDevMain_TypeDefinitionIndex = 50025;

	class SofaUIDevMain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_ONDESTROY_OFFSET))(this);
		}
	};
}
