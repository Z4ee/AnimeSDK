#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS113_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F3FF0)
#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS113_0__DRAWCIRCLE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5F4000)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug___c__DisplayClass113_0_TypeDefinitionIndex = 8063;

	class SuperDebug___c__DisplayClass113_0 : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::System::Boolean depthTest; // 0x20
		::UnityEngine::Vector3 centerPoint; // 0x24
		::System::Single duration; // 0x30
		::System::Single size; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS113_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCircle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS113_0__DRAWCIRCLE_B__0_OFFSET))(this);
		}
	};
}
