#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3AAE0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__DRAWBONE_B__0_OFFSET UNITYSDK_OFFSET(0x1BD3AAF0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass8_0_TypeDefinitionIndex = 8117;

	class MyLogger___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rotation; // 0x10
		::System::Single length; // 0x20
		::UnityEngine::Vector3 position; // 0x24
		::UnityEngine::Color wiredColor; // 0x30
		::System::Single width; // 0x40
		::UnityEngine::Color color; // 0x44
		::Foundation::MyLogger_GeometryType type; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawBone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__DRAWBONE_B__0_OFFSET))(this);
		}
	};
}
