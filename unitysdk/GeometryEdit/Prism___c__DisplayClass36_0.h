#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158751E0)
#define GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__RESETPIVOT_B__0_OFFSET UNITYSDK_OFFSET(0x15875270)

namespace GeometryEdit
{
	inline static constexpr unsigned int Prism___c__DisplayClass36_0_TypeDefinitionIndex = 49613;

	class Prism___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 center; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _ResetPivot_b__0(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__RESETPIVOT_B__0_OFFSET))(this, a1);
		}
	};
}
