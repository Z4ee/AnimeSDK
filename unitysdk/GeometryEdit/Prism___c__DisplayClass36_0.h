#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE2430)
#define GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__RESETPIVOT_B__0_OFFSET UNITYSDK_OFFSET(0x11AE24C0)

namespace GeometryEdit
{
	inline static constexpr unsigned int Prism___c__DisplayClass36_0_TypeDefinitionIndex = 45785;

	class Prism___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 center; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _ResetPivot_b__0(::UnityEngine::Vector2 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM___C__DISPLAYCLASS36_0__RESETPIVOT_B__0_OFFSET))(this, v);
		}
	};
}
