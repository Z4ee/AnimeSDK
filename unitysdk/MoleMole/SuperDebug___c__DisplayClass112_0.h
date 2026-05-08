#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02DBF0)
#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__DRAWCIRCLE_B__0_OFFSET UNITYSDK_OFFSET(0x1A02DC00)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug___c__DisplayClass112_0_TypeDefinitionIndex = 7777;

	class SuperDebug___c__DisplayClass112_0 : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::UnityEngine::Vector3 centerPoint; // 0x20
		::System::Single duration; // 0x2C
		::System::Single size; // 0x30
		::System::Boolean depthTest; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCircle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__DRAWCIRCLE_B__0_OFFSET))(this);
		}
	};
}
