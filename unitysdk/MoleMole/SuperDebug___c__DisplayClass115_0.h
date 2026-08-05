#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D98F3E0)
#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__DRAWCIRCLE_B__0_OFFSET UNITYSDK_OFFSET(0x1D98F3F0)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug___c__DisplayClass115_0_TypeDefinitionIndex = 7959;

	class SuperDebug___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::System::Single size; // 0x20
		::UnityEngine::Vector3 centerPoint; // 0x24
		::System::Boolean depthTest; // 0x30
		::System::Single duration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCircle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS115_0__DRAWCIRCLE_B__0_OFFSET))(this);
		}
	};
}
