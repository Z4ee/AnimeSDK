#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D972920)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS22_0__DRAWARROW_B__0_OFFSET UNITYSDK_OFFSET(0x1D972930)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass22_0_TypeDefinitionIndex = 8395;

	class MyLogger___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 target; // 0x10
		::UnityEngine::Color color; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawArrow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS22_0__DRAWARROW_B__0_OFFSET))(this);
		}
	};
}
