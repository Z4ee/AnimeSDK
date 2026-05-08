#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEDDAB0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS17_0__DRAWLINE_B__0_OFFSET UNITYSDK_OFFSET(0x1BEDDAC0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass17_0_TypeDefinitionIndex = 8120;

	class MyLogger___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 startPos; // 0x10
		::UnityEngine::Color color; // 0x1C
		::UnityEngine::Vector3 endPos; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawLine_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS17_0__DRAWLINE_B__0_OFFSET))(this);
		}
	};
}
