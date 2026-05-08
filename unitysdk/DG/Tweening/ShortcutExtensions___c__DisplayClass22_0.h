#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C545E50)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS22_0__DOFLOAT_B__0_OFFSET UNITYSDK_OFFSET(0x1C545E60)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS22_0__DOFLOAT_B__1_OFFSET UNITYSDK_OFFSET(0x1C545EA0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass22_0_TypeDefinitionIndex = 25382;

	class ShortcutExtensions___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* target; // 0x10
		::System::String* property; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOFloat_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS22_0__DOFLOAT_B__0_OFFSET))(this);
		}

		::System::Void _DOFloat_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS22_0__DOFLOAT_B__1_OFFSET))(this, x);
		}
	};
}
