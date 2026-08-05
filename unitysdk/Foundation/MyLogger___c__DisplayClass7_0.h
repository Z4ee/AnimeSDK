#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F01E7A0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__DRAWCAPSULE_B__0_OFFSET UNITYSDK_OFFSET(0x1F01E7B0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass7_0_TypeDefinitionIndex = 8379;

	class MyLogger___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Single height; // 0x10
		::System::Single width; // 0x14
		::UnityEngine::Quaternion rotation; // 0x18
		::Foundation::MyLogger_GeometryType type; // 0x28
		::UnityEngine::Color color; // 0x2C
		::UnityEngine::Color wiredColor; // 0x3C
		::UnityEngine::Vector3 position; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCapsule_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__DRAWCAPSULE_B__0_OFFSET))(this);
		}
	};
}
