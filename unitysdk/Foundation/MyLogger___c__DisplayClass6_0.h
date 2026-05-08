#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3A5D0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS6_0__DRAWSPHERE_B__0_OFFSET UNITYSDK_OFFSET(0x1BD3A5E0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass6_0_TypeDefinitionIndex = 8126;

	class MyLogger___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rotation; // 0x10
		::Foundation::MyLogger_GeometryType type; // 0x20
		::System::Single size; // 0x24
		::UnityEngine::Color color; // 0x28
		::UnityEngine::Color wiredColor; // 0x38
		::UnityEngine::Vector3 position; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawSphere_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS6_0__DRAWSPHERE_B__0_OFFSET))(this);
		}
	};
}
