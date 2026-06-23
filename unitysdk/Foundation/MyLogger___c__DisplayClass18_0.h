#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EDBB0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS18_0__DRAWLINE_B__0_OFFSET UNITYSDK_OFFSET(0x1E1EDBC0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass18_0_TypeDefinitionIndex = 7922;

	class MyLogger___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 startPos; // 0x10
		::System::Single startThickness; // 0x1C
		::System::Single endThickness; // 0x20
		::UnityEngine::Vector3 endPos; // 0x24
		::UnityEngine::Color color; // 0x30

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
