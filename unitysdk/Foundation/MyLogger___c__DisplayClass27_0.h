#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F62DDA0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__DRAWGIZMOROTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1F62DDB0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass27_0_TypeDefinitionIndex = 8392;

	class MyLogger___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 pos; // 0x10
		::System::Single size; // 0x1C
		::UnityEngine::Quaternion rotate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawGizmoRotate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS27_0__DRAWGIZMOROTATE_B__0_OFFSET))(this);
		}
	};
}
