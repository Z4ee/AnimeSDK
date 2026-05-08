#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05F7B0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS15_0__DRAWCUBOID_B__0_OFFSET UNITYSDK_OFFSET(0x1B05F7C0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass15_0_TypeDefinitionIndex = 8116;

	class MyLogger___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Color color; // 0x1C
		::UnityEngine::Color wiredColor; // 0x2C
		::UnityEngine::Quaternion rotation; // 0x3C
		::Foundation::MyLogger_GeometryType type; // 0x4C
		::UnityEngine::Vector3 size; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCuboid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS15_0__DRAWCUBOID_B__0_OFFSET))(this);
		}
	};
}
