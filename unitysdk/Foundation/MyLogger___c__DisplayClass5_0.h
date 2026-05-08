#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3A360)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS5_0__DRAWCUBE_B__0_OFFSET UNITYSDK_OFFSET(0x1BD3A370)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass5_0_TypeDefinitionIndex = 8115;

	class MyLogger___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rotation; // 0x10
		::UnityEngine::Color wiredColor; // 0x20
		::UnityEngine::Color color; // 0x30
		::UnityEngine::Vector3 position; // 0x40
		::System::Single size; // 0x4C
		::Foundation::MyLogger_GeometryType type; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCube_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS5_0__DRAWCUBE_B__0_OFFSET))(this);
		}
	};
}
