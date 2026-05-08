#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA0CF50)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS23_0__DRAWBOUNDS_B__0_OFFSET UNITYSDK_OFFSET(0x1AA0CF60)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass23_0_TypeDefinitionIndex = 8110;

	class MyLogger___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::UnityEngine::Bounds bounds; // 0x10
		::UnityEngine::Color color; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawBounds_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS23_0__DRAWBOUNDS_B__0_OFFSET))(this);
		}
	};
}
