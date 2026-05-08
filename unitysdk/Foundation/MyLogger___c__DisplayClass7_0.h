#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3A840)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS7_0__DRAWCAPSULE_B__0_OFFSET UNITYSDK_OFFSET(0x1BD3A850)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass7_0_TypeDefinitionIndex = 8124;

	class MyLogger___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rotation; // 0x10
		::System::Single height; // 0x20
		::UnityEngine::Vector3 position; // 0x24
		::Foundation::MyLogger_GeometryType type; // 0x30
		::UnityEngine::Color color; // 0x34
		::System::Single width; // 0x44
		::UnityEngine::Color wiredColor; // 0x48

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
