#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEPANELLAYOUT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19AD9AD0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEPANELLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9B60)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_ConfigMobilePanelLayout_TypeDefinitionIndex = 91098;

	class ConfigUICommon_Input_ConfigMobilePanelLayout : public ::System::Object
	{
	public:
		::System::Single horizontalEdge; // 0x10
		::System::Single horizontalSize; // 0x14
		::System::Single verticalEdge; // 0x18
		::System::Single verticalSize; // 0x1C
		::UnityEngine::Vector2 totalSize; // 0x20
		::UnityEngine::Vector2 sizeRange; // 0x28
		::UnityEngine::Vector2Int edgeLevelRange; // 0x30
		::UnityEngine::Vector2Int sizeLevelRange; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEPANELLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void OnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEPANELLAYOUT_ONVALUECHANGED_OFFSET))(this);
		}
	};
}
