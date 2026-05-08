#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00F6F0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS18_0__DRAWLINE_B__0_OFFSET UNITYSDK_OFFSET(0x1C00F700)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass18_0_TypeDefinitionIndex = 8118;

	class MyLogger___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Single endThickness; // 0x10
		::UnityEngine::Vector3 startPos; // 0x14
		::System::Single startThickness; // 0x20
		::UnityEngine::Color color; // 0x24
		::UnityEngine::Vector3 endPos; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawLine_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS18_0__DRAWLINE_B__0_OFFSET))(this);
		}
	};
}
