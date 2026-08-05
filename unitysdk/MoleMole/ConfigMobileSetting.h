#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIGMOBILESETTING_METHOD_1_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1BD80040)
#define MOLEMOLE_CONFIGMOBILESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD80000)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMobileSetting_TypeDefinitionIndex = 69249;

	class ConfigMobileSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 buttonHorizontalEdgeRange; // 0x10
		::UnityEngine::Vector2 buttonVerticalEdgeRange; // 0x18
		::UnityEngine::Vector2 joyStickHorizontalEdgeRange; // 0x20
		::UnityEngine::Vector2 joyStickVerticalEdgeRange; // 0x28
		::UnityEngine::Vector2 totalButtonSize; // 0x30
		::UnityEngine::Vector2 totalJoyStickSize; // 0x38
		::MoleMole::Vector2Int buttonEdgeLevelRange; // 0x40
		::MoleMole::Vector2Int buttonSizeLevelRange; // 0x48
		::MoleMole::Vector2Int joyStickEdgeLevelRange; // 0x50
		::MoleMole::Vector2Int joyStickSizeLevelRange; // 0x58
		::UnityEngine::Vector2 buttonSizeRange; // 0x60
		::UnityEngine::Vector2 joyStickSizeRange; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMOBILESETTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_08DCF72FBE01FF99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMOBILESETTING_METHOD_1_08DCF72FBE01FF99_OFFSET))(this);
		}
	};
}
