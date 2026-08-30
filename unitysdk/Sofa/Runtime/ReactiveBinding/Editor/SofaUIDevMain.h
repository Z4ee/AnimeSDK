#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE9209D0)
#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_START_OFFSET UNITYSDK_OFFSET(0xE920160)
#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xE920810)
#define SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE920AB0)

namespace Sofa::Runtime::ReactiveBinding::Editor
{
	inline static constexpr unsigned int SofaUIDevMain_TypeDefinitionIndex = 50397;

	class SofaUIDevMain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EDITOR_SOFAUIDEVMAIN_START_OFFSET))(this);
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
