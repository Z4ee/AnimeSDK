#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180400A0)
#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS108_0__DRAWARROW_B__0_OFFSET UNITYSDK_OFFSET(0x180400B0)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug___c__DisplayClass108_0_TypeDefinitionIndex = 7773;

	class SuperDebug___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 dir; // 0x10
		::UnityEngine::Vector3 start; // 0x1C
		::UnityEngine::Color color; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawArrow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS108_0__DRAWARROW_B__0_OFFSET))(this);
		}
	};
}
