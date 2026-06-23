#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A116520)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS21_0__DODRAWARROW_B__0_OFFSET UNITYSDK_OFFSET(0x1A116530)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass21_0_TypeDefinitionIndex = 7930;

	class MyLogger___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 direction; // 0x1C
		::UnityEngine::Color color; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoDrawArrow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS21_0__DODRAWARROW_B__0_OFFSET))(this);
		}
	};
}
