#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRefreshMaterial___c__DisplayClass5_0; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11644DD0)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_1__PLAYITEMICONADDANI_B__0_OFFSET UNITYSDK_OFFSET(0x11644DE0)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_1__PLAYITEMICONADDANI_B__1_OFFSET UNITYSDK_OFFSET(0x11644E20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRefreshMaterial___c__DisplayClass5_1_TypeDefinitionIndex = 79566;

	class MonoRefreshMaterial___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* rect0; // 0x10
		::MoleMole::MonoRefreshMaterial___c__DisplayClass5_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Single _PlayItemIconAddAni_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_1__PLAYITEMICONADDANI_B__0_OFFSET))(this);
		}

		::System::Void _PlayItemIconAddAni_b__1(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_1__PLAYITEMICONADDANI_B__1_OFFSET))(this, val);
		}
	};
}
