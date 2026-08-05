#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D972170)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__DRAWCYLINDER_B__0_OFFSET UNITYSDK_OFFSET(0x1D972180)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass12_0_TypeDefinitionIndex = 8376;

	class MyLogger___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::UnityEngine::Color wiredColor; // 0x10
		::Foundation::MyLogger_GeometryType type; // 0x20
		::System::Single height; // 0x24
		::UnityEngine::Quaternion rotation; // 0x28
		::UnityEngine::Color color; // 0x38
		::System::Single width; // 0x48
		::UnityEngine::Vector3 position; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCylinder_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS12_0__DRAWCYLINDER_B__0_OFFSET))(this);
		}
	};
}
