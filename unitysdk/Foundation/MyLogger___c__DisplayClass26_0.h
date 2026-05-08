#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AB5B0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS26_0__DRAWGIZMOPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0x1C1AB5C0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass26_0_TypeDefinitionIndex = 8112;

	class MyLogger___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Single size; // 0x10
		::UnityEngine::Quaternion rotate; // 0x14
		::UnityEngine::Vector3 pos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawGizmoPosition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS26_0__DRAWGIZMOPOSITION_B__0_OFFSET))(this);
		}
	};
}
