#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F01E270)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS24_0__DRAWPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x1F01E280)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass24_0_TypeDefinitionIndex = 8383;

	class MyLogger___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Single scale; // 0x10
		::UnityEngine::Color color; // 0x14
		::UnityEngine::Vector3 position; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawPoint_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS24_0__DRAWPOINT_B__0_OFFSET))(this);
		}
	};
}
