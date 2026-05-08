#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00F800)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS28_0__DRAWGIZMOSCALE_B__0_OFFSET UNITYSDK_OFFSET(0x1C00F810)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass28_0_TypeDefinitionIndex = 8123;

	class MyLogger___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rotate; // 0x10
		::UnityEngine::Vector3 pos; // 0x20
		::System::Single size; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawGizmoScale_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS28_0__DRAWGIZMOSCALE_B__0_OFFSET))(this);
		}
	};
}
