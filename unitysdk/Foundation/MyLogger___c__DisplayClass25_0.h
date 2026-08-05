#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E752800)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS25_0__DRAWGUIFUNCTION_B__0_OFFSET UNITYSDK_OFFSET(0x1E752810)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass25_0_TypeDefinitionIndex = 8377;

	class MyLogger___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* values; // 0x10
		::System::Single yMax; // 0x18
		::System::Single yMin; // 0x1C
		::UnityEngine::Vector2 size; // 0x20
		::UnityEngine::Color background; // 0x28
		::UnityEngine::Color line; // 0x38
		::UnityEngine::Vector2 center; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawGUIFunction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS25_0__DRAWGUIFUNCTION_B__0_OFFSET))(this);
		}
	};
}
