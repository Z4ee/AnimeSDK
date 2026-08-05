#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F01DFD0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS14_0__DRAWCONE_B__0_OFFSET UNITYSDK_OFFSET(0x1F01DFE0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass14_0_TypeDefinitionIndex = 8390;

	class MyLogger___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::Foundation::MyLogger_GeometryType type; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Color wiredColor; // 0x20
		::System::Single height; // 0x30
		::UnityEngine::Color color; // 0x34
		::UnityEngine::Quaternion rotation; // 0x44
		::System::Single width; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS14_0__DRAWCONE_B__0_OFFSET))(this);
		}
	};
}
